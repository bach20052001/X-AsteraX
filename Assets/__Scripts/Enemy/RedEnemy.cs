public class RedEnemy : BlackEnemy
{
    private new void Start()
    {
        HP = 100;
        currentHP = 100;
        speed = 5f;
        fireRate = 1f;
        base.Start();
    }

    private void OnDestroy()
    {
        Destroy(miniBoss.gameObject);
        AsteraX.S.StartCoroutine(AsteraX.S.LevelPassing());
    }
}
