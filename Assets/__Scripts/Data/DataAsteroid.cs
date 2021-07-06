using UnityEngine;

[System.Serializable]
public class AsteroidDataObject
{
    [Range(1, 3)]
    public int size;

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
