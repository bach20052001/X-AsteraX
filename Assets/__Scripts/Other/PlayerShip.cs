#define DEBUG_PlayerShip_RespawnNotifications

using System.Collections;
using UnityEngine;
using FXV;
//using UnityStandardAssets.CrossPlatformInput;

public enum Mode
{
    Animation,
    Normal,
    FightingBoss
}

[RequireComponent(typeof(Rigidbody))]
public class PlayerShip : MonoBehaviour
{
    private ObjectPooling ObjectPoolingBullet;

    public Ship_SO shipParameter;

    private bool canDestroy;

    private ParticleSystem AppearEffect;

    Vector3 currentVel = new Vector3();

    static private PlayerShip _S;

    static public PlayerShip S
    {
        get
        {
            return _S;
        }
        private set
        {
            if (_S != null)
            {
                Debug.LogWarning("Second attempt to set PlayerShip singleton _S.");
            }
            _S = value;
        }
    }

    [Header("Set in Inspector")]

    public Skill_SO skilldata;

    private Skill shipSkill;

    private float shipSpeed = 10f;

    private float maxSpeed = 12.5f;

    private int Ship_HP = 1;

    private int MaxHP = 1;

    private Skills skill;

    private int shipAttack = 1;

    private Vector3 offset = new Vector3(0.5f, 0, 0);


    [SerializeField] private GameObject Shield;

    private Vector3 fightPostion;

    [HideInInspector] public bool canControl = true;

    Rigidbody rigid;

    public Mode modeControl;

    private Camera mainCamera;
    FXVShieldPostprocess shieldPost;

    private void Start()
    {
        mainCamera = Camera.main;

        shieldPost = mainCamera.GetComponent<FXVShieldPostprocess>();

        shipSpeed = maxSpeed * shipParameter.speed / 5;

        Ship_HP = shipParameter.HP;
        MaxHP = shipParameter.HP;
        shipAttack = shipParameter.attack;
        skill = shipParameter.skill;

        //bulletPrefab = AsteraX.S.ListDataBullet[(BulletMode)shipParameter.BulletType];

        AppearEffect = AsteraX.S.warp;

        switch (skill)
        {
            case Skills.MachineGun:
                {
                    shipSkill = gameObject.AddComponent<MachineGun>();
                    break;
                }
            case Skills.Immortal:
                {
                    shipSkill = gameObject.AddComponent<Immortal>();
                    break;
                }
            case Skills.Flash:
                {
                    shipSkill = gameObject.AddComponent<Flash>();
                    break;
                }
            case Skills.Invisible:
                {
                    shipSkill = gameObject.AddComponent<Invisible>();
                    break;
                }
            default:
                {
                    break;
                }
        }

        ObjectPoolingBullet = AsteraX.S.ListDataBullet[(BulletMode)shipParameter.BulletType];

        shipSkill.InitData(skilldata.countdownSkill, skilldata.maxIncremental);

        modeControl = Mode.Normal;
        fightPostion = new Vector3(-12, -6, 0);
    }

    public Vector3 PlayerShipStartPos()
    {
        return fightPostion;
    }

    public void ImmortalSetting(bool canDestroy)
    {
        this.canDestroy = canDestroy;
    }

    private void OnEnable()
    {
        canControl = true;

        Ship_HP = shipParameter.HP;

        shipSpeed = maxSpeed * shipParameter.speed / 5;

        StartCoroutine(ShieldWhenActive());
    }

    IEnumerator ShieldWhenActive()
    {
        if (shieldPost != null)
        {
            shieldPost.enabled = true;
        }

        Shield.SetActive(true);
        canDestroy = false;
        yield return new WaitForSeconds(2);

        if (shieldPost != null)
        {
            shieldPost.enabled = false;
        }

        Shield.SetActive(false);
        canDestroy = true;
    }

    void Awake()
    {
        S = this;

        // NOTE: We don't need to check whether or not rigid is null because of [RequireComponent()] above
        rigid = GetComponent<Rigidbody>();

    }

