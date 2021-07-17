public class RedEnemy : BlackEnemy
{
    private void Awake()
    {
        point = 2000;
        HP = 100;
        currentHP = 100;
        speed = 5f;
        fireRate = 1f;
    }

    private new void Start()
    {
        base.Start();
    }
}
