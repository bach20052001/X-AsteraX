[System.Serializable]
public class LevelDataObject
{
    public int Level_Index;
    public float MinVelocity;
    public float MaxVelocity;
    public float MaxAngularVelocity;
}

[System.Serializable]
public class DataLevel
{
    public LevelDataObject[] data_level;
}
