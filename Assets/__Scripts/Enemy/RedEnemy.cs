public class RedEnemy : BlackEnemy
{
    private new void Start()
    {
        base.Start();
        HP = 100;
        currentHP = 100;
        speed = 5f;
        fireRate = 1f;
    }
}
