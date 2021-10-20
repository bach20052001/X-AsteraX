using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.AddressableAssets;
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
    public List<IResourceLocation> AsteroidLocations;

    [Header("Addressable Name")]
    [SerializeField] private string minibossName;
    [SerializeField] private string superbossName;
    [SerializeField] private string enemyName;

    [SerializeField] private string bulletPVAName;
    [SerializeField] private string bulletPVBName;
    [SerializeField] private string bulletBVPName;

    [SerializeField] private string magneticName;
    [SerializeField] private string shipSummonName;
    [SerializeField] private string explosionName;

    [Header("Assets")]
    public GameObject Miniboss;
    public GameObject Superboss;
    public GameObject Enemy;

    public GameObject bulletPVA;
    public GameObject bulletPVB;
    public GameObject bulletBVP;

    public GameObject Magnetic;
    public GameObject shipSummon;
    public GameObject explosion;

    public GameObject Scorpion;
    public GameObject Delta;
    public GameObject Scylla;
    public GameObject TBag;


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

    public IEnumerator StartDownloadDependencies()
    {
        string key = "preload";

        Caching.ClearCache();

        Debug.Log("LoadDependencies");

        AsyncOperationHandle<long> getDownloadSize = Addressables.GetDownloadSizeAsync(key);
        yield return getDownloadSize;

        Debug.Log(getDownloadSize.Result);

        //If the download size is greater than 0, download all the dependencies.
        if (getDownloadSize.Result > 0)
        {
            AsyncOperationHandle downloadDependencies = Addressables.DownloadDependenciesAsync(key);
            //yield return downloadDependencies;

            while (!downloadDependencies.IsDone)
            {
                Debug.Log(downloadDependencies.GetDownloadStatus().Percent);
                slider.value = downloadDependencies.GetDownloadStatus().Percent;
                yield return null;
            }
            Debug.Log("Download Assets Finished");
            //Addressables.Release(downloadDependencies);

        }

        AsyncOperationHandle downloadScene = Addressables.DownloadDependenciesAsync("scene");
        yield return downloadScene;
        Debug.Log("Download Scene Finished");
        //Addressables.Release(downloadScene);

        // Preloading Assets

        // Load Asteroid
        Addressables.LoadResourceLocationsAsync(asteroidLabel.labelString).Completed += OnLoadAsteroidFinished;
        // =============

        Addressables.LoadAssetAsync<GameObject>(minibossName).Completed += obj => {
            Miniboss = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(superbossName).Completed += obj => {
            Superboss = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(enemyName).Completed += obj => {
            Enemy = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(bulletPVAName).Completed += obj => {
            bulletPVA = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(bulletPVBName).Completed += obj => {
            bulletPVB = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(bulletBVPName).Completed += obj => {
            bulletBVP = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(magneticName).Completed += obj => {
            Magnetic = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(explosionName).Completed += obj => {
            explosion = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>(shipSummonName).Completed += obj => {
            shipSummon = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>("Scorpion").Completed += obj => {
            Scorpion = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>("Delta").Completed += obj => {
            Delta = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>("Scylla").Completed += obj => {
            Scylla = obj.Result;
            Addressables.Release(obj);
        };

        Addressables.LoadAssetAsync<GameObject>("T-Bag").Completed += obj => {
            TBag = obj.Result;
            Addressables.Release(obj);
        };
    }

    private void OnLoadAsteroidFinished(AsyncOperationHandle<IList<IResourceLocation>> obj)
    {
        AsteroidLocations = new List<IResourceLocation>(obj.Result);
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