#define DEBUG_PlayerShip_RespawnNotifications

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityStandardAssets.CrossPlatformInput;

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

    Rigidbody rigid;

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
            case "Rocket":
                {
                    shipSkill = gameObject.AddComponent<Rocket>();
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
        }
    }

    public void ImmortalSetting(bool canDestroy)
    {
        this.canDestroy = canDestroy;
    }

    private void OnEnable()
    {
        Ship_HP = shipParameter.HP;

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
            // Using Horizontal and Vertical axes to set velocity
            float aX = Input.GetAxis("Horizontal");
            float aY = Input.GetAxis("Vertical");


            Vector3 vel = new Vector3(aX, aY, 0);

            if (vel != Vector3.zero)
            {
                currentVel = vel;
            }

            if (vel.magnitude > 1)
            {
                // Avoid speed multiplying by 1.414 when moving at a diagonal
                vel.Normalize();
            }

            rigid.velocity = vel * shipSpeed;

            // Mouse input for firing
            if (Input.GetButtonDown("Fire1"))
            {
                {
                    Fire();
                    this.PostEvent(Event.OnPlayerFired);
                }

            }

            if (Input.GetButtonDown("Fire2"))
            {
                shipSkill.Execute();
            }

            this.transform.up = currentVel;
        }
        else
        {
            rigid.velocity = Vector3.zero;
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
        if (collision.gameObject.tag == "Asteroid")
        {
            if (canDestroy)
            {
                --Ship_HP;

                this.PostEvent(Event.OnPlayerDamaged, (float)((float)Ship_HP / (float)MaxHP));

                if (Ship_HP > 0)
                {
                    //Debug.Log(Ship_HP);
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
                    //this.PostEvent(Event.OnPlayerDamaged, Ship_HP);
                }
            }
        }
    }

    public void ActiveEffect(Vector3 position)
    {
        Instantiate(AppearEffect, position, Quaternion.identity);
    }

    public void Fire()
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
            go.transform.LookAt(mPos3D);
        }

        else if (shipAttack == 2)
        {

            GameObject b1 = Instantiate<GameObject>(bulletPrefab);
            GameObject b2 = Instantiate<GameObject>(bulletPrefab);

            b1.transform.position = transform.position + offset;
            b2.transform.position = transform.position - offset;

            b1.transform.LookAt(mPos3D + offset);
            b2.transform.LookAt(mPos3D - offset);

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