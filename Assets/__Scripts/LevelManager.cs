using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    private static LevelManager instance;

    public bool breakPoint = false;
    public List<int> levelToFightBoss = new List<int>();

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

        if (levelToFightBoss.Contains(currentLevel))
        {
            breakPoint = true;
        }
        else
        {
            breakPoint = false;
        }

        if (level > asteroidsSOByLevel.Count - 1)
        {
            level = asteroidsSOByLevel.Count - 1;
        }

    }

    public void ResetLevel()
    {
        level = 0;
    }


    [Header("Set in Inspector")]
    [Tooltip("This sets the AsteroidsScriptableObject to be used throughout the game.")]
    public List<AsteroidsScriptableObject> asteroidsSOByLevel;

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
        level = 0;
        currentLevel = level + 1;

        levelToFightBoss.Clear();
        levelToFightBoss.Add(5);
        levelToFightBoss.Add(10);
    }
}
