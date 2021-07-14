using UnityEngine;

public abstract class WhiteEnemy : Enemy
{
    private Vector3 directionToTarget;

    public void Start()
    {
        canFollowPlayer = true;
        canShot = false;
        target = FindObjectOfType<PlayerShip>();
        miniBoss = FindObjectOfType<MiniBoss>();
    }

    private void Update()
    {
        if (canFollowPlayer)
        {
            directionToTarget = (target.transform.position - this.gameObject.transform.position).normalized;

            //GetComponent<Rigidbody>().velocity = (speed * Time.deltaTime * directionToTarget);
            transform.Translate(speed * Time.deltaTime * directionToTarget);
        }
    }
}
