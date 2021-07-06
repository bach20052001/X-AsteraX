[System.Serializable]
public class LevelDataObject
{
    public int NumOfAsteroid;
    public float MinVelocity;
    public float MaxVelocity;
    public float MaxAngularVelocity;
    public int InitialSize;
    public int numSmallerAsteroidsToSpawn;
}

[System.Serializable]
public class DataLevel
{
    public LevelDataObject[] data_level;
}
