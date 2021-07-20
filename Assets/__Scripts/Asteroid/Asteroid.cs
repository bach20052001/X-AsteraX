// These were used to test a case where some Asteroids were getting lost off screen.
//#define DEBUG_Asteroid_TestOOBVel 
//#define DEBUG_Asteroid_ShotOffscreenDebugLines

using System.Collections.Generic;
using UnityEngine;

#if DEBUG_Asteroid_TestOOBVel
using UnityEditor;
#endif

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(OffScreenWrapper))]
public class Asteroid : MonoBehaviour
{
    private Asteroid_SO Asteroid_Data;

    [Header("Set Dynamically")]
    public string type;
    public int size;

    private bool hasMagnetic;
    private int mass;
    private int score = 0;
    public GameObject Health;
    private Health healthController;

    [HideInInspector] public GameObject bulletCollision;

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
        InitData();

        AsteraX.AddAsteroid(this);

        InitAsteroid();
    }
    private int index;

    private void InitData()
    {
        //Get Data
        switch (type)
        {
            case "A":
                {
                    index = 0;
                    break;
                }
            case "B":
                {
                    index = 1;
                    break;
                }
            case "C":
                {
                    index = 2;
                    break;
                }
        }

        Asteroid_Data = AsteraX.S.asteroidsData[index];

        // Assign Data
        size = Asteroid_Data.size;
        mass = size * 5;
        rigid.mass = mass;
        score = Asteroid_Data.Point;
        transform.localScale = Vector3.one * size;

        if (Asteroid_Data.HasMagnetic == 0) hasMagnetic = false;
        else
        {
            hasMagnetic = true;
        }
    }

    private void InitAsteroid()
    {
        offScreenWrapper.enabled = true;
        rigid.isKinematic = false;
        Vector3 pos = transform.position;
        pos.z = 0;
        transform.position = pos;

        if (hasMagnetic)
        {
            GameObject magnetic = MagneticFactory.Instance.CreateMagnetic();

            magnetic.transform.parent = this.transform;
            magnetic.transform.localPosition = Vector3.zero;
            magnetic.transform.localScale = Vector3.one;
        }

        InitVelocity();
        InitHealth();
    }

    private void OnDestroy()
    {
        AsteraX.RemoveAsteroid(this);
    }

    public void InitHealth()
    {
        GameObject health = Instantiate(Health);
        health.transform.position = this.transform.position;
        health.transform.parent = this.transform;
        healthController = health.GetComponent<Health>();
        healthController.hp = Asteroid_Data.HP;
        healthController.InitialBar(Asteroid_Data.HP);
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
        vel = vel * Random.Range(AsteraX.AsteroidsSO.minVel, AsteraX.AsteroidsSO.maxVel);
        rigid.velocity = vel;

        rigid.angularVelocity = Random.insideUnitSphere * AsteraX.AsteroidsSO.maxAngularVel;
    }

#if DEBUG_Asteroid_ShotOffscreenDebugLines
	private void FixedUpdate()
	{
		if (trackOffscreen) {
			Debug.DrawLine(trackOffscreenOrigin, transform.position, Color.yellow, 0.1f);
		}
	}
#endif

    public void OnCollisionEnter(Collision coll)
    {
        GameObject otherGO = coll.gameObject;

        if (otherGO.CompareTag("Bullet") || otherGO.transform.root.gameObject.CompareTag("Player"))
        {

            if (otherGO.CompareTag("Bullet"))
            {
                healthController.damaged();
                bulletCollision = otherGO;
                Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);
                Destroy(otherGO);

                if (healthController.GetHp() == 0)
                {
                    if (size == 1)
                    {
                        this.PostEvent(Event.EarnCoin);
                    }

                    if (size > 1)
                    {
                        int childSize = --size;
                        SpawnChildAsteroid(childSize, this.transform.localPosition);
                    }

                    this.PostEvent(Event.OnHitAsteroid, this);

                    Destroy(gameObject);
                }
            }
            else
            {
                Vector3 distance = otherGO.transform.position - this.transform.position;

                distance = new Vector3(distance.x, distance.y, 0);

                if (size != 3)
                {
                    rigid.velocity = - distance * 3f / size;
                }

                if (size != 1)
                {
                    otherGO.GetComponent<Rigidbody>().AddForce(size * distance, ForceMode.VelocityChange);
                }
            }
        }

        if (rigid.velocity.magnitude < AsteraX.AsteroidsSO.minVel)
        {
            float multiple = AsteraX.AsteroidsSO.minVel / rigid.velocity.magnitude;
            rigid.velocity *= multiple;
        }
    }

    private void SpawnChildAsteroid(int size, Vector3 position)
    {
        for (int i = 0; i < AsteraX.AsteroidsSO.numSmallerAsteroidsToSpawn; i++)
        {
            Asteroid ast;

            ast = SpawnAsteroid();

            ast.size = size;

            ast.transform.rotation = Random.rotation;

            ast.transform.localPosition = position;

            ast.gameObject.name = gameObject.name + "_" + i.ToString("00");

        }
    }

    static public Asteroid SpawnAsteroid()
    {
        GameObject aGO = Instantiate<GameObject>(AsteraX.S.GetAsteroidPrefab(), AsteraX.S.Asteroids.transform);
        Asteroid ast = aGO.GetComponent<Asteroid>();
        return ast;
    }
}
