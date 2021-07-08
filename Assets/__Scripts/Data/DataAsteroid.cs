using UnityEngine;

[System.Serializable]
public class AsteroidDataObject
{
    public char Type;

    [Range(1, 3)]
    public int size;

    [Range(1, 3)]
    public int HP;

    public int Point;

    [Range(0, 1)]
    public int HasMagnetic;
}

[System.Serializable]
public class DataAsteroid
{
    public AsteroidDataObject[] data_asteroid;
}
