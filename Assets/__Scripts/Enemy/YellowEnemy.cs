public class YellowEnemy : BlackEnemy
{
    private new void Start()
    {
        HP = 50;
        currentHP = 50;
        speed = 3f;
        fireRate = 2f;
        base.Start();
    }

    private void OnDestroy()
    {
        if (miniBoss != null)
        {
            miniBoss.Spawn(EnemyType.Red);
        }
    }
}
