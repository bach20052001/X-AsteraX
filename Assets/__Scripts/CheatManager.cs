using UnityEngine;
using UnityEngine.UI;

public class CheatManager : MonoBehaviour
{
    public Button nextSceneBTN;
    public Button nextLevelBTN;
    public Button moreCoinBTN;
    public Button destroyBossBTN;

    private static CheatManager instance;

    public static CheatManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<CheatManager>();
            }
            return instance;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        if (this != instance)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(this.gameObject);
    }

    // Start is called before the first frame update
    void Start()
    {
        nextSceneBTN.onClick.AddListener(NextScene);
        nextLevelBTN.onClick.AddListener(NextLevel);
        moreCoinBTN.onClick.AddListener(AddMoreCoin);
        destroyBossBTN.onClick.AddListener(DestroyBoss);
    }

    private void NextScene()
    {
        SceneController.Instance.NextSceneWithoutAnimate();
    }

    private void NextLevel()
    {
        AsteraX gameManager = FindObjectOfType<AsteraX>();

        if (gameManager != null)
        {
            gameManager.RemoveAllAsteroid();
        }
    }

    private void AddMoreCoin()
    {
        Coin coinManager = FindObjectOfType<Coin>();

        if (coinManager != null)
        {
            coinManager.AddCoin();
        }
    }

    private void DestroyBoss()
    {
        SuperBoss superBoss = FindObjectOfType<SuperBoss>();
        MiniBoss miniBoss = FindObjectOfType<MiniBoss>();

        if (superBoss != null)
        {
            superBoss.DestroySelf();
        }

        if (miniBoss != null)
        {
            miniBoss.DestroySelf();
        }
    }
}
