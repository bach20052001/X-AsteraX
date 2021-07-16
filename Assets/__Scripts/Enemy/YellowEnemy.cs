public class YellowEnemy : BlackEnemy
{
    private new void Start()
    {
        point = 1000;
        HP = 50;
        currentHP = 50;
        speed = 3f;
        fireRate = 2f;
        base.Start();
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedEnemy, point);
        if (miniBoss != null)
        {
            miniBoss.Spawn(EnemyType.Red);
        }
    }
}
