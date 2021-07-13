public class YellowEnemy : BlackEnemy
{
    private new void Start()
    {
        base.Start();
        HP = 50;
        currentHP = 50;
        speed = 3f;
        fireRate = 2f;
    }
}
