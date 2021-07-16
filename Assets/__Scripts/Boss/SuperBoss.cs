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
    public GameObject bulletPrefab;

    private GameObject bullet;

    private float fireRate;

    public List<GameObject> ListGun = new List<GameObject>();
    private List<Vector3> positionCanMove = new List<Vector3>();

    private int HP;
    private int currentHP;

    public GameObject coreEnergy;
    public ParticleSystem energy;

    private PlayerShip player;
    private float speed;
    public State state;
    private int point;

    private Renderer energyMat;

    private Vector3 startPosition;
    private Vector3 outPosition;
    private Vector3 leftPosition;
    private Vector3 rightPosition;

    private byte dfRed;
    private byte dfBlue;
    private byte dfGreen;


    private bool isReadyToAttack = false;
    public List<ParticleSystem> FXBeforeDestroy = new List<ParticleSystem>();

    private float xRange = 8;

    private AttackMode mode;
    private Laser laser;

    [System.Obsolete]
    void Start()
    {
        HP = 200;
        currentHP = 200;
        speed = 6f;
        point = 5000;
        mode = AttackMode.Shoot;
        xRange = 8;
        fireRate = 1.5f;

        player = FindObjectOfType<PlayerShip>();
        energyMat = coreEnergy.GetComponent<Renderer>();
        laser = GetComponent<Laser>();

        leftPosition = new Vector3(-xRange, 5, 0);
        rightPosition = new Vector3(xRange, 5, 0);
        outPosition = new Vector3(0, 14, 0);
        startPosition = new Vector3(0, 5, 0);

        positionCanMove.Add(leftPosition);
        positionCanMove.Add(rightPosition);
        positionCanMove.Add(startPosition);

        state = State.Fight;
        MoveToFightPosition();

        dfRed = (byte)(energy.startColor.r * 255);
        dfGreen = (byte)(energy.startColor.g * 255);
        dfBlue = (byte)(energy.startColor.b * 255);

        InitBulletProperties();
        StartCoroutine(ChangeWeaponToFight());
        StartCoroutine(ChangePosition());
    }
    private void MoveToFightPosition()
    {
        StartCoroutine(MoveToStartFight());
    }

    private void InitBulletProperties()
    {
        bullet = bulletPrefab;
        bullet.GetComponent<OffScreenWrapper>().enabled = false;
        bullet.GetComponent<Bullet>().lifeTime = 1f;
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
        player.TransitionModeControl(Mode.Animation);

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
            player.TransitionModeControl(Mode.Animation);
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
            this.PostEvent(Event.OnDestroyedBoss, point);
            Destroy(this.gameObject);
        }

        player.TransitionModeControl(modeWhenFinish);
    }

    [System.Obsolete]
    private void DecreaseEnergy(int rate)
    {
        energyMat.material.color = new Color32((byte)rate, (byte)rate, (byte)rate, 1);
        energy.startColor = new Color32(dfRed, dfGreen, dfBlue, (byte)rate);
    }

    [System.Obsolete]
    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag.Equals("Bullet"))
        {
            currentHP--;

            this.PostEvent(Event.OnEnemyDamaged, (float)currentHP / HP);

            DecreaseEnergy((int)Mathf.Abs(255 * currentHP / HP));

            if (currentHP <= 20)
            {
                FXBeforeDestroy[1].gameObject.SetActive(true);
            }

            if (currentHP <= 0)
            {
                state = State.Destroyed;
                BeforeDestroy();
            }

            Instantiate(AsteraX.S.explosion, collision.contacts[0].point, Quaternion.identity);

            Destroy(collision.gameObject);
        }
    }

    private void Update()
    {

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
        StopAllCoroutines();

        GetComponent<MeshCollider>().isTrigger = true;

        isReadyToAttack = false;

        laser.enabled = false;

        for (int i = 0; i < FXBeforeDestroy.Count; i++)
        {
            FXBeforeDestroy[i].gameObject.SetActive(true);
        }

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
                    laser.enabled = true;
                    break;
                }
            case AttackMode.Combine:
                {
                    laser.enabled = true;
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
            GameObject Bullet = Instantiate(bullet, ListGun[i].transform.position, Quaternion.identity);
            Bullet.transform.forward = Vector3.down;
        }
    }
}
