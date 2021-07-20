using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NumberEnemyDataObject
{
    [Range(1,4)]
    public int EnemyType;
    public int Numbers;
}

[System.Serializable]
public class DataMiniboss
{
    public int BossID;
    public string BossName;
    public int Point;
    public string Description;
    public List<NumberEnemyDataObject> EnemyList = new List<NumberEnemyDataObject>();
}
