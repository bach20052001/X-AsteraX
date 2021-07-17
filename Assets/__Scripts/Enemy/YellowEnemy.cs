public class YellowEnemy : BlackEnemy
{
    private void Awake()
    {
        point = 1000;
        HP = 50;
        currentHP = 50;
        speed = 3f;
        fireRate = 2f;
    }

    private new void Start()
    {
        base.Start();
    }
}
