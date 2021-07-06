using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


public class LoadDatabase : MonoBehaviour
{
    public List<Asteroid_SO> data_asteroid = new List<Asteroid_SO>();
    public List<LevelScriptableObject> data_level = new List<LevelScriptableObject>();
    public List<Skill_SO> data_skill = new List<Skill_SO>();
    public List<Ship_SO> data_ship = new List<Ship_SO>();

    private string database_spaceship;
    private string database_level;
    private string database_skill;
    private string database_asteroid;

    [HideInInspector] public DataAsteroid dataAsteroid;
    [HideInInspector] public DataLevel dataLevel;
    [HideInInspector] public DataShip dataShip;
    [HideInInspector] public DataSkill dataSkill;

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
    }

    // Start is called before the first frame update
    void Start()
    {
        ReadJson();
        LoadJsonToSO();
    }

    private void ReadJson()
    {
        database_asteroid = Resources.Load<TextAsset>("Data/database_asteroid").ToString();
        database_level = Resources.Load<TextAsset>("Data/database_level").ToString();
        database_skill = Resources.Load<TextAsset>("Data/database_skill").ToString();
        database_spaceship = Resources.Load<TextAsset>("Data/database_spaceship").ToString();


        database_asteroid = "{" + "\"data_asteroid\":" + database_asteroid + "}";
        database_level = "{" + "\"data_level\":" + database_level + "}";
        database_skill = "{" + "\"data_skill\":" + database_skill + "}";
        database_spaceship = "{" + "\"data_ship\":" + database_spaceship + "}";
    }

    private void LoadJsonToSO()
    {
        dataAsteroid = JsonUtility.FromJson<DataAsteroid>(database_asteroid);
        dataLevel = JsonUtility.FromJson<DataLevel>(database_level);
        dataShip = JsonUtility.FromJson<DataShip>(database_spaceship);
        dataSkill = JsonUtility.FromJson<DataSkill>(database_skill);

        ShipDataObject[] cachedShipData = dataShip.data_ship;
        AsteroidDataObject[] cachedAsteroidData = dataAsteroid.data_asteroid;
        LevelDataObject[] cachedLevelData = dataLevel.data_level;
        SkillDataObject[] cachedSkillData = dataSkill.data_skill;

        //Load Asteroid Data
        for (int i = 0; i < cachedAsteroidData.Length; i++)
        {
            data_asteroid[i].HP = cachedAsteroidData[i].HP;
            data_asteroid[i].size = cachedAsteroidData[i].size;
            data_asteroid[i].Point = cachedAsteroidData[i].Point;
            data_asteroid[i].HasMagnetic = cachedAsteroidData[i].HasMagnetic;

        }

        //Load Level Data
        for (int i = 0; i < data_level.Count; i++)
        {
            data_level[i].NumOfAsteroid = cachedLevelData[i].NumOfAsteroid;
            data_level[i].minVel = cachedLevelData[i].MinVelocity;
            data_level[i].maxVel = cachedLevelData[i].MaxVelocity;
            data_level[i].maxAngularVel = cachedLevelData[i].MaxAngularVelocity;
            data_level[i].initialSize = cachedLevelData[i].InitialSize;
            data_level[i].numSmallerAsteroidsToSpawn = cachedLevelData[i].numSmallerAsteroidsToSpawn;
        }

        //Load Spaceship Data
        for (int i = 0; i < data_ship.Count; i++)
        {
            data_ship[i].shipName = cachedShipData[i].ShipName;
            data_ship[i].attack = cachedShipData[i].Attack;
            data_ship[i].HP = cachedShipData[i].HP;
            data_ship[i].speed = cachedShipData[i].Speed;
            data_ship[i].description = cachedShipData[i].Description;
            data_ship[i].price = cachedShipData[i].Price;
            data_ship[i].skill = (Skills)cachedShipData[i].Skill;

        }

        //Load Skill Data
        for (int i = 0; i < data_skill.Count; i++)
        {
            data_skill[i].SkillIndex = (Skills)cachedSkillData[i].SkillIndex;
            data_skill[i].SkillName = cachedSkillData[i].SkillName;
            data_skill[i].countdownSkill = cachedSkillData[i].CountdownSkill;
            data_skill[i].maxIncremental = cachedSkillData[i].MaxIncremental;
        }
    }
}