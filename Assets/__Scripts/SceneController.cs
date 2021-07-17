using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
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

    private IEnumerator PlayNext()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        if (SceneManager.GetActiveScene().buildIndex + 1 < SceneManager.sceneCountInBuildSettings)
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }

    private IEnumerator PlayPrev()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        if (SceneManager.GetActiveScene().buildIndex - 1 >= 0)
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 1);
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
        if (SceneManager.GetActiveScene().buildIndex - 2 >= 0)
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 2);
        }
    }

    public void Return()
    {
        if (SceneManager.GetActiveScene().buildIndex - 1 >= 0)
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 1);
        }
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
            if (SceneManager.GetActiveScene().buildIndex + 2 < SceneManager.sceneCountInBuildSettings)
            {
                SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 2);
            }
        }
    }

    public List<Ship_SO> shipInfo = new List<Ship_SO>();
}

