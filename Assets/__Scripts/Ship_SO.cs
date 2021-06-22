using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/ShipSO", fileName = "ShipSO.asset")]

[System.Serializable]
public class Ship_SO : ScriptableObject
{
    static public Ship_SO S; // This Scriptable Object is an unprotected Singleton

    public Ship_SO()
    {
        S = this; // Assign the Singleton as part of the constructor.
    }

    public string shipName;

    public string description;

    public int attack;

    public int HP;

    public int speed;

    public string skill;

}
