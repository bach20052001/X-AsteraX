using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/LevelsSO", fileName = "LevelSO.asset")]

public class LevelScriptableObject : ScriptableObject
{
	public float        minVel = 5;
	public float        maxVel = 10;
    public float        maxAngularVel = 10;
    public int          numSmallerAsteroidsToSpawn = 2;

    public Dictionary<string, int> Asteroids = new Dictionary<string, int>()
    {
            {"A", 0},
            {"B", 0},
            {"C", 0}
    };
}
