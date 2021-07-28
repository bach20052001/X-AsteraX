using System.Collections.Generic;

[System.Serializable]
public class NumberAsteroidData
{
    public int Type;
    public int Number;
}

[System.Serializable]
public class LevelDataObject
{
    public int Level_Index;
    public float MinVelocity;
    public float MaxVelocity;
    public float MaxAngularVelocity;
    public List<NumberAsteroidData> ListAsteroid = new List<NumberAsteroidData>();
    public bool HasBoss;
    public int BossType; 
}

[System.Serializable]
public class DataLevel
{
    public LevelDataObject[] data_level;
}
