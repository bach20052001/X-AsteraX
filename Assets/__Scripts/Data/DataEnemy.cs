using UnityEngine;

[System.Serializable]
public class EnemyDataObject
{
    [Range(1,4)]
    public int EnemyID;
    public string EnemyName;
    public int HP;
    public float Speed;
    public int Point;
    public bool CanAttack;
    public bool CanChasePlayer;
    [Range(1,3)]
    public int BulletType;
}

[System.Serializable]
public class DataEnemy
{
    public EnemyDataObject[] data_enemy;
}
