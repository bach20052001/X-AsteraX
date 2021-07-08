using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/LevelsSO", fileName = "LevelSO.asset")]

public class LevelScriptableObject : ScriptableObject
{
	public float        minVel = 5;
	public float        maxVel = 10;
    public float        maxAngularVel = 10;
    public int          numSmallerAsteroidsToSpawn = 2;

    public int NumOfAsteroidA;
    public int NumOfAsteroidB;
    public int NumOfAsteroidC;
}
