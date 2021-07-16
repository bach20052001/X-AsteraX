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

    public void Shoot(GameObject bullet, PlayerShip targetToShoot)
    {
        Instantiate(bullet, this.transform.position, bullet.transform.rotation);
        bullet.transform.LookAt(targetToShoot.transform.position);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag.Equals("Bullet"))
        {
            currentHP--;

            this.PostEvent(Event.OnEnemyDamaged, (float) currentHP/ HP);

            if (currentHP <= 0)
            {
                Destroy(gameObject);
            }

            Instantiate(AsteraX.S.explosion, transform.position, Quaternion.identity);

            Destroy(collision.gameObject);
        }
    }
}
