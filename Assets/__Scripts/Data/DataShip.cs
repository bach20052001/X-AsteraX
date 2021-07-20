using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ShipDataObject
{
    //public int ShipID; 

    public string ShipName;

    [Range(1, 3)]
    public int Attack;

    [Range(1, 5)]
    public int HP;

    [Range(1, 5)]
    public int Speed;

    public int Price;

    public string Description;

    [Range(1, 4)]
    public int Skill;

    [Range(1,3)]
    public int BulletType;
}

[System.Serializable]
public class DataShip
{
    public ShipDataObject[] data_ship;
}
