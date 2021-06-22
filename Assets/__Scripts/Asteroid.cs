﻿// These were used to test a case where some Asteroids were getting lost off screen.
//#define DEBUG_Asteroid_TestOOBVel 
//#define DEBUG_Asteroid_ShotOffscreenDebugLines

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if DEBUG_Asteroid_TestOOBVel
using UnityEditor;
#endif

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(OffScreenWrapper))]
public class Asteroid : MonoBehaviour
{
    [Header("Set Dynamically")]
    public int size = 3;
    private int mass;
    public bool immune = false;
    private int score = 0;
    public GameObject Health;
    private Health healthController;
    public GameObject bulletCollision;

    public int Score
    {
        get
        {
            return score;
        }
    }

    Rigidbody rigid; // protected
    OffScreenWrapper offScreenWrapper;

#if DEBUG_Asteroid_ShotOffscreenDebugLines
    [Header("ShotOffscreenDebugLines")]
	bool                trackOffscreen;
	Vector3             trackOffscreenOrigin;
#endif
    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        offScreenWrapper = GetComponent<OffScreenWrapper>();
    }

    // Use this for initialization
    void Start()
    {
        mass = size * 1;
        switch (size)
        {
            case 1:
                score = 400;
                break;
            case 2:
                score = 200;
                break;
            case 3:
                score = 100;
                break;
        }
        rigid.mass = mass;
        AsteraX.AddAsteroid(this);

        transform.localScale = Vector3.one * size * AsteraX.AsteroidsSO.asteroidScale;
        if (parentIsAsteroid)
        {
            InitAsteroidChild();
        }
        else
        {
            InitAsteroidParent();
        }

        // Spawn child Asteroids
        if (size > 1)
        {
            Asteroid ast;
            for (int i = 0; i < AsteraX.AsteroidsSO.numSmallerAsteroidsToSpawn; i++)
            {
                ast = SpawnAsteroid();
                ast.size = size - 1;
                ast.transform.SetParent(transform);
                Vector3 relPos = Random.onUnitSphere / 2;
                ast.transform.rotation = Random.rotation;
                ast.transform.localPosition = relPos;

                ast.gameObject.name = gameObject.name + "_" + i.ToString("00");
            }
        }
    }

    private void OnDestroy()
    {
        AsteraX.RemoveAsteroid(this);
    }

    public void InitAsteroidParent()
    {
#if DEBUG_Asteroid_ShotOffscreenDebugLines
		Debug.LogWarning(gameObject.name+" InitAsteroidParent() "+Time.time);
#endif
        offScreenWrapper.enabled = true;
        rigid.isKinematic = false;
        // Snap this GameObject to the z=0 plane
        Vector3 pos = transform.position;
        pos.z = 0;
        transform.position = pos;
        InitVelocity();
        InitHealth();
    }

    public void InitAsteroidChild()
    {
        offScreenWrapper.enabled = false;
        rigid.isKinematic = true;
        // Make use of the ComponentDivision extension method in Vector3Extensions
        transform.localScale = transform.localScale.ComponentDivide(transform.parent.lossyScale);
    }

    public void InitHealth()
    {
        GameObject health = Instantiate(Health);
        health.transform.position = this.transform.position;
        health.transform.parent = this.transform;
        healthController = health.GetComponent<Health>();
    }

    public void InitVelocity()
    {
        Vector3 vel;

        // The initial velocity depends on whether the Asteroid is currently off screen or not
        if (ScreenBounds.OOB(transform.position))
        {
            // If the Asteroid is out of bounds, just point it toward a point near the center of the sceen
            vel = ((Vector3)Random.insideUnitCircle * 4) - transform.position;
            vel.Normalize();

#if DEBUG_Asteroid_TestOOBVel
            Debug.LogWarning("Asteroid:InitVelocity() - " + gameObject.name + " is OOB. Vel is: " + vel);
            EditorApplication.isPaused = true;
#endif

#if DEBUG_Asteroid_ShotOffscreenDebugLines
			Debug.DrawLine(transform.position, transform.position+vel, Color.red, 60);
			Debug.DrawLine(transform.position+Vector3.down, transform.position+Vector3.up, Color.cyan, 60);
            Debug.DrawLine(transform.position+Vector3.left, transform.position+Vector3.right, Color.cyan, 60);
			trackOffscreen = true;
			trackOffscreenOrigin = transform.position;
#endif
        }
        else
        {
            // If in bounds, choose a random direction, and make sure that when you Normalize it, it doesn't
            //  have a length of 0 (which might happen if Random.insideUnitCircle returned [0,0,0].
            do
            {
                vel = Random.insideUnitCircle;
                vel.Normalize();
            } while (Mathf.Approximately(vel.magnitude, 0f));
        }

        // Multiply the unit length of vel by the correct speed (randomized) for this size of Asteroid
        vel = vel * Random.Range(AsteraX.AsteroidsSO.minVel, AsteraX.AsteroidsSO.maxVel) / (float)(size * 2);
        rigid.velocity = vel;

        rigid.angularVelocity = Random.insideUnitSphere * AsteraX.AsteroidsSO.maxAngularVel / 10f;
    }

