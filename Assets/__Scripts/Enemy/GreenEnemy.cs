public class GreenEnemy : WhiteEnemy
{
    private new void Start()
    {
        HP = 20;
        currentHP = 20;
        speed = 5f;
        base.Start();
    }

    private void OnDestroy()
    {
        miniBoss.Spawn(EnemyType.Yellow);
    }
}
