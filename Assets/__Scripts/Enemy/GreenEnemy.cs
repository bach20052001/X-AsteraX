public class GreenEnemy : WhiteEnemy
{
    private new void Start()
    {
        base.Start();
        HP = 20;
        currentHP = 20;
        speed = 5f;
    }
}
