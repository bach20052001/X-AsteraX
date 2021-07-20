using UnityEngine;


[CreateAssetMenu(menuName = "Scriptable Objects/BulletSO", fileName = "BulletSO.asset")]
public class Bullet_SO : ScriptableObject
{
    public Color32 color;
    public float LifeTime;
    public float Speed;
    public bool isOffScreenWrapper;
}
