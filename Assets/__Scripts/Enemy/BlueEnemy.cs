public class BlueEnemy : WhiteEnemy
{
    private new void Start()
    {
        base.Start();
        HP = 10;
        currentHP = 10;
        speed = 3f;
    }

    private void OnDestroy()
    {
        
    }
}
