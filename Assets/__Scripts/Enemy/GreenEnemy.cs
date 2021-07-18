public class GreenEnemy : WhiteEnemy
{
    private void Awake()
    {
        point = 500;
        HP = 50;
        currentHP = 50;
        speed = 5f;
    }

    private new void Start()
    {
        base.Start();
    }
}