    void Update()
    {
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY)
        {
            if (modeControl == Mode.Normal || modeControl == Mode.FightingBoss)
            {
                if (canControl)
                {
                    float aX = Input.GetAxis("Horizontal");
                    float aY = Input.GetAxis("Vertical");

                    Vector3 vel = new Vector3(aX, aY, 0);

                    if (vel != Vector3.zero)
                    {
                        currentVel = vel;
                    }

                    if (vel.magnitude > 1)
                    {
                        vel.Normalize();
                    }
                    rigid.velocity = vel * shipSpeed;
                }

                if (Input.GetButtonDown("Fire1"))
                {
                    {
                        Fire(modeControl);
                        this.PostEvent(GameEvent.OnPlayerFired);
                    }

                }

                if (Input.GetButtonDown("Fire2"))
                {
                    shipSkill.Execute();
                }

                if (modeControl == Mode.Normal)
                {
                    this.transform.up = currentVel;
                }
            }
        }
        else
        {
            rigid.velocity = Vector3.zero;
        }
    }

    public void TransitionModeControl(Mode mode)
    {
        switch (mode)
        {
            case Mode.Animation:
                {
                    MoveToFightPosition();
                    canControl = false;
                    break;

                }
            case Mode.FightingBoss:
                {
                    ObjectPoolingBullet = AsteraX.S.ListDataBullet[BulletMode.PlayerVsBoss];
                    canControl = true;
                    break;
                }
            case Mode.Normal:
            {
                    ObjectPoolingBullet = AsteraX.S.ListDataBullet[BulletMode.PlayerVsAsteroid];
                    canControl = true;
                    break;
            }
        }
        modeControl = mode;
    }

    private void MoveToFightPosition()
    {
        StartCoroutine(MoveTo(fightPostion));
    }

    IEnumerator MoveTo(Vector3 position)
    {
        while (true)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, position, Time.deltaTime * shipSpeed * 1.5f);
            yield return new WaitForEndOfFrame();

            if (Vector3.Distance(this.transform.position, position) < 0.1f)
            {
                StopCoroutine(MoveTo(position));
                break;
            }

        }
    }

    public float GetShipSpeed()
    {
        return shipSpeed;
    }

    public void SetShipSpeed(float speed)
    {
        shipSpeed = speed;
    }

    private void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.CompareTag("Asteroid") || collision.gameObject.CompareTag("EnemyBullet") || collision.gameObject.CompareTag("EnemyShip"))
        {
            if (collision.gameObject.CompareTag("EnemyBullet"))
            {
                collision.gameObject.SetActive(false);
            }

            if (canDestroy)
            {
                --Ship_HP;

                GameObject explosion = AsteraX.S.explosionOP.GetUnactiveObject();

                explosion.transform.position = transform.position;

                this.PostEvent(GameEvent.OnPlayerDamaged, (float)((float)Ship_HP / (float)MaxHP));

                if (Ship_HP > 0)
                {
                    if (collision.gameObject.CompareTag("Asteroid") || collision.gameObject.CompareTag("EnemyShip"))
                    {
                        PlayerLostControl();
                    }
                }
                else
                {
                    this.PostEvent(GameEvent.PlayerShipDestroyed);
                    this.PostEvent(GameEvent.OnPlayerDamaged, 1f);
                    gameObject.SetActive(false);
                    if (AsteraX.jumpRemaining > 0)
                    {
                        ActiveEffect(transform.position);
                    }
                }
            }
        }
    }

    public void Damaged()
    {
        if (canDestroy)
        {
            --Ship_HP;
            if (Ship_HP <= 0)
            {
                this.PostEvent(GameEvent.PlayerShipDestroyed);
                gameObject.SetActive(false);
                if (AsteraX.jumpRemaining > 0)
                {
                    ActiveEffect(transform.position);
                }
            }
        }
    }

    public void ActiveEffect(Vector3 position)
    {
        Instantiate(AppearEffect, position, Quaternion.identity);
    }

    private void PlayerLostControl()
    {
        StartCoroutine(LostControl());
    }

    IEnumerator LostControl()
    {
        canControl = false;
        yield return new WaitForSeconds(0.35f);
        canControl = true;
    }

    public void Fire(Mode mode)
    {
        // Get direction to the mouse
        Vector3 mPos = Input.mousePosition;
        mPos.z = -Camera.main.transform.position.z;
        Vector3 mPos3D = Camera.main.ScreenToWorldPoint(mPos);

        if (shipAttack == 1)
        {
            Bullet go = ObjectPoolingBullet.GetUnactiveBullet();
            go.transform.position = transform.position;

            if (mode == Mode.Normal)
            {
                go.transform.LookAt(mPos3D);

                go.InitVel();
            }
            else if (mode == Mode.FightingBoss)
            {
                go.transform.forward = Vector3.up;

                go.InitVel();
            }
        }

        else if (shipAttack == 2)
        {
            Bullet b1 = ObjectPoolingBullet.GetUnactiveBullet();
            Bullet b2 = ObjectPoolingBullet.GetUnactiveBullet();

            b1.transform.position = transform.position + offset;
            b2.transform.position = transform.position - offset;

            if (mode == Mode.Normal)
            {
                b1.transform.LookAt(mPos3D + offset);
                b2.transform.LookAt(mPos3D - offset);

                b1.InitVel();
                b2.InitVel();
            }
            else if (mode == Mode.FightingBoss)
            {
                b1.transform.forward = Vector3.up;
                b2.transform.forward = Vector3.up;

                b1.InitVel();
                b2.InitVel();
            }
        }
    }

    static public float MAX_SPEED
    {
        get
        {
            return S.shipSpeed;
        }
    }

    static public Vector3 POSITION
    {
        get
        {
            return S.transform.position;
        }
    }
}