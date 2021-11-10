using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AttackMode
{
    Shoot,
    Laser,
    Combine
}

public enum State
{
    Fight,
    Destroyed
}

public class SuperBoss : MonoBehaviour
{
    private ObjectPooling bulletPooling;

    public SuperBoss_SO bossData;

    private float fireRate;

    public List<GameObject> ListGun = new List<GameObject>();
    private List<Vector3> positionCanMove = new List<Vector3>();

    private int HP;
    private int currentHP;

    public ParticleSystem energy;

    private PlayerShip player;
    private float speed;
    public State state;
    private int point;

    private Vector3 startPosition;
    private Vector3 outPosition;
    private Vector3 leftPosition;
    private Vector3 rightPosition;

    private Vector3 playerStartPos;

    private byte dfRed;
    private byte dfBlue;
    private byte dfGreen;

    private bool isLaserActive;

    private bool isReadyToAttack = false;

    private float xRange = 8;

    private AttackMode mode;
    private Laser laser;

    private void Awake()
    {
        bossData = LoadDatabase.Instance.data_superboss;
    }

    [System.Obsolete]
    void Start()
    {
        HP = bossData.HP;
        currentHP = bossData.HP;
        speed = bossData.Speed;
        point = bossData.point;
        mode = AttackMode.Shoot;
        xRange = bossData.xRange;
        fireRate = bossData.FireRate;
        isLaserActive = bossData.Laser;

        bulletPooling = AsteraX.S.ListDataBullet[(BulletMode)bossData.BulletType];


        player = FindObjectOfType<PlayerShip>();
        laser = GetComponent<Laser>();

        leftPosition = new Vector3(-xRange, 5, 0);
        rightPosition = new Vector3(xRange, 5, 0);
        outPosition = new Vector3(0, 14, 0);
        startPosition = new Vector3(0, 5, 0);

        if (player != null)
        {
            playerStartPos = player.PlayerShipStartPos();
        }

        positionCanMove.Add(leftPosition);
        positionCanMove.Add(rightPosition);
        positionCanMove.Add(startPosition);

        state = State.Fight;
        MoveToFightPosition();

        dfRed = (byte)(energy.startColor.r * 255);
        dfGreen = (byte)(energy.startColor.g * 255);
        dfBlue = (byte)(energy.startColor.b * 255);

        StartCoroutine(ChangeWeaponToFight());
        StartCoroutine(ChangePosition());
    }

    private void MoveToFightPosition()
    {
        StartCoroutine(MoveToStartFight());
    }

    IEnumerator MoveToStartFight()
    {
        StartCoroutine(MoveTo(startPosition, true, Mode.FightingBoss));
        yield return new WaitForEndOfFrame();
        isReadyToAttack = true;
        yield break;
    }

    IEnumerator MoveTo(Vector3 position)
    {
        if (player == null)
        {
            player = FindObjectOfType<PlayerShip>();
        }

        if (player != null)
        {
            player.TransitionModeControl(Mode.Animation);
        }

        while (state == State.Fight)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, position, Time.deltaTime * speed);
            yield return new WaitForEndOfFrame();

