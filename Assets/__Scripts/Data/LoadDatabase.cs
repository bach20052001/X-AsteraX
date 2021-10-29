using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.UI;

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

    private static LoadDatabase instance;

    public Slider slider;

    public object test;
    public object scene;

    public AssetLabelReference asteroidLabel;
    public AssetLabelReference preloadLabel;
    public AssetLabelReference sceneLabel;
    public AssetLabelReference matLabel;


    [Header("Addressable Name")]
    [SerializeField] private string minibossName;
    [SerializeField] private string superbossName;
    [SerializeField] private string enemyName;

    [SerializeField] private string bulletPVAName;
    [SerializeField] private string bulletPVBName;
    [SerializeField] private string bulletBVPName;
    [SerializeField] private string laserName;
    [SerializeField] private string shipBulletName;
    [SerializeField] private string enemyBulletName;


    [SerializeField] private string magneticName;
    [SerializeField] private string shipSummonName;
    [SerializeField] private string explosionName;

    [SerializeField] private string asteroidAName;
    [SerializeField] private string asteroidBName;
    [SerializeField] private string asteroidCName;

    [Header("Assets")]
    public GameObject Miniboss;
    public GameObject Superboss;
    public GameObject Enemy;

    public GameObject bulletPVA;
    public GameObject bulletPVB;
    public GameObject bulletBVP;
    public GameObject Laser;
    public GameObject shipBulletCinematic;
    public GameObject enemyBulletCinematic;


    public GameObject Magnetic;
    public GameObject shipSummon;
    public GameObject explosion;

    public GameObject Scorpion;
    public GameObject Delta;
    public GameObject Scylla;
    public GameObject TBag;
    private IList<IResourceLocation> resourceLocations;

    public List<GameObject> asteroids = new List<GameObject>();

    public Text processReport;
    public Text fileName;

    public IList<GameObject> assetsResult;

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

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

        DontDestroyOnLoad(this.gameObject);

        dataPath = Path.Combine(Application.persistentDataPath, "Data");
    }

    public void StartRead()
    {
        ReadJson();
        LoadJsonToSO();
        StartCoroutine(StartDownloadDependencies());
    }

    IEnumerator UpdateCatalogs()
    {
        List<string> catalogsToUpdate = new List<string>();
        AsyncOperationHandle<List<string>> checkForUpdateHandle = Addressables.CheckForCatalogUpdates();
        checkForUpdateHandle.Completed += op =>
        {
            catalogsToUpdate.AddRange(op.Result);
        };
        yield return checkForUpdateHandle;
        if (catalogsToUpdate.Count > 0)
        {
            AsyncOperationHandle<List<IResourceLocator>> updateHandle = Addressables.UpdateCatalogs(catalogsToUpdate);
            yield return updateHandle;
        }
        //AsyncOperationHandle<IResourceLocator> handle = Addressables.LoadContentCatalogAsync("path_to_secondary_catalog", true);
        //yield return handle;
    }

    public IEnumerator DownloadDependencies(AssetLabelReference label)
    {
        var loadResourceLocationsAsync = Addressables.LoadResourceLocationsAsync(label);
        yield return loadResourceLocationsAsync;
        resourceLocations = loadResourceLocationsAsync.Result;

        AsyncOperationHandle<long> getDownloadSize = Addressables.GetDownloadSizeAsync(label.labelString);

        AsyncOperationHandle downloadDependencies;
        yield return getDownloadSize;

        if (getDownloadSize.Result > 0)
        {
            downloadDependencies = Addressables.DownloadDependenciesAsync(resourceLocations);
            while (!downloadDependencies.IsDone)
            {
                slider.value = downloadDependencies.GetDownloadStatus().Percent;
                yield return null;
            }
            Debug.Log("Download " + label.labelString +" Finished");
        }
    }

    public IEnumerator StartDownloadDependencies()
    {
        yield return StartCoroutine(UpdateCatalogs());

        Caching.ClearCache();

        processReport.text = "Downloading...";

        //AsyncOperationHandle<long> getDownloadSize = Addressables.GetDownloadSizeAsync(preloadLabel.labelString);
        //AsyncOperationHandle downloadDependencies;
        //yield return getDownloadSize;

        //if (getDownloadSize.Result > 0)
        //{
        //    downloadDependencies = Addressables.DownloadDependenciesAsync(preloadLabel.labelString);
        //    while (!downloadDependencies.IsDone)
        //    {
        //        //Debug.Log(downloadDependencies.GetDownloadStatus().Percent);
        //        slider.value = downloadDependencies.GetDownloadStatus().Percent;
        //        yield return null;
        //    }
        //    Debug.Log("Download Assets Finished");
        //}

        yield return StartCoroutine(DownloadDependencies(preloadLabel));
        yield return StartCoroutine(DownloadDependencies(sceneLabel));

        //AsyncOperationHandle downloadScene = Addressables.DownloadDependenciesAsync(sceneLabel.labelString);
        //while (!downloadScene.IsDone)
        //{
        //    //Debug.Log(downloadScene.GetDownloadStatus().Percent);
        //    slider.value = downloadScene.GetDownloadStatus().Percent;
        //    yield return null;
        //}

        // Preloading Assets
        processReport.text = "Loading...";

        // Load Asteroid

        fileName.gameObject.SetActive(true);
        AsyncOperationHandle loadMat = Addressables.LoadAssetsAsync<Material>(matLabel.labelString, obj =>
        {
            fileName.text = obj.name;
        });

        yield return loadMat;

        //AsyncOperationHandle<IList<GameObject>> loadWithSingleKeyHandle = Addressables.LoadAssetsAsync<GameObject>(preloadLabel.labelString, obj =>
        //{
        //    fileName.text = obj.name;
        //});

        //yield return loadWithSingleKeyHandle;

        //assetsResult = loadWithSingleKeyHandle.Result;


        //Addressables.Release(downloadScene);
        //Addressables.Release(loadMat);
        //Addressables.Release(loadWithSingleKeyHandle);



        List<AsyncOperationHandle> aohs = new List<AsyncOperationHandle>();

        AsyncOperationHandle aoh = Addressables.LoadAssetAsync<GameObject>(minibossName);
        yield return aoh;
        Miniboss = aoh.Result as GameObject;

        AsyncOperationHandle aoh1 = Addressables.LoadAssetAsync<GameObject>(superbossName);
        yield return aoh1;
        Superboss = aoh1.Result as GameObject;

        AsyncOperationHandle aoh2 = Addressables.LoadAssetAsync<GameObject>(enemyName);
        yield return aoh2;
        Enemy = aoh2.Result as GameObject;

        AsyncOperationHandle aoh3 = Addressables.LoadAssetAsync<GameObject>(bulletPVAName);
        yield return aoh3;
        bulletPVA = aoh3.Result as GameObject;

        AsyncOperationHandle aoh4 = Addressables.LoadAssetAsync<GameObject>(bulletPVBName);
        yield return aoh4;
        bulletPVB = aoh4.Result as GameObject;

        AsyncOperationHandle aoh5 = Addressables.LoadAssetAsync<GameObject>(bulletBVPName);
        yield return aoh5;
        bulletBVP = aoh5.Result as GameObject;

        AsyncOperationHandle aoh6 = Addressables.LoadAssetAsync<GameObject>(laserName);
        yield return aoh6;
        Laser = aoh6.Result as GameObject;

        AsyncOperationHandle aoh7 = Addressables.LoadAssetAsync<GameObject>(shipBulletName);
        yield return aoh7;
        shipBulletCinematic = aoh7.Result as GameObject;

        AsyncOperationHandle aoh8 = Addressables.LoadAssetAsync<GameObject>(enemyBulletName);
        yield return aoh8;
        enemyBulletCinematic = aoh8.Result as GameObject;

        AsyncOperationHandle aoh9 = Addressables.LoadAssetAsync<GameObject>(magneticName);
        yield return aoh9;
        Magnetic = aoh9.Result as GameObject;

        AsyncOperationHandle aoh10 = Addressables.LoadAssetAsync<GameObject>(shipSummonName);
        yield return aoh10;
        shipSummon = aoh10.Result as GameObject;

        AsyncOperationHandle aoh11 = Addressables.LoadAssetAsync<GameObject>(explosionName);
        yield return aoh11;
        explosion = aoh11.Result as GameObject;

        AsyncOperationHandle aoh12 = Addressables.LoadAssetAsync<GameObject>("Scorpion");
        yield return aoh12;
        Scorpion = aoh12.Result as GameObject;

        AsyncOperationHandle aoh13 = Addressables.LoadAssetAsync<GameObject>("Delta");
        yield return aoh13;
        Delta = aoh13.Result as GameObject;

        AsyncOperationHandle aoh14 = Addressables.LoadAssetAsync<GameObject>("Scylla");
        yield return aoh14;
        Scylla = aoh14.Result as GameObject;

        AsyncOperationHandle aoh15 = Addressables.LoadAssetAsync<GameObject>("T-Bag");
        yield return aoh15;
        TBag = aoh15.Result as GameObject;

        AsyncOperationHandle aoh16 = Addressables.LoadAssetsAsync<GameObject>(asteroidLabel.labelString, obj =>
        {
            asteroids.Add(obj);
        });
        yield return aoh16;


        SceneController.Instance.NextScene();
    }



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
}