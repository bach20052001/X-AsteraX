using System.Collections;
using System.Collections.Generic;
using UnityEditor;
#if UNITY_EDITOR
using UnityEditor.SceneManagement;
#endif
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public int currentScene;

    public DownloadData data;

    public List<string> scenePaths = new List<string>();

    public Animator[] animators;

    private PlayerData playerData;

    private static SceneController instance;

    public static SceneController Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<SceneController>();
            }
            return instance;
        }
    }

    const string ANIMATOROUT_TRIGGER = "Transition_OUT";

    const float delay = 0.6f;

    public int SelectedIndex = -1;

    private void Awake()
    {
        currentScene = -1;
        SelectedIndex = -1;

        if (instance == null)
        {
            instance = this;
        }

        if (this != instance)
        {
            Destroy(this.gameObject);
        }
    }

    private void Start()
    {
        SaveDataManager.Instance.LoadDataPersistent();

        if (SaveDataManager.Instance.playerData == null)
        {
            SaveDataManager.Instance.playerData = new PlayerData();
        }

        playerData = SaveDataManager.Instance.playerData;

        SelectedIndex = playerData.selectedIndex;

        DontDestroyOnLoad(this.gameObject);
    }

    public void NextScene()
    {
        StartCoroutine(PlayNext());
    }

    public void Load(int order)
    {
#if UNITY_EDITOR
        EditorSceneManager.LoadSceneAsyncInPlayMode(LoadDatabase.Instance.sceneAssetPath[order], new LoadSceneParameters() { loadSceneMode = LoadSceneMode.Single });
#else
        SceneManager.LoadSceneAsync(scenePaths[order]);
#endif
    }

    public void NextSceneWithoutAnimate()
    {
        StartCoroutine(PlayNextWithoutAni());
    }

    private IEnumerator PlayNextWithoutAni()
    {
        yield return new WaitForSeconds(delay);
        NextSceneAB();
    }

    private IEnumerator PlayNext()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        NextSceneAB();
    }

    public void NextSceneAB()
    {
        if (currentScene + 1 < scenePaths.Count)
        {
            currentScene++;
            Load(currentScene);
        }
    }

    private IEnumerator PlayPrev()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        if (currentScene - 1 >= 0)
        {
            currentScene--;
            Load(currentScene);
        }
    }

    public void PrevScene()
    {
        StartCoroutine(PlayPrev());
    }

    public void LoadAnimator()
    {
        animators = FindObjectsOfType<Animator>();
    }

    private void ActiveAnimator()
    {
        for (int i = 0; i < animators.Length; i++)
        {
            animators[i].SetTrigger(ANIMATOROUT_TRIGGER);
        }
    }

    public void QuitGame()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#elif UNITY_WEBPLAYER
         Application.OpenURL(webplayerQuitURL);
#else
         Application.Quit();
#endif
    }

    public void QuitToWelcome()
    {
        if (currentScene - 2 >= 0)
        {
            currentScene -= 2;
            Load(currentScene);
        }
    }

    public void Return()
    {
        if (currentScene - 1 >= 0)
        {
            currentScene--;
            Load(currentScene);
        }
    }

    public void ReturnToExistScene()
    {
        currentScene--;
        Load(currentScene);
    }

    public void Play()
    {
        if (SelectedIndex == -1)
        {
            GameObject noti = GameObject.Find("Noti_Select");
            noti.GetComponent<CanvasGroup>().alpha = 1;
        }
        else
        {
            if (currentScene + 2 < scenePaths.Count)
            {
                currentScene += 2;
                Load(currentScene);
            }
        }
    }

    public List<Ship_SO> shipInfo = new List<Ship_SO>();
}

