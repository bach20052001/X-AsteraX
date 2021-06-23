public class Flash : Skill
{
    private AsteraX gameManager;
    private PlayerShip player;


    private void Start()
    {
        countdownSkill = 30f;
        isIncremental = true;
        maxIncremental = 2;

        gameManager = FindObjectOfType<AsteraX>();
        player = FindObjectOfType<PlayerShip>();
    }

    public override void Active()
    {
        FlashFlash();
        base.Active();
    }

    private void FlashFlash()
    {
        player.transform.position = gameManager.SafePosition();
    }
}
