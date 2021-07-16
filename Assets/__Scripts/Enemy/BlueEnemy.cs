public class BlueEnemy : WhiteEnemy
{
    private new void Start()
    {
        point = 200;
        HP = 20;
        currentHP = 20;
        speed = 3f;
        base.Start();
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedEnemy, point);
        miniBoss.Spawn(EnemyType.Green);
    }
}
