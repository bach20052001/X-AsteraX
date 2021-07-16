public class GreenEnemy : WhiteEnemy
{
    private new void Start()
    {
        point = 500;
        HP = 50;
        currentHP = 50;
        speed = 5f;
        base.Start();
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedEnemy, point);
        miniBoss.Spawn(EnemyType.Yellow);
    }
}
