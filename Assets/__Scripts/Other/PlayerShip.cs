#define DEBUG_PlayerShip_RespawnNotifications

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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

    private Vector3 fightPostion;

    [HideInInspector] public bool canControl = true;

    Rigidbody rigid;

    public Mode modeControl;
    public GameObject gun;
    public List<GameObject> Muzzles = new List<GameObject>();

    [SerializeField] private GameObject Shield;
    private Vector3 currentDirection = new Vector3(0, 1, 0);

    private TurretPointAtMouse turretPointAtMouse;
    private TurretRotateWithJoy turretRotateWithJoy;

    private float fireRate = 0.25f;

    public List<GameObject> shotPoints = new List<GameObject>();

    private void Start()
    {
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
        InitControlDevice();
#if UNITY_ANDROID || UNITY_IOS
        InitAbility();
#endif

    }

    private void InitAbility()
    {
        Button abilityBtn = GameObject.Find("Button_Ability").GetComponent<Button>();

        abilityBtn.onClick.AddListener(delegate
        {
            shipSkill.Execute();
        });
    }

    private void InitControlDevice()
    {
        turretPointAtMouse = gun.GetComponent<TurretPointAtMouse>();
        turretRotateWithJoy = gun.GetComponent<TurretRotateWithJoy>();

#if UNITY_STANDALONE
        turretRotateWithJoy.enabled = false;
        turretPointAtMouse.enabled = true;
#elif UNITY_ANDROID || UNITY_IOS
        turretRotateWithJoy.enabled = true;
        turretPointAtMouse.enabled = false;
#endif
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
        Shield.SetActive(true);
        canDestroy = false;
        yield return new WaitForSeconds(2);
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
        Movement();
    }

    private void LateUpdate()
    {
#if UNITY_STANDALONE
        ShootStandalone();
        ActiveAbility();
#elif UNITY_ANDROID || UNITY_IOS
        fireRate -= Time.deltaTime;
        if (fireRate <= 0)
        {
            ShootMobile();
            fireRate = 0.25f;
        }
#endif
    }

    private void Movement()
    {
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY)
        {
            if (modeControl == Mode.Normal || modeControl == Mode.FightingBoss)
            {
                if (canControl)
                {
#if UNITY_EDITOR
                    float aX = Input.GetAxis("Horizontal");
                    float aY = Input.GetAxis("Vertical");

                    if (aX == 0 && aY == 0)
                    {
                        aX = UltimateJoystick.GetHorizontalAxis("Movement");
                        aY = UltimateJoystick.GetVerticalAxis("Movement");
                    }
#elif UNITY_STANDALONE
                    float aX = Input.GetAxis("Horizontal");
                    float aY = Input.GetAxis("Vertical");
#elif UNITY_ANDROID || UNITY_IOS
                    float aX = UltimateJoystick.GetHorizontalAxis("Movement");
                    float aY = UltimateJoystick.GetVerticalAxis("Movement");
#endif
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

                    if (modeControl == Mode.Normal)
                    {
                        this.transform.up = currentVel;
                    }
                }
            }
        }
        else
        {
            rigid.velocity = Vector3.zero;
        }
    }

    public void ActiveAbility()
    {
        if (Input.GetButtonDown("Fire2"))
        {
            shipSkill.Execute();
        }
    }

    private IEnumerator ActiveMuzzle()
    {
        foreach (GameObject muzzle in Muzzles)
        {
            muzzle.SetActive(true);
        }
        yield return new WaitForSeconds(0.15f);
        foreach (GameObject muzzle in Muzzles)
        {
            muzzle.SetActive(false);
        }
    }

    private void ShootMobile()
    {
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY)
        {
            if (modeControl == Mode.Normal || modeControl == Mode.FightingBoss)
            {
                if (gameObject.activeSelf)
                {
                    Fire(modeControl);
                    this.PostEvent(GameEvent.OnPlayerFired);
                }
            }
        }
    }


    private void ShootStandalone()
    {
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY)
        {
            if (modeControl == Mode.Normal || modeControl == Mode.FightingBoss)
            {

                if (Input.GetButtonDown("Fire1"))
                {
                    Fire(modeControl);
                }
            }
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
#if UNITY_STANDALONE
                    turretPointAtMouse.enabled = false;
                    gun.transform.forward = Vector3.up;
#elif UNITY_ANDROID || UNITY_IOS
                    currentDirection = Vector3.up;
                    gun.transform.LookAt(this.transform.position + currentDirection * 5, Vector3.back);

#endif
                    ObjectPoolingBullet = AsteraX.S.ListDataBullet[BulletMode.PlayerVsBoss];
                    canControl = true;
                    break;
                }
            case Mode.Normal:
                {
#if UNITY_STANDALONE
                    turretPointAtMouse.enabled = true;
#endif
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
        StartCoroutine(ActiveMuzzle());

        foreach (GameObject shotPoint in shotPoints)
        {
            Bullet go = ObjectPoolingBullet.GetUnactiveBullet();
            go.transform.position = shotPoint.transform.position;
            //gun.GetComponent<GunRecoil>().Recoil();
            if (mode == Mode.Normal)
            {
                go.transform.forward = gun.transform.forward;

                go.InitVel();
            }
            else if (mode == Mode.FightingBoss)
            {
                go.transform.forward = Vector3.up;

                go.InitVel();
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