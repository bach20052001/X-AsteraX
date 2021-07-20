using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    private static LevelManager instance;

    public bool breakPoint = false;

    public int bossType;

    public static LevelManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<LevelManager>();
            }
            return instance;
        }
    }

    public int level;
    public int currentLevel;


    public void IncreaseLevel()
    {
        level++;
        currentLevel++;

        if (LevelScriptableObject[level].HasBoss)
        {
            breakPoint = true;
            bossType = LevelScriptableObject[level].BossType;
        }
        else
        {
            breakPoint = false;
        }

        if (level > LevelScriptableObject.Count - 1)
        {
            level = LevelScriptableObject.Count - 1;
        }

    }

    public void ResetLevel()
    {
        level = 0;
        currentLevel = level + 1;
        breakPoint = false;
    }


    [Header("Set in Inspector")]
    [Tooltip("This sets the AsteroidsScriptableObject to be used throughout the game.")]
    public List<LevelScriptableObject> LevelScriptableObject;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        if (this != instance)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(instance);
    }

    // Start is called before the first frame update
    void Start()
    {
        ResetLevel();
    }
}
