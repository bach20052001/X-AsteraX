#define DEBUG_PlayerShip_RespawnNotifications

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

[RequireComponent(typeof(Rigidbody))]
public class PlayerShip : MonoBehaviour
{

    //public event System.Action CollisionWithAsteroidHandler;
    private ParticleSystem AppearEffect;
    // This is a somewhat protected private singleton for PlayerShip
    static private PlayerShip   _S;
    static public PlayerShip    S
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
    public float        shipSpeed = 10f;
    public GameObject   bulletPrefab;

    Rigidbody           rigid;

    private void Start()
    {
        AppearEffect = AsteraX.S.warp;
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
            float aX = CrossPlatformInputManager.GetAxis("Horizontal");
            float aY = CrossPlatformInputManager.GetAxis("Vertical");


            Vector3 vel = new Vector3(aX, aY);
            if (vel.magnitude > 1)
            {
                // Avoid speed multiplying by 1.414 when moving at a diagonal
                vel.Normalize();
            }

            rigid.velocity = vel * shipSpeed;

            // Mouse input for firing
            if (CrossPlatformInputManager.GetButtonDown("Fire1"))
            {
                {
                    Fire();
                    this.PostEvent(Event.OnPlayerFired);
                }

            }
        }
        else
        {
            rigid.velocity = Vector3.zero;
        }        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Asteroid")
        {
            this.PostEvent(Event.OnPlayerDamaged);
            gameObject.SetActive(false);
            if (AsteraX.jumpRemaining > 0)
            {
                ActiveEffect(transform.position);
            }
        }
    }


    public void ActiveEffect(Vector3 position)
    {
        Instantiate(AppearEffect, position, Quaternion.identity);
    }

    void Fire()
    {
        // Get direction to the mouse
        Vector3 mPos = Input.mousePosition;
        mPos.z = -Camera.main.transform.position.z;
        Vector3 mPos3D = Camera.main.ScreenToWorldPoint(mPos);

        // Instantiate the Bullet and set its direction
        GameObject go = Instantiate<GameObject>(bulletPrefab);
        go.transform.position = transform.position;
        go.transform.LookAt(mPos3D);
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
