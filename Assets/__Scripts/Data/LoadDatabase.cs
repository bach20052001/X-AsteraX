using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LoadDatabase : MonoBehaviour
{
    public List<Asteroid_SO> data_asteroid = new List<Asteroid_SO>();
    public List<LevelScriptableObject> data_level = new List<LevelScriptableObject>();
    public List<Skill_SO> data_skill = new List<Skill_SO>();
    public List<Ship_SO> data_ship = new List<Ship_SO>();
    public List<Bullet_SO> data_bullet = new List<Bullet_SO>();
    public List<Enemy_SO> data_enemy = new List<Enemy_SO>();
    public SuperBoss_SO data_superboss;
    public MiniBoss_SO data_miniboss;

    public List<GameObject> listPlayerships;
    public List<GameObject> listAsteroids;
    public List<GameObject> listExplosion;
    public List<GameObject> listBullet;
    public List<string> listScenes;

    //Path
    //--Scene--//
    [Header("ScenePath")]
    public List<string> sceneAssetPath;

    //--Asteroid--//
    [Header("AsteroidPath")]
    public List<string> asteroidAssetPath;

    //--PlayershipPath--//
    [Header("PlayershipPath")]
    public List<string> playershipAssetPath;

    //--BossAndEnemy--//
    [Header("BossAndEnemyPath")]
    public string minibossPath;
    public string enemyPath;
    public string superbossPath;

    [Header("ExplosionPath")]
    public List<string> explosionPath;

    [Header("LightingPath")]
    public List<string> lightingPath;

    //--Effect--//
    public string sparkPath;
    public string portalPath;
    public string laserPath;
    public string asteroideffectPath;
    public string shipAppearEffectPath;
    public string cinematicPlayerShotPath;
    public string cinematicEnemyShotPath;
    //public string cinematicPlayerPath;
    //public string cinematicEnemyPath;


    public List<string> shipNames;
    public List<string> asteroidNames;
    public List<string> explosionNames;
    public List<string> sceneNames;

    public GameObject spark;
    public GameObject portal;
    public GameObject Laser;

    public GameObject asteroidEffect;
    public GameObject shipAppearEffect;

    public GameObject miniboss;
    public GameObject enemy;
    public GameObject superboss;

    public AssetBundle lightingmain;
    public AssetBundle lightingcutscene;
    public AssetBundle profilecutscene;
    public AssetBundle timelineAndSignals;

    [Header("Bullet")]
    public GameObject enemyShotCinematic;
    public GameObject playershipShotCinematic;

    //public GameObject enemyCinematic;
    //public GameObject playershipCinematic;

    private string database_spaceship;
    private string database_level;
    private string database_skill;
    private string database_asteroid;
    private string database_bullet;
    private string database_enemy;
    private string database_miniboss;
    private string database_superboss;

    [HideInInspector] public DataAsteroid dataAsteroid;
    [HideInInspector] public DataLevel dataLevel;
    [HideInInspector] public DataShip dataShip;
    [HideInInspector] public DataSkill dataSkill;
    [HideInInspector] public DataBullet dataBullet;
    [HideInInspector] public DataEnemy dataEnemy;
    [HideInInspector] public DataMiniboss dataMiniboss;
    [HideInInspector] public DataSuperboss dataSuperboss;

    private string dataPath;
    private string assetPath;

    public List<UnityEngine.Object> listScene = new List<UnityEngine.Object>();

    public List<string> listToLoad = new List<string>();
    public List<string> listNameAB = new List<string>();

    private static LoadDatabase instance;

    public static LoadDatabase Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<LoadDatabase>();
            }
            return instance;
        }
    }

    public AssetBundle assetBundle;
    public AssetBundleManifest manifest;
    public List<AssetBundle> listAB = new List<AssetBundle>();
    public List<UnityEngine.Object> ObjectsFromAB = new List<UnityEngine.Object>();

    private void Awake()
    {
        dataPath = Path.Combine(Application.persistentDataPath, "Data");
        assetPath = Path.Combine(Application.persistentDataPath, "Asset");

        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

        DontDestroyOnLoad(this.gameObject);
    }

    private void Start()
    {
        enemyShotCinematic = Resources.Load<GameObject>("shot_prefab_enemy");
        playershipShotCinematic = Resources.Load<GameObject>("shot_prefab_ship");

    }

    public IEnumerator StartRead()
    {
        ReadJson();
        LoadJsonToSO();

        yield return StartCoroutine(LoadAllList());
        //yield return new WaitForEndOfFrame();
        //yield return StartCoroutine(LoadCinematic());
        yield return new WaitForEndOfFrame();
        yield return StartCoroutine(LoadScene());
    }

    private IEnumerator LoadAllList()
    {
        var loadAb = AssetBundle.LoadFromFileAsync(Path.Combine(assetPath, "AssetBundle"));

        yield return loadAb;

        assetBundle = loadAb.assetBundle;

        if (assetBundle == null) yield break;

        var loadManifest = assetBundle.LoadAssetAsync<AssetBundleManifest>("assetbundlemanifest");

        yield return loadManifest;

        manifest = loadManifest.asset as AssetBundleManifest;

        if (manifest == null) yield break;

        LoadSceneAndDepend();

        for (int i = 0; i < listToLoad.Count; i++)
        {
            var ab = AssetBundle.LoadFromFileAsync(listToLoad[i]);

            yield return ab;

            AssetBundle abr = ab.assetBundle;

            yield return abr;

            var loadall = abr.LoadAllAssetsAsync();

            yield return loadall;

            foreach (UnityEngine.Object obj in loadall.allAssets)
            {
                ObjectsFromAB.Add(obj);
            }

            Debug.Log("Load " + abr.name + " finished");
        }
    }

    private IEnumerator LoadCinematic()
    {
        var bundleLoadRequest = AssetBundle.LoadFromFileAsync(Path.Combine(assetPath, "timelineandsignal"));
        yield return bundleLoadRequest;
        timelineAndSignals = bundleLoadRequest.assetBundle;

        yield return new WaitForEndOfFrame();
    }

    IEnumerator Download(string url, string assetName, string assetUrl, List<GameObject> listTarget)
    {
        AssetBundleLoader assetBundleLoader = new AssetBundleLoader();
        yield return StartCoroutine(assetBundleLoader.LoadBundle<GameObject>(url, assetName, assetUrl));
        if (assetBundleLoader.Obj != null)
            Debug.Log("Success");

        listTarget.Add(assetBundleLoader.Obj as GameObject);
    }

    IEnumerator Download(string url, string assetName, string assetUrl, Action<GameObject> callback)
    {
        AssetBundleLoader assetBundleLoader = new AssetBundleLoader();
        yield return StartCoroutine(assetBundleLoader.LoadBundle<GameObject>(url, assetName, assetUrl));
        if (assetBundleLoader.Obj != null)
        {
            callback(assetBundleLoader.Obj as GameObject);
            Debug.Log("Success");
        }
    }

    IEnumerator DownloadScene(string url, string assetName, string assetUrl, List<string> listTarget)
    {
        AssetBundleLoader assetBundleLoader = new AssetBundleLoader();
        yield return StartCoroutine(assetBundleLoader.LoadSceneBundle(url, assetName, assetUrl));
        if (assetBundleLoader.Obj != null)
            Debug.Log("Success");

        listScene.Add(assetBundleLoader.Obj);
        listTarget.Add(assetBundleLoader.sceneName);
        yield return null;
    }

    //private void LoadEffect()
    //{
    //    StartCoroutine(Download(Path.Combine(assetPath, "spark"), "Sparks", sparkPath, (obj) =>
    //    {
    //        spark = obj;
    //    }));
    //    StartCoroutine(Download(Path.Combine(assetPath, "effect", "portal"), "pf_vfx-ult_demo_psys_loop_hyperspace", portalPath, (obj) =>
    //    {
    //        portal = obj;
    //    }));

    //    StartCoroutine(Download(Path.Combine(assetPath, "laser"), "Laser beam 2", laserPath, (obj) =>
    //    {
    //        Laser = obj;
    //    }));

    //    StartCoroutine(Download(Path.Combine(assetPath, "asteroid", "effect"), "Asteroid_Effect", asteroideffectPath, (obj) =>
    //    {
    //        asteroidEffect = obj;
    //    }));

    //    StartCoroutine(Download(Path.Combine(assetPath, "effect", "shipappear"), "Warp2", shipAppearEffectPath, (obj) =>
    //    {
    //        shipAppearEffect = obj;
    //    }));
    //}

    //public void LoadLighting()
    //{
    //    lightingmain = AssetBundle.LoadFromFile(Path.Combine(assetPath, "lightingdatamain"));
    //    lightingcutscene = AssetBundle.LoadFromFile(Path.Combine(assetPath, "cutscenelighting"));
    //    profilecutscene = AssetBundle.LoadFromFile(Path.Combine(assetPath, "cutsceneprofiles"));
    //}

    //public void LoadEnemy()
    //{
    //    StartCoroutine(Download(Path.Combine(assetPath, "miniboss"), "Boss 1", minibossPath, (obj) =>
    //    {
    //        miniboss = obj;
    //    }));
    //    StartCoroutine(Download(Path.Combine(assetPath, "enemy"), "Enemy", enemyPath, (obj) =>
    //    {
    //        enemy = obj;
    //    }));
    //    StartCoroutine(Download(Path.Combine(assetPath, "superboss"), "Boss 2", superbossPath, (obj) =>
    //    {
    //        superboss = obj;
    //    }));
    //}

    private IEnumerator LoadScene()
    {
        for (int i = 0; i < sceneAssetPath.Count; i++)
        {
            yield return StartCoroutine(DownloadScene(Path.Combine(assetPath, sceneNames[i]), sceneNames[i], sceneAssetPath[i], listScenes));
        }

        while (listScenes.Count < sceneAssetPath.Count)
        {
            yield return new WaitForEndOfFrame();
        }

        yield return new WaitForEndOfFrame();
        SceneController.Instance.scenePaths = listScenes;

        yield return new WaitForEndOfFrame();
        SceneController.Instance.NextSceneAB();
    }

    //private void LoadAssets()
    //{
    //    for (int i = 0; i < playershipAssetPath.Count; i++)
    //    {
    //        StartCoroutine(Download(Path.Combine(Path.Combine(assetPath, "playership"), shipNames[i]), shipNames[i], playershipAssetPath[i], listPlayerships));
    //    }

    //    for (int i = 0; i < asteroidAssetPath.Count; i++)
    //    {
    //        StartCoroutine(Download(Path.Combine(Path.Combine(assetPath, "asteroid"), asteroidNames[i]), "Asteroid_" + asteroidNames[i], asteroidAssetPath[i], listAsteroids));
    //    }

    //    for (int i = 0; i < explosionPath.Count; i++)
    //    {
    //        StartCoroutine(Download(Path.Combine(Path.Combine(assetPath, "explosion"), explosionNames[i]), explosionNames[i], explosionPath[i], listExplosion));
    //    }
    //}

    private void ReadJson()
    {
        database_asteroid = File.ReadAllText(Path.Combine(dataPath, "database_asteroid.json"));
        database_level = File.ReadAllText(Path.Combine(dataPath, "database_level.json"));
        database_skill = File.ReadAllText(Path.Combine(dataPath, "database_skill.json"));
        database_spaceship = File.ReadAllText(Path.Combine(dataPath, "database_spaceship.json"));
        database_bullet = File.ReadAllText(Path.Combine(dataPath, "database_bullet.json"));
        database_enemy = File.ReadAllText(Path.Combine(dataPath, "database_enemy.json"));
        database_miniboss = File.ReadAllText(Path.Combine(dataPath, "database_miniboss.json"));
        database_superboss = File.ReadAllText(Path.Combine(dataPath, "database_superboss.json"));


        database_asteroid = "{" + "\"data_asteroid\":" + database_asteroid + "}";
        database_level = "{" + "\"data_level\":" + database_level + "}";
        database_skill = "{" + "\"data_skill\":" + database_skill + "}";
        database_spaceship = "{" + "\"data_ship\":" + database_spaceship + "}";
        database_bullet = "{" + "\"data_bullet\":" + database_bullet + "}";
        database_enemy = "{" + "\"data_enemy\":" + database_enemy + "}";
    }

    private void LoadJsonToSO()
    {
        dataAsteroid = JsonUtility.FromJson<DataAsteroid>(database_asteroid);
        dataLevel = JsonUtility.FromJson<DataLevel>(database_level);
        dataShip = JsonUtility.FromJson<DataShip>(database_spaceship);
        dataSkill = JsonUtility.FromJson<DataSkill>(database_skill);
        dataBullet = JsonUtility.FromJson<DataBullet>(database_bullet);
        dataEnemy = JsonUtility.FromJson<DataEnemy>(database_enemy);
        dataMiniboss = JsonUtility.FromJson<DataMiniboss>(database_miniboss);
        dataSuperboss = JsonUtility.FromJson<DataSuperboss>(database_superboss);

        ShipDataObject[] cachedShipData = dataShip.data_ship;
        AsteroidDataObject[] cachedAsteroidData = dataAsteroid.data_asteroid;
        LevelDataObject[] cachedLevelData = dataLevel.data_level;
        SkillDataObject[] cachedSkillData = dataSkill.data_skill;
        BulletDataObject[] cachedBulletData = dataBullet.data_bullet;
        EnemyDataObject[] cachedEnemyData = dataEnemy.data_enemy;
        DataSuperboss cachedSuperbossData = dataSuperboss;
        DataMiniboss cachedMinibossData = dataMiniboss;


        // Load Superboss
        data_superboss.BossID = cachedSuperbossData.BossID;
        data_superboss.BossName = cachedSuperbossData.BossName;
        data_superboss.BulletType = cachedSuperbossData.BulletType;
        data_superboss.Description = cachedSuperbossData.Description;
        data_superboss.Laser = cachedSuperbossData.Laser;
        data_superboss.xRange = cachedSuperbossData.xRangeLaser;
        data_superboss.point = cachedSuperbossData.Point;
        data_superboss.HP = cachedSuperbossData.HP;
        data_superboss.FireRate = cachedSuperbossData.FireRate;
        data_superboss.Speed = cachedSuperbossData.Speed;


        //Load Miniboss
        data_miniboss.BossID = cachedMinibossData.BossID;
        data_miniboss.BossName = cachedMinibossData.BossName;
        data_miniboss.Point = cachedMinibossData.Point;
        data_miniboss.Description = cachedMinibossData.Description;

        for (int i = 0; i < cachedMinibossData.EnemyList.Count; i++)
        {
            data_miniboss.EnemyList[cachedMinibossData.EnemyList[i].EnemyType] = cachedMinibossData.EnemyList[i].Numbers;
        }

        //Load Enemy Data
        for (int i = 0; i < cachedEnemyData.Length; i++)
        {
            data_enemy[i].EnemyID = Mathf.Clamp(cachedEnemyData[i].EnemyID, 1, 4);
            data_enemy[i].EnemyName = cachedEnemyData[i].EnemyName;
            data_enemy[i].Speed = cachedEnemyData[i].Speed;
            data_enemy[i].HP = cachedEnemyData[i].HP;
            data_enemy[i].CanAttack = cachedEnemyData[i].CanAttack;
            data_enemy[i].CanChasePlayer = cachedEnemyData[i].CanChasePlayer;
            data_enemy[i].EnemyID = cachedEnemyData[i].EnemyID;
            data_enemy[i].Point = cachedEnemyData[i].Point;
            data_enemy[i].BulletType = Mathf.Clamp(cachedEnemyData[i].BulletType, 1, 3);
        }

        //Load Bullet Data
        for (int i = 0; i < cachedBulletData.Length; i++)
        {
            data_bullet[i].LifeTime = cachedBulletData[i].LifeTime;
            data_bullet[i].Speed = cachedBulletData[i].Speed;
            data_bullet[i].isOffScreenWrapper = cachedBulletData[i].OffScreenWrapper;

            switch (cachedBulletData[i].Color)
            {
                case "Red":
                    {
                        data_bullet[i].color = new Color32(255, 87, 61, 255);
                        break;
                    }
                case "Blue":
                    {
                        data_bullet[i].color = new Color32(114, 153, 255, 255);
                        break;
                    }
                default:
                    {
                        data_bullet[i].color = new Color32(255, 87, 61, 255);
                        break;
                    }
            }
        }

        //Load Asteroid Data
        for (int i = 0; i < cachedAsteroidData.Length; i++)
        {
            data_asteroid[i].size = Mathf.Clamp(cachedAsteroidData[i].Size, 1, 3);

            data_asteroid[i].HP = cachedAsteroidData[i].HP;

            data_asteroid[i].Point = cachedAsteroidData[i].Point;

            data_asteroid[i].HasMagnetic = Mathf.Clamp(cachedAsteroidData[i].HasMagnetic, 0, 1);
        }


        //Load Level Data
        for (int i = 0; i < data_level.Count; i++)
        {
            data_level[i].minVel = cachedLevelData[i].MinVelocity;

            data_level[i].maxVel = cachedLevelData[i].MaxVelocity;

            data_level[i].maxAngularVel = cachedLevelData[i].MaxAngularVelocity;

            data_level[i].numSmallerAsteroidsToSpawn = 2;

            for (int j = 0; j < cachedLevelData[i].ListAsteroid.Count; j++)
            {
                data_level[i].Asteroids[cachedLevelData[i].ListAsteroid[j].Type] = cachedLevelData[i].ListAsteroid[j].Number;
            }

            data_level[i].HasBoss = cachedLevelData[i].HasBoss;

            if (cachedLevelData[i].HasBoss)
            {
                data_level[i].BossType = cachedLevelData[i].BossType;
            }
            else
            {
                data_level[i].BossType = 0;
            }
        }

        //Load Spaceship Data
        for (int i = 0; i < data_ship.Count; i++)
        {
            data_ship[i].shipName = cachedShipData[i].ShipName;

            data_ship[i].attack = Mathf.Clamp(cachedShipData[i].Attack, 1, 2);

            data_ship[i].HP = Mathf.Clamp(cachedShipData[i].HP, 1, 5);

            data_ship[i].speed = Mathf.Clamp(cachedShipData[i].Speed, 1, 5);

            data_ship[i].description = cachedShipData[i].Description;

            data_ship[i].price = cachedShipData[i].Price;

            data_ship[i].skill = (Skills)Mathf.Clamp(cachedShipData[i].Skill, 1, 4);

            data_ship[i].BulletType = Mathf.Clamp(cachedShipData[i].BulletType, 1, 3);
        }

        //Load Skill Data
        for (int i = 0; i < data_skill.Count; i++)
        {
            data_skill[i].SkillIndex = (Skills)Mathf.Clamp(cachedSkillData[i].SkillIndex, 1, 4);

            data_skill[i].SkillName = cachedSkillData[i].SkillName;

            data_skill[i].countdownSkill = cachedSkillData[i].CountdownSkill;

            data_skill[i].maxIncremental = cachedSkillData[i].MaxIncremental;
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            SceneController.Instance.NextSceneAB();
        }
    }

    public void LoadSceneAndDepend()
    {
        for (int i = 0; i < sceneNames.Count; i++)
        {
            LoadOrder(sceneNames[i]);
        }
    } 

    public void LoadOrder(string name)
    {
        string[] dependencies = manifest.GetAllDependencies(name);

        if (dependencies == null || dependencies.Length == 0)
        {
            return;
        }

        foreach (string dependency in dependencies)
        {
            if (!listToLoad.Contains(Path.Combine(assetPath, dependency)))
            {
                LoadOrder(dependency);
                listToLoad.Add(Path.Combine(assetPath, dependency));
                listNameAB.Add(dependency);
            }

        }
    }
}