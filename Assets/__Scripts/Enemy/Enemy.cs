using System.Collections;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public Enemy_SO EnemyData;

    public PlayerShip target;

    public MiniBoss miniBoss;

    public int HP;

    public int point;

    public int currentHP;

    public float speed;

    public bool canShot;

    public bool canFollowPlayer;

    private Rigidbody rigid;

    private ObjectPooling bulletPooling;

    private Vector3 direction;
    private Vector3 dest;
    private float fireRate;
    private Vector3 directionToTarget;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            currentHP--;

            this.PostEvent(GameEvent.OnEnemyDamaged, (float) currentHP/ HP);

            GameObject explosion = AsteraX.S.explosionOP.GetUnactiveObject();
            explosion.transform.position = transform.position;

            collision.gameObject.SetActive(false);

            if (currentHP == 0)
            {
                this.PostEvent(GameEvent.OnDestroyedEnemy, point);
                Destroy(gameObject);
            }
        }

        if (collision.gameObject.CompareTag("Player"))
        {
            StartCoroutine(AffectToPlayer());
        }
    }


    private IEnumerator AffectToPlayer()
    {
        GameObject explosion = AsteraX.S.explosionOP.GetUnactiveObject();
        explosion.transform.position = transform.position;

        Vector3 direction = target.transform.position - this.transform.position;
        canFollowPlayer = false;
        rigid.velocity = -direction * 8f;
        yield return new WaitForSeconds(0.25f);
        canFollowPlayer = true;
    }

    private void InitData()
    {
        canFollowPlayer = EnemyData.CanChasePlayer;
        canShot = EnemyData.CanAttack;
        point = EnemyData.Point;
        HP = EnemyData.HP;
        currentHP = EnemyData.HP;
        speed = EnemyData.Speed;
        fireRate = 2f;
    }

    public void Start()
    {
        target = FindObjectOfType<PlayerShip>();
        rigid = GetComponent<Rigidbody>();
        miniBoss = FindObjectOfType<MiniBoss>();

        EnemyData = miniBoss.currentData;

        bulletPooling = AsteraX.S.ListDataBullet[(BulletMode)EnemyData.BulletType];


        InitData();

        if (canShot)
        {
            InvokeRepeating(nameof(Shoot), 0f, fireRate);
        }
        else
        {
            //Nothing
        }

        if (!canFollowPlayer)
        {
            InvokeRepeating(nameof(ChangeDirection), 0f, 1f);
        }
        else
        {
            //Follow Player In Update
        }
    }

    private void Update()
    {

        if (!canFollowPlayer)
        {
            MoveAuto();
        }
        else
        {
            if (target != null)
            {
                if (canFollowPlayer)
                {

                    directionToTarget = (target.transform.position - this.gameObject.transform.position).normalized;

                    rigid.velocity = speed * directionToTarget;
                }
            }
        }
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

    public void Shoot()
    {
        Bullet bullet = bulletPooling.GetUnactiveBullet();

        bullet.transform.position = this.transform.position;

        if (target != null)
        {
            bullet.transform.LookAt(target.transform.position);
        }

        bullet.InitVel();
    }
}
