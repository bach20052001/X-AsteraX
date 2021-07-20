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

    private GameObject bullet;

    private Vector3 direction;
    private Vector3 dest;
    private float fireRate;
    private Vector3 directionToTarget;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            currentHP--;

            this.PostEvent(Event.OnEnemyDamaged, (float) currentHP/ HP);

            Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);

            Destroy(collision.gameObject);


            if (collision.gameObject.CompareTag("Player"))
            {
                StartCoroutine(AffectToPlayer());
            }

            if (currentHP == 0)
            {
                this.PostEvent(Event.OnDestroyedEnemy, point);
                Destroy(gameObject);
            }
        }

    }


    private IEnumerator AffectToPlayer()
    {
        Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);
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
        bullet = miniBoss.InitBullet();

        EnemyData = miniBoss.currentData;

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

        GameObject Bullet = Instantiate(bullet, this.transform.position, bullet.transform.rotation);
        Bullet.transform.LookAt(target.transform.position);
    }

}
