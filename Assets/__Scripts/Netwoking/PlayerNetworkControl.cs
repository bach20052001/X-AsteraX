using System;
using Unity.Netcode;
using Unity.Netcode.Samples;
using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(NetworkObject))]
[RequireComponent(typeof(ClientNetworkTransform))]
public class PlayerNetworkControl : NetworkBehaviour
{
    public float speed;
    private Vector3 _currentVel;
    public Vector2 initialPositionOnPlane = new Vector2(-4, 4);
    private Rigidbody _rigid;
    private float _fireRate = 0.25f;
    public GameObject networkBullet;
    public int shipHp = 5;
    
    void Start()
    {
        if (IsClient && IsOwner)
        {
            transform.position = new Vector3(
                Random.Range(initialPositionOnPlane.x, initialPositionOnPlane.y), 0,
                Random.Range(initialPositionOnPlane.x, initialPositionOnPlane.y));
        }

        _rigid = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (IsClient && IsOwner)
        {
            ClientInput();
        }

    }

    private void ClientInput()
    {
#if UNITY_ANDROID || UNITY_IOS
        float aX = UltimateJoystick.GetHorizontalAxis("Movement");
        float aY = UltimateJoystick.GetVerticalAxis("Movement");

        if (aX == 0 && aY == 0)
        {
            aX = Input.GetAxis("Horizontal");
            aY = Input.GetAxis("Vertical");
        }
        
        Vector3 vel = new Vector3(aX, 0, 0);

        if (vel != Vector3.zero)
        {
            _currentVel = vel;
        }

        if (vel.magnitude > 1)
        {
            vel.Normalize();
        }
        
        _rigid.velocity = vel * speed;

        this.transform.up = _currentVel;
#endif
    }
    
    private void LateUpdate()
    {
#if UNITY_STANDALONE
        // ShootStandalone();
        // ActiveAbility();
#elif UNITY_ANDROID || UNITY_IOS
        _fireRate -= Time.deltaTime;
        if (_fireRate <= 0)
        {
            Shoot();
            _fireRate = 0.25f;
        }
#endif
    }

    private void Shoot()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("EnemyBullet"))
        {
            collision.gameObject.SetActive(false);
            shipHp--;
        }
    }
}