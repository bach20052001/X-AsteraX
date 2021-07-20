using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/SuperBossSO", fileName = "SuperBossSO.asset")]
public class SuperBoss_SO : ScriptableObject
{
    public int BossID;
    public string BossName;
    public int HP;
    public float FireRate;
    public bool Laser;
    public float xRange;
    public int point;
    public string Description;
    [Range(1,3)]
    public int BulletType;

    public float Speed;
}
