public class BlueEnemy : WhiteEnemy
{
    private new void Start()
    {
        HP = 20;
        currentHP = 20;
        speed = 3f;
        base.Start();
    }

    private void OnDestroy()
    {
        miniBoss.Spawn(EnemyType.Green);
    }
}
