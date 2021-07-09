using System.Collections.Generic;
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
            data_asteroid[i].size = Mathf.Clamp(cachedAsteroidData[i].size, 1, 3);

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

            //Dictionary<string, int> Asteroid = new Dictionary<string, int>();

            //for (int j = 0; j < cachedLevelData[i].Asteroid.Count; j++)
            //{
            //    Asteroid.Add(cachedLevelData[i].Asteroid[j].Type, cachedLevelData[i].Asteroid[j].Number);
            //}

            for (int j = 0; j < cachedLevelData[i].Asteroid.Count; j++)
            {
                data_level[i].Asteroids[cachedLevelData[i].Asteroid[j].Type] = cachedLevelData[i].Asteroid[j].Number;
            }
            //data_level[i].NumOfAsteroidA = Asteroid["A"];
            //data_level[i].NumOfAsteroidB = Asteroid["B"];
            //data_level[i].NumOfAsteroidC = Asteroid["C"];
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