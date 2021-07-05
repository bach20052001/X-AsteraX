using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/AsteroidSO", fileName = "AsteroidSO.asset")]

public class Asteroid_SO : ScriptableObject
{
    [Range(1, 3)]
    public int size;

    public int hp;

    public bool hasMagnetic;

    public int point;
}
