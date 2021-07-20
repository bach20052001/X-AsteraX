using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/MiniBossSO", fileName = "MiniBossSO.asset")]
public class MiniBoss_SO : ScriptableObject
{
    public int BossID;
    public string BossName;
    public int Point;
    public string Description;

    public Dictionary<int, int> EnemyList = new Dictionary<int, int>()
    {
            {1, 0},
            {2, 0},
            {3, 0},
            {4, 0}
    };
}
