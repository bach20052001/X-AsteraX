using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public List<string> listSceneNames = new List<string>();

    private int currentIndexScene = -1;

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
        //if (SaveDataManager.Instance.playerData == null)
        //{
        //    SaveDataManager.Instance.playerData = new PlayerData();
        //}

        //playerData = SaveDataManager.Instance.playerData;

        //SelectedIndex = playerData.selectedIndex;

        DontDestroyOnLoad(this.gameObject);
    }

    public void NextScene()
    {
        StartCoroutine(PlayNext());
    }

    public void NextSceneWithoutAnimate()
    {
        StartCoroutine(PlayNextWithoutAni());
    }

    private IEnumerator LoadScene(int index)
    {
        if (index < listSceneNames.Count && index >= 0)
        {
            AsyncOperationHandle<SceneInstance> handle = Addressables.LoadSceneAsync(listSceneNames[index], LoadSceneMode.Single, false);

            yield return handle;

            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                yield return handle.Result.ActivateAsync();
                currentIndexScene = index;
            }
        }
    }

    private IEnumerator PlayNextWithoutAni()
    {
        yield return new WaitForSeconds(delay);
        StartCoroutine(LoadScene(currentIndexScene + 1));
    }

    private IEnumerator PlayNext()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        StartCoroutine(LoadScene(currentIndexScene + 1));
    }


    private IEnumerator PlayPrev()
    {
        ActiveAnimator();
        yield return new WaitForSeconds(delay);
        StartCoroutine(LoadScene(currentIndexScene - 1));
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
        StartCoroutine(LoadScene(currentIndexScene - 2));
    }

    public void Return()
    {
        StartCoroutine(LoadScene(currentIndexScene - 1));
    }

    public void ReturnToExistScene()
    {
        StartCoroutine(LoadScene(currentIndexScene - 1));
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
            StartCoroutine(LoadScene(currentIndexScene + 2));
        }
    }

    public List<Ship_SO> shipInfo = new List<Ship_SO>();


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.U))
        {
            NextScene();
        }
    }
}

