using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartGame : MonoBehaviour
{
    [SerializeField] private Animator Gate;
    // Start is called before the first frame update
    public void NextScene()
    {
        StartCoroutine(Play());
    }

    private IEnumerator Play()
    {
        Gate.SetBool("isClose", true);
        yield return new WaitForSeconds(1);
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
