using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public Animator[] animators;

    const string ANIMATORIN_TRIGGER = "Transition_IN";

    const string ANIMATOROUT_TRIGGER = "Transition_OUT";

    const float delay = 0.6f;

    public int SelectedIndex = 1;


    private void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        LoadAnimator();
    }

    public void NextScene()
    {
        StartCoroutine(PlayNext());
    }

    private IEnumerator PlayNext()
    {
        for (int i = 0; i < animators.Length; i++)
        {
            animators[i].SetTrigger(ANIMATOROUT_TRIGGER);
        }

        yield return new WaitForSeconds(delay);
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
    }

    private IEnumerator PlayPrev()
    {
        for (int i = 0; i < animators.Length; i++)
        {
            animators[i].SetTrigger(ANIMATOROUT_TRIGGER);
        }

        yield return new WaitForSeconds(delay);
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void PrevScene()
    {
        StartCoroutine(PlayPrev());
    }

    public void LoadAnimator()
    {
        animators = FindObjectsOfType<Animator>();
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

    public void Return()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void Play()
    {
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 2);
    }

    public List<Ship_SO> shipInfo = new List<Ship_SO>();
}

