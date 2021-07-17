using System.Collections;
using UnityEngine;

public abstract class Enemy : MonoBehaviour
{
    public PlayerShip target;

    public MiniBoss miniBoss;

    public int HP;

    public int point;

    public int currentHP;

    public float speed;

    public bool canShot;

    public bool canFollowPlayer;

    public Rigidbody rigid;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            currentHP--;

            this.PostEvent(Event.OnEnemyDamaged, (float) currentHP/ HP);

            Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);

            Destroy(collision.gameObject);


            if (currentHP == 0)
            {
                this.PostEvent(Event.OnDestroyedEnemy, point);
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
        Vector3 direction = target.transform.position - this.transform.position;
        canFollowPlayer = false;
        rigid.velocity = -direction * speed;
        yield return new WaitForSeconds(1);
        canFollowPlayer = true;
    }

}
