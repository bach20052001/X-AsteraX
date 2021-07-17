using UnityEngine;

public abstract class WhiteEnemy : Enemy
{
    private Vector3 directionToTarget;

    public void Start()
    {
        canFollowPlayer = true;
        canShot = false;
        target = FindObjectOfType<PlayerShip>();
        rigid = GetComponent<Rigidbody>();
        miniBoss = FindObjectOfType<MiniBoss>();
    }

    private void Update()
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
