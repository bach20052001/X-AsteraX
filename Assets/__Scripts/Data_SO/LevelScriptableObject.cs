using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/LevelsSO", fileName = "LevelSO.asset")]

public class LevelScriptableObject : ScriptableObject
{
	public float        minVel = 5;
	public float        maxVel = 10;
    public float        maxAngularVel = 10;
    public int          numSmallerAsteroidsToSpawn = 2;

    public Dictionary<int, int> Asteroids = new Dictionary<int, int>()
    {
            {1, 0},
            {2, 0},
            {3, 0}
    };

    public bool HasBoss;
    public int BossType;
}
