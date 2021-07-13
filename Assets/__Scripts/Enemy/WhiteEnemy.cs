using UnityEngine;

public abstract class WhiteEnemy : Enemy
{
    private Vector3 directionToTarget;

    public void Start()
    {
        canFollowPlayer = true;
        canShot = false;
        target = FindObjectOfType<PlayerShip>();
    }

    private void Update()
    {
        if (canFollowPlayer)
        {
            directionToTarget = (target.transform.position - this.gameObject.transform.position).normalized;

            transform.Translate(speed * Time.deltaTime * directionToTarget);
        }
    }
}
