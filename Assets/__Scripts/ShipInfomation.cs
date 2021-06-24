using System.Collections.Generic;
using UnityEngine;
using DanielLochner.Assets.SimpleScrollSnap;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShipInfomation : MonoBehaviour
{
    public Text shipName;

    public Text shipName_des;

    public Text description;

    public GameObject foregroundHealth;

    public GameObject bullets;

    public GameObject foregroundSpeed;

    public Text AbilityText;

    public Color32 bulletColor;

    public SimpleScrollSnap scroll;

    public List<Ship_SO> ships;

    private SceneController sceneController;




    private void Start()
    {
        LoadInfomation();
    }

    public void LoadInfomation()
    {

        int index = scroll.currentPanel;

        Ship_SO ship_ = ships[index];

        shipName.text = ship_.shipName;
        shipName_des.text = ship_.shipName;
        description.text = ship_.description;

        ResetInfomation();

        for (int i = 0; i < ship_.HP; i++)
        {
            foregroundHealth.transform.GetChild(i).gameObject.SetActive(true);
        }

        for (int i = 0; i < ship_.speed; i++)
        {
            foregroundSpeed.transform.GetChild(i).gameObject.SetActive(true);
        }

        for (int i = 0; i < ship_.attack; i++)
        {
            bullets.transform.GetChild(i).GetComponent<Image>().color = bulletColor;
        }

        AbilityText.text = ship_.skill;


        sceneController = FindObjectOfType<SceneController>();

        if (sceneController != null)
        {
            sceneController.LoadAnimator();
        }
    }

    private void ResetInfomation()
    {
        for (int i = 0; i < foregroundHealth.transform.childCount; i++)
        {
            foregroundHealth.transform.GetChild(i).gameObject.SetActive(false);
        }

        for (int i = 0; i < foregroundSpeed.transform.childCount; i++)
        {
            foregroundSpeed.transform.GetChild(i).gameObject.SetActive(false);
        }

        for (int i = 0; i < bullets.transform.childCount; i++)
        {
            bullets.transform.GetChild(i).GetComponent<Image>().color = Color.white;
        }
    }

    public void PreviousScene()
    {
        if (sceneController != null)
        {
            sceneController.PrevScene();
        }
    }

    public void NextScene()
    {
        if (SceneManager.GetActiveScene().name == "Manage")
        {
            if (sceneController != null)
            {
                sceneController.SelectedIndex = scroll.currentPanel;
            }
        }

        sceneController.NextScene();
    }
}
