using UnityEngine;

public abstract class BlackEnemy : Enemy
{
    private GameObject bullet;
    private Vector3 direction;
    private Vector3 dest;
    public float fireRate;

    public void Start()
    {
        canFollowPlayer = false;
        canShot = true;
        target = FindObjectOfType<PlayerShip>();

        if (canShot)
        {
            InvokeRepeating(nameof(AutoShoot), 0f, fireRate);
        }

        InvokeRepeating(nameof(ChangeDirection), 0f, 1f);
    }

    private void Update()
    {
        MoveAuto();
    }

    private void MoveAuto()
    {
        GetComponent<Rigidbody>().velocity = direction * speed;
    }

    private void ChangeDirection()
    {
        dest = ScreenBounds.RANDOM_ON_SCREEN_LOC;
        direction = dest - this.gameObject.transform.position;
        direction.Normalize();
    }

    public void AutoShoot()
    {
        Shoot(bullet, target);
    }
}