#if DEBUG_Asteroid_ShotOffscreenDebugLines
	private void FixedUpdate()
	{
		if (trackOffscreen) {
			Debug.DrawLine(trackOffscreenOrigin, transform.position, Color.yellow, 0.1f);
		}
	}
#endif

    // NOTE: Allowing parentIsAsteroid and parentAsteroid to call GetComponent<> every
    //  time is inefficient, however, this only happens when a bullet hits an Asteroid
    //  which is rarely enough that it isn't a performance hit.
    bool parentIsAsteroid
    {
        get
        {
            return (parentAsteroid != null);
        }
    }

    Asteroid parentAsteroid
    {
        get
        {
            if (transform.parent != null)
            {
                Asteroid parentAsteroid = transform.parent.GetComponent<Asteroid>();
                if (parentAsteroid != null)
                {
                    return parentAsteroid;
                }
            }
            return null;
        }
    }

    public void OnCollisionEnter(Collision coll)
    {

        // If this is the child of another Asteroid, pass this collision up the chain
        if (parentIsAsteroid)
        {
            parentAsteroid.OnCollisionEnter(coll);
            return;
        }

        if (immune)
        {
            return;
        }

        GameObject otherGO = coll.gameObject;

        if (otherGO.tag == "Bullet" || otherGO.transform.root.gameObject.tag == "Player")
        {

            if (otherGO.tag == "Bullet")
            {
                healthController.damaged();
                bulletCollision = otherGO;
                Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);
                Destroy(otherGO);

                if (healthController.GetHp() == 0)
                {
                    this.PostEvent(Event.OnHitAsteroid, this);

                    if (size > 1)
                    {
                        // Detach the children Asteroids
                        Asteroid[] children = GetComponentsInChildren<Asteroid>();
                        for (int i = 0; i < children.Length; i++)
                        {
                            children[i].immune = true;
                            if (children[i] == this || children[i].transform.parent != transform)
                            {
                                continue;
                            }
                            children[i].transform.SetParent(null, true);
                            children[i].InitAsteroidParent();
                        }
                    }
                    Destroy(gameObject);
                }
            }
            else
            {
                Vector3 distance = otherGO.transform.position - this.transform.position;

                distance = new Vector3(distance.x, distance.y, 0);

                rigid.velocity = - distance * 10f / size;

                otherGO.GetComponent<Rigidbody>().AddForce(distance * 35f, ForceMode.VelocityChange);
            }
        }

        else if (otherGO.tag == "Asteroid")
        {
            Vector3 distance = otherGO.transform.position - this.transform.position;

            distance = new Vector3(distance.x, distance.y, 0);

            otherGO.GetComponent<Rigidbody>().velocity = distance * 10f / otherGO.GetComponent<Asteroid>().size;

            distance.Normalize();

            rigid.velocity = - distance * 10f / size;
        }
    }

    private void Update()
    {
        immune = false;
    }


    static public Asteroid SpawnAsteroid()
    {
        GameObject aGO = Instantiate<GameObject>(AsteraX.AsteroidsSO.GetAsteroidPrefab(), AsteraX.S.Asteroids.transform);
        Asteroid ast = aGO.GetComponent<Asteroid>();
        return ast;
    }
}
