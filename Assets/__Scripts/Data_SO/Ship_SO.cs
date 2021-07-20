using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/ShipSO", fileName = "ShipSO.asset")]

public class Ship_SO : ScriptableObject
{
    public string shipName;

    [Range(1,2)]
    public int attack;

    [Range(1,5)]
    public int HP;

    [Range(1,5)]
    public int speed;

    public int price;

    public string description;

    public Skills skill;

    [Range(1,3)]
    public int BulletType;
}
