public class Flash : Skill
{
    private AsteraX gameManager;
    private PlayerShip player;


    private void Start()
    {
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
