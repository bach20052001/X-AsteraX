[System.Serializable]
public class LevelManageDataObject
{
    public int Level_Index;
    public string TypeOfAsteroid;
    public int NumberOfAsteroid;
}

[System.Serializable]
public class DataLevelManager 
{
    public LevelManageDataObject[] data_levelmanager;
}
