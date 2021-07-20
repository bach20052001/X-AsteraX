using UnityEngine;

[System.Serializable]
public class BulletDataObject
{
    public int Type;
    public string Color;
    public float LifeTime;
    public float Speed;
    public string Note;
    public bool OffScreenWrapper;
}

[System.Serializable]
public class DataBullet
{
    public BulletDataObject[] data_bullet;
}
