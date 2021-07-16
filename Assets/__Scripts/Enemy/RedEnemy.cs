public class RedEnemy : BlackEnemy
{
    private new void Start()
    {
        point = 2000;
        HP = 100;
        currentHP = 100;
        speed = 5f;
        fireRate = 1f;
        base.Start();
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedEnemy, point);
        miniBoss.MoveOut();
    }
}
