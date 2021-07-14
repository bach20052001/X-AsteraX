//#define DEBUG_AsteraX_LogMethods

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteraX : MonoBehaviour
{
    // Private Singleton-style instance. Accessed by static property S later in script
    static private AsteraX _S;

    static List<Asteroid> ASTEROIDS;

    public GameObject Asteroids;

    private int nRow = 9;
    private int nCol = 9;

    public static int jumpRemaining = 3;
    public static int score = 0;
    public GameObject Gate;

    public ParticleSystem explosion;

    public ParticleSystem shipExplosion;

    private SceneController sceneController;

    public ParticleSystem warp;

    public GameObject Magnetic;

    public MagneticFactory magneticFactory;

    private static LevelManager levelManager;
    const float MIN_ASTEROID_DIST_FROM_PLAYER_SHIP = 5;


    public List<GameObject> listSpaceShips;

    private GameObject playerShip;

    public GameObject MiniBoss;

    public GameObject SuperBoss;

    // System.Flags changes how eGameStates are viewed in the Inspector and lets multiple
    //  values be selected simultaneously (similar to how Physics Layers are selected).
    // It's only valid for the game to ever be in one state, but I've added System.Flags
    //  here to demonstrate it and to make the ActiveOnlyDuringSomeGameStates script easier
    //  to view and modify in the Inspector.
    // When you use System.Flags, you still need to set each enum value so that it aligns
    //  with a power of 2. You can also define enums that combine two or more values,
    //  for example the all value below that combines all other possible values.
    //[System.Flags]
    //public enum eGameState
    //{
    //    // Decimal      // Binary
    //    none = 0,       // 00000000
    //    mainMenu = 1,   // 00000001
    //    preLevel = 2,   // 00000010
    //    level = 4,      // 00000100
    //    postLevel = 8,  // 00001000
    //    gameOver = 16,  // 00010000
    //    all = 0xFFFFFFF // 11111111111111111111111111111111
    //}

    #region Game State
    [System.Flags]
    public enum BaseGameState
    {
        PLAY,
        PAUSE,
        NEXTLEVEL,
        GAMEOVER
    }

    private static BaseGameState gameState = BaseGameState.PLAY;

    public static BaseGameState GameState
    {
        get
        {
            return gameState;
        }
    }

    public static List<Asteroid> GetAsteroids()
    {
        return ASTEROIDS;
    }

    private void PlayGame()
    {
        Time.timeScale = 1;

    }

    private void PauseGame()
    {
        this.PostEvent(Event.Pause);
        Time.timeScale = 0;
    }
    private void GameOverUI()
    {

    }


    private void TransitionState(BaseGameState gs)
    {
        gameState = gs;

        switch (gs)
        {
            case BaseGameState.PLAY:
                PlayGame();
                break;
            case BaseGameState.PAUSE:
                PauseGame();
                break;
            case BaseGameState.GAMEOVER:
                GameOverUI();
                break;
            case BaseGameState.NEXTLEVEL:
                break;
        }
    }

    #endregion

    #region Initial

    private void Awake()
    {
#if DEBUG_AsteraX_LogMethods
        Debug.Log("AsteraX:Awake()");
#endif

        S = this;

        sceneController = SceneController.Instance;

        if (sceneController != null)
        {
            playerShip = listSpaceShips[sceneController.SelectedIndex];
        }

        else
        {
            playerShip = listSpaceShips[1];
        }

        Instantiate(playerShip);

        TransitionState(BaseGameState.PLAY);
    }

    void Start()
    {
        TransitionState(BaseGameState.PLAY);

        levelManager = LevelManager.Instance;

        jumpRemaining = 3;
        score = 0;
#if DEBUG_AsteraX_LogMethods
        Debug.Log("AsteraX:Start()");
#endif

        ASTEROIDS = new List<Asteroid>();

        SpawnAsteroids();

        StartCoroutine(FadeGate());

        this.RegisterListener(Event.OnHitAsteroid, (param) => OnHitAsteroidHandler(param));
        this.RegisterListener(Event.PlayerShipDestroyed, (param) => OnPlayerShipDestroyedHanler());
        this.RegisterListener(Event.OnNextLevel, (param) => OnNextLevelHandler());

    }



    private void OnNextLevelHandler()
    {
        StartCoroutine(NextLevelWait());
    }

    private IEnumerator NextLevelWait()
    {
        TransitionState(BaseGameState.NEXTLEVEL);
        yield return new WaitForSeconds(3);
        TransitionState(BaseGameState.PLAY);
    }

    #endregion

    private void SpawnAsteroids()
    {
        //Debug.Log(levelManager.asteroidsSOByLevel[LevelManager.level].numberOfAsteroid);
        // Spawn the parent Asteroids, child Asteroids are taken care of by them
        for (int i = 0; i < levelManager.asteroidsSOByLevel[levelManager.level].numberOfAsteroid; i++)
        {
            SpawnParentAsteroid(i);
        }
    }

    #region Handler Event
    public Vector3 SafePosition()
    {
        int preventSpawnInEdges = 2;
        Vector3[,] listPosition = new Vector3[nRow, nCol];

        Bounds bounds = ScreenBounds.BOUNDS;
        float distX = bounds.size.x / nRow;
        float distY = bounds.size.y / nCol;
        Vector3 originPoint = bounds.min;

        Vector3 safePosition = bounds.center;

        float result = float.MinValue;

        for (int i = preventSpawnInEdges; i < nRow - preventSpawnInEdges; i++)
        {
            for (int j = preventSpawnInEdges; j < nCol - preventSpawnInEdges; j++)
            {
                listPosition[i, j] = originPoint + new Vector3(distX * i, distY * j, 0);
                float dist = float.MaxValue;

                for (int k = 0; k < ASTEROIDS.Count; k++)
                {
                    float tempDist = (listPosition[i, j] - ASTEROIDS[k].transform.position).sqrMagnitude;
                    if (tempDist < dist)
                    {
                        dist = tempDist;
                    }
                }

                if (dist > result)
                {
                    result = dist;
                    safePosition = new Vector3(listPosition[i, j].x, listPosition[i, j].y, 0);
                }
            }
        }


        return safePosition;
    }

    IEnumerator AlphaJump()
    {
        Vector3 safePos = SafePosition();

        yield return new WaitForSeconds(2);

        PlayerShip.S.ActiveEffect(safePos);
        PlayerShip.S.transform.position = safePos;
        PlayerShip.S.gameObject.SetActive(true);

    }

    IEnumerator FadeGate()
    {
        yield return new WaitForSeconds(0.75f);
        Gate.SetActive(false);
    }

    IEnumerator GameOver()
    {
        Debug.Log("Game OVer!!!");
        yield return new WaitForSeconds(0.75f);

        GUIController.Instance.ShowGameOver();
        LevelManager.Instance.ResetLevel();
    }

    private void OnPlayerShipDestroyedHanler()
    {
        jumpRemaining--;

        if (jumpRemaining < 0)
        {
            Instantiate(shipExplosion, PlayerShip.POSITION, Quaternion.identity);
            jumpRemaining = 0;
            StartCoroutine(GameOver());
        }
        else
        {
            StartCoroutine(AlphaJump());
            GUIController.Instance.UpdateJumpRemaining(jumpRemaining);
        }
    }


    public void OnHitAsteroidHandler(object scoreValue)
    {
        int scoreToIncrease = (scoreValue as Asteroid).Score;
        score += scoreToIncrease;

        GUIController.Instance.UpdateScore(score);

        if (Asteroids.transform.childCount == 1)
        {
            NextLevelOrFightBoss();
            return;
        }

        if (Asteroids.transform.childCount == 1)
        {
            NextLevelOrFightBoss();
        }
    }

    public void NextLevelOrFightBoss()
    {
        if (!levelManager.breakPoint)
        {
            StartCoroutine(LevelPassing());
        }
        else
        {
            SpawnBoss(levelManager.currentLevel);
        }
    }

    private void SpawnBoss(int level)
    {
        switch (level)
        {
            case 5:
                {
                    this.PostEvent(Event.FightBoss);
                    Instantiate(MiniBoss);
                    break;
                }
            case 10:
                {
                    this.PostEvent(Event.FightBoss);
                    Instantiate(SuperBoss);
                    break;
                }
        }
    }

    public IEnumerator LevelPassing()
    {
        LevelManager.Instance.IncreaseLevel();

        this.PostEvent(Event.OnNextLevel, levelManager.level);

        yield return new WaitForSeconds(3f);

        if (!Asteroids.activeSelf)
        {
            Asteroids.SetActive(true);
        }

        SpawnAsteroids();
    }

    void SpawnParentAsteroid(int i)
    {
#if DEBUG_AsteraX_LogMethods
        Debug.Log("AsteraX:SpawnParentAsteroid("+i+")");
#endif

        Asteroid ast = Asteroid.SpawnAsteroid();
        ast.transform.parent = Asteroids.transform;
        ast.gameObject.name = "Asteroid_" + i.ToString("00");
        // Find a good location for the Asteroid to spawn
        Vector3 pos;
        do
        {
            pos = ScreenBounds.RANDOM_ON_SCREEN_LOC;
        } while ((pos - PlayerShip.POSITION).magnitude < MIN_ASTEROID_DIST_FROM_PLAYER_SHIP);

        ast.transform.position = pos;
        ast.size = levelManager.asteroidsSOByLevel[levelManager.level].initialSize;

        GameObject magnetic = magneticFactory.CreateMagnetic();

        magnetic.transform.parent = ast.transform;
        magnetic.transform.localPosition = Vector3.zero;
        magnetic.transform.localScale = Vector3.one;
    }

    #endregion

    public void QuitGame()
    {
        if (sceneController != null)
        {
            sceneController.QuitGame();

        }
    }

    public void QuitToWc()
    {
        Time.timeScale = 1;
        if (sceneController != null)
        {
            sceneController.QuitToWelcome();

        }
    }

    public void Return()
    {
        if (sceneController != null)
        {
            sceneController.Return();

        }
    }

    private void RemoveAllAsteroid()
    {
        for (int i = 0; i < Asteroids.transform.childCount; i++)
        {
            Destroy(Asteroids.transform.GetChild(i).gameObject);
        }

        Asteroids.SetActive(false);
        NextLevelOrFightBoss();
    }

    public void Pause()
    {
        TransitionState(BaseGameState.PAUSE);
    }

    public void Resume()
    {
        TransitionState(BaseGameState.PLAY);
    }

    // ---------------- Static Section ---------------- //

    /// <summary>
    /// <para>This static public property provides some protection for the Singleton _S.</para>
    /// <para>get {} does return null, but throws an error first.</para>
    /// <para>set {} allows overwrite of _S by a 2nd instance, but throws an error first.</para>
    /// <para>Another advantage of using a property here is that it allows you to place
    /// a breakpoint in the set clause and then look at the call stack if you fear that
    /// something random is setting your _S value.</para>
    /// </summary>
    static public AsteraX S
    {
        get
        {
            if (_S == null)
            {
                Debug.LogError("AsteraX:S getter - Attempt to get value of S before it has been set.");
                return null;
            }
            return _S;
        }
        set
        {
            if (_S != null)
            {
                Debug.LogError("AsteraX:S setter - Attempt to set S when it has already been set.");
            }
            _S = value;
        }
    }


    static public AsteroidsScriptableObject AsteroidsSO
    {
        get
        {
            if (S != null)
            {
                return levelManager.asteroidsSOByLevel[levelManager.level];
            }
            return null;
        }
    }

    static public void AddAsteroid(Asteroid asteroid)
    {
        if (ASTEROIDS.IndexOf(asteroid) == -1)
        {
            ASTEROIDS.Add(asteroid);
        }
    }


    static public void RemoveAsteroid(Asteroid asteroid)
    {
        if (ASTEROIDS.IndexOf(asteroid) != -1)
        {
            ASTEROIDS.Remove(asteroid);
        }
    }

    // ---------------- End Section ---------------- //

    // ----------------Only in EDITOR--------------- //
#if UNITY_EDITOR
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            RemoveAllAsteroid();
        }
    }
#endif
}
