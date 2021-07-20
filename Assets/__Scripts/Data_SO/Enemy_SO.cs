using UnityEngine;


[CreateAssetMenu(menuName = "Scriptable Objects/EnemySO", fileName = "EnemySO.asset")]
public class Enemy_SO : ScriptableObject
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
