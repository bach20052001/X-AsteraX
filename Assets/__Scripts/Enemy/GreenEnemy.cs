public class GreenEnemy : WhiteEnemy
{
    private new void Start()
    {
        HP = 50;
        currentHP = 50;
        speed = 5f;
        base.Start();
    }

    private void OnDestroy()
    {
        miniBoss.Spawn(EnemyType.Yellow);
    }
}
