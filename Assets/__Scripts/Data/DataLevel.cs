using System.Collections.Generic;

[System.Serializable]
public class NumberAsteroidData
{
    public string Type;
    public int Number;
}

[System.Serializable]
public class LevelDataObject
{
    public int Level_Index;
    public float MinVelocity;
    public float MaxVelocity;
    public float MaxAngularVelocity;
    public List<NumberAsteroidData> Asteroid = new List<NumberAsteroidData>();
}

[System.Serializable]
public class DataLevel
{
    public LevelDataObject[] data_level;
}
