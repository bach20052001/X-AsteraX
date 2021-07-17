public class BlueEnemy : WhiteEnemy
{
    private void Awake()
    {
        point = 200;
        HP = 20;
        currentHP = 20;
        speed = 3f;
    }

    private new void Start()
    {
        base.Start();
    }
}
