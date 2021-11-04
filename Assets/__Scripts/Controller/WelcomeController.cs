using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WelcomeController : MonoBehaviour
{
    public Button StartGame;
    public Button Manage;
    public Button Exit;

    private SceneController sceneController;

    private void Awake()
    {
        sceneController = SceneController.Instance;

        if (sceneController != null)
        {
            sceneController.LoadAnimator();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        StartGame.onClick.AddListener(delegate {
            sceneController.Play();
        });
        Manage.onClick.AddListener(delegate {
            sceneController.NextScene();
        });
        Exit.onClick.AddListener(delegate {
            sceneController.QuitGame();
        });
    }
}
