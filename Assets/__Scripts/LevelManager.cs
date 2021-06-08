﻿using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    private static LevelManager instance;

    public static LevelManager Instance
    {
        get
        {
            if (instance == null)
            {
                GameObject LevelManagerObject = Instantiate(new GameObject("Level Manager"));
                LevelManager LM = LevelManagerObject.AddComponent<LevelManager>();
                instance = LM;
            }
            return instance;
        }
    }

    public static int level;

    public void IncreaseLevel()
    {
        level++;

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
        else if (instance != this)
        {
            Destroy(gameObject);
        }
        DontDestroyOnLoad(instance);
    }

    // Start is called before the first frame update
    void Start()
    {
        level = 0;
    }
}
