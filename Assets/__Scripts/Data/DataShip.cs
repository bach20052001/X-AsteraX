using UnityEngine;

[System.Serializable]
public class ShipDataObject
{
    public string ShipName;

    [Range(1, 3)]
    public int Attack;

    [Range(1, 5)]
    public int HP;

    [Range(1, 5)]
    public int Speed;

    public int Price;

    public string Description;

    public int Skill;
}

[System.Serializable]
public class DataShip
{
    public ShipDataObject[] data_ship;
}
