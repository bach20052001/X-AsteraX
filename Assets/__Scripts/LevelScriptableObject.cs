using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/LevelsSO", fileName = "LevelSO.asset")]

public class LevelScriptableObject : ScriptableObject
{
    public int numberOfAsteroid;
	public float        minVel = 5;
	public float        maxVel = 10;
    public float        maxAngularVel = 10;
	public int          initialSize = 3;
    public int          numSmallerAsteroidsToSpawn = 2;
}
