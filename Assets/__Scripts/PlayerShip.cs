﻿#define DEBUG_PlayerShip_RespawnNotifications

using System;
using System.Collections;
using UnityEngine;
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

    private Skill shipSkill;

    private float shipSpeed = 10f;

    private float maxSpeed = 12.5f;

    private int Ship_HP = 1;

    private int MaxHP = 1;

    private string skill;

    private int shipAttack = 1;

    private Vector3 offset = new Vector3(0.5f, 0, 0);

    public GameObject bulletPrefab;

    private Vector3 fightPostion;

    [HideInInspector] public bool canControl = true;

    Rigidbody rigid;

    public Mode modeControl;

    private void Start()
    {
        shipSpeed = maxSpeed * shipParameter.speed / 5;

        Ship_HP = shipParameter.HP;
        MaxHP = shipParameter.HP;
        shipAttack = shipParameter.attack;
        skill = shipParameter.skill;

        AppearEffect = AsteraX.S.warp;

        switch (skill)
        {
            case "Machine Gun":
                {
                    shipSkill = gameObject.AddComponent<MachineGun>();
                    break;
                }
            case "Immortal":
                {
                    shipSkill = gameObject.AddComponent<Immortal>();
                    break;
                }
            case "Flash":
                {
                    shipSkill = gameObject.AddComponent<Flash>();
                    break;
                }
            case "Invisible":
                {
                    shipSkill = gameObject.AddComponent<Invisible>();
                    break;
                }
            default:
                {
                    break;
                }
        }
        modeControl = Mode.Normal;
        fightPostion = new Vector3(-12, -6, 0);
        bulletPrefab.GetComponent<OffScreenWrapper>().enabled = true;
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

        StartCoroutine(shieldWhenActive());
    }

    IEnumerator shieldWhenActive()
    {

        canDestroy = false;
        yield return new WaitForSeconds(2);
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
                        this.PostEvent(Event.OnPlayerFired);
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
                    canControl = true;
                    bulletPrefab.GetComponent<OffScreenWrapper>().enabled = false;
                    GetComponentInChildren<TurretPointAtMouse>().gameObject.transform.rotation = Quaternion.Euler(new Vector3(-90 ,0 ,0));
                    GetComponentInChildren<TurretPointAtMouse>().enabled = false;
                    break;
                }
            case Mode.Normal:
            {
                    canControl = true;
                    bulletPrefab.GetComponent<OffScreenWrapper>().enabled = true;
                    GetComponentInChildren<TurretPointAtMouse>().enabled = true;
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
        if (collision.gameObject.tag.Equals("Laser"))
        {
            Debug.Log("A");
        }
        if (collision.gameObject.tag.Equals("Asteroid") || collision.gameObject.tag.Equals("EnemyBullet") || collision.gameObject.tag.Equals("EnemyShip"))
        {
            if (collision.gameObject.tag.Equals("EnemyBullet"))
            {
                Destroy(collision.gameObject);
            }

            if (canDestroy)
            {
                --Ship_HP;
                Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);

                this.PostEvent(Event.OnPlayerDamaged, (float)((float)Ship_HP / (float)MaxHP));

                if (Ship_HP > 0)
                {
                    PlayerLostControl();
                }
                else
                {
                    this.PostEvent(Event.PlayerShipDestroyed);
                    this.PostEvent(Event.OnPlayerDamaged, 1f);
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
                this.PostEvent(Event.PlayerShipDestroyed);
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
            // Instantiate the Bullet and set its direction
            GameObject go = Instantiate<GameObject>(bulletPrefab);
            go.transform.position = transform.position;

            if (mode == Mode.Normal)
            {
                go.transform.LookAt(mPos3D);
            }
            else if (mode == Mode.FightingBoss)
            {
                go.transform.forward = Vector3.up;
            }
        }

        else if (shipAttack == 2)
        {

            GameObject b1 = Instantiate<GameObject>(bulletPrefab);
            GameObject b2 = Instantiate<GameObject>(bulletPrefab);

            b1.transform.position = transform.position + offset;
            b2.transform.position = transform.position - offset;

            if (mode == Mode.Normal)
            {
                b1.transform.LookAt(mPos3D + offset);
                b2.transform.LookAt(mPos3D - offset);
            }
            else if (mode == Mode.FightingBoss)
            {
                b1.transform.forward = Vector3.up;
                b2.transform.forward = Vector3.up;
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