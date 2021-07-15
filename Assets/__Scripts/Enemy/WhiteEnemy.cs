using UnityEngine;

public abstract class WhiteEnemy : Enemy
{
    private Vector3 directionToTarget;
    private Vector3 direction;
    private Vector3 dest;

    public void Start()
    {
        canFollowPlayer = true;
        canShot = false;
        target = FindObjectOfType<PlayerShip>();
        miniBoss = FindObjectOfType<MiniBoss>();
        InvokeRepeating(nameof(ChangeDirection), 0f, 1f);
    }

    private void Update()
    {
        if (target != null)
        {
            if (canFollowPlayer)
            {

                directionToTarget = (target.transform.position - this.gameObject.transform.position).normalized;

                transform.Translate(speed * Time.deltaTime * directionToTarget);
            }
        }
        else
        {
            MoveAuto();
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
}
