using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/AsteroidSO", fileName = "AsteroidSO.asset")]
public class Asteroid_SO : ScriptableObject
{
    [Range(1, 3)]
    public int size;

    public int HP;

    public int Point;

    [Range(0,1)]
    public int HasMagnetic;
}
