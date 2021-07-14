public class BlueEnemy : WhiteEnemy
{
    private new void Start()
    {
        HP = 10;
        currentHP = 10;
        speed = 3f;
        base.Start();
    }

    private void OnDestroy()
    {
        miniBoss.Spawn(EnemyType.Green);
    }
}