            if (Vector3.Distance(this.transform.position, position) < 0.1f)
            {
                StopCoroutine(MoveTo(position));
                break;
            }

        }
    }

    IEnumerator MoveTo(Vector3 position, bool isLockPlayer, Mode modeWhenFinish)
    {
        if (isLockPlayer)
        {
            if (player != null)
            {
                player.TransitionModeControl(Mode.Animation);
            }
            else
            {
                player = FindObjectOfType<PlayerShip>();
                player.transform.position = playerStartPos;
            }
        }

        while (state == State.Fight || position == outPosition)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, position, Time.deltaTime * speed);
            yield return new WaitForEndOfFrame();

            if (Vector3.Distance(this.transform.position, position) < 0.1f)
            {
                StopCoroutine(MoveTo(position));
                break;
            }
        }

        yield return new WaitForEndOfFrame();


        if (position == outPosition)
        {
            this.PostEvent(GameEvent.OnDestroyedSuperBoss, point);
            Destroy(this.gameObject);
        }

        if (player != null)
        {
            player.TransitionModeControl(modeWhenFinish);
        }
    }

    [System.Obsolete]
    private void DecreaseEnergy(int rate)
    {
        energy.startColor = new Color32(dfRed, dfGreen, dfBlue, (byte)rate);
    }

    [System.Obsolete]
    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            currentHP--;

            this.PostEvent(GameEvent.OnEnemyDamaged, (float)currentHP / HP);

            DecreaseEnergy((int)Mathf.Abs(255 * currentHP / HP));

            GameObject explosion = AsteraX.S.explosionOP.GetUnactiveObject();

            explosion.transform.position = collision.contacts[0].point;

            collision.gameObject.SetActive(false);

            if (currentHP == 0)
            {
                BeforeDestroy();
            }
        }
    }

    private void Update()
    {
        //#if UNITY_EDITOR
        if (Input.GetKeyDown(KeyCode.O))
        {
            DestroySelf();
        }
        //#endif
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY && state == State.Fight)
        {
            if (isReadyToAttack)
            {
                fireRate -= Time.deltaTime;

                if (fireRate <= 0)
                {
                    if (currentHP > 0)
                    {
                        Attack();
                        fireRate = 1.5f;
                    }
                }
            }
        }
    }

    public void DestroySelf()
    {
        AsteraX.S.isBossAppear = false;
        BeforeDestroy();
    }

    private IEnumerator ChangeWeaponToFight()
    {
        while (AsteraX.GameState == AsteraX.BaseGameState.PLAY && state == State.Fight)
        {
            yield return new WaitForSeconds(4);

            AttackMode newMode = (AttackMode)Random.Range(0, 3);

            ChangeWeapon(newMode);

        }
    }

    private void BeforeDestroy()
    {
        //#if UNITY_EDITOR
        AsteraX.S.isBossAppear = false;
        //#endif
        state = State.Destroyed;

        StopAllCoroutines();

        GetComponent<MeshCollider>().isTrigger = true;

        isReadyToAttack = false;

        laser.enabled = false;

        StartCoroutine(MoveTo(outPosition, true, Mode.Normal));
    }

    private void Attack()
    {
        switch (mode)
        {
            case AttackMode.Shoot:
                {
                    Shoot();
                    break;
                }
            case AttackMode.Laser:
                {
                    break;
                }

            case AttackMode.Combine:
                {
                    Shoot();
                    break;
                }
        }
    }

    private void ChangeWeapon(AttackMode attackMode)
    {
        switch (attackMode)
        {
            case AttackMode.Shoot:
                {
                    laser.enabled = false;
                    break;
                }
            case AttackMode.Laser:
                {
                    if (isLaserActive)
                    {
                        laser.enabled = true;
                    }
                    break;

                }
            case AttackMode.Combine:
                {
                    if (isLaserActive)
                    {
                        laser.enabled = true;
                    }
                    break;
                }
        }

        mode = attackMode;
    }

    IEnumerator ChangePosition()
    {
        while (AsteraX.GameState == AsteraX.BaseGameState.PLAY && state == State.Fight)
        {
            Vector3 pos;

            yield return new WaitForSeconds(2);

            pos = positionCanMove[Random.Range(0, positionCanMove.Count)];

            StartCoroutine(MoveTo(pos, false, Mode.FightingBoss));

            yield return new WaitForSeconds(1);
        }
        yield break;
    }

    public void Shoot()
    {
        for (int i = 0; i < ListGun.Count; i++)
        {
            Bullet bullet = bulletPooling.GetUnactiveBullet();

            bullet.transform.position = ListGun[i].transform.position;

            bullet.transform.forward = Vector3.down;

            bullet.InitVel();
        }
    }
}
