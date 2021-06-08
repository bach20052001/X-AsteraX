using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GUIController : MonoBehaviour
{

    [SerializeField] private Animator popupAchievement;
    [SerializeField] private GameObject nextLevelPopup;

    [SerializeField] private GameObject congratulationPopup;

    private static GUIController instance;
    [SerializeField] private Text score;

    public static GUIController Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<GUIController>();
            }
            return instance;
        }
    }

    [SerializeField] private Text scoreText;
    [SerializeField] private Text jumpRemainingText;
    [SerializeField] private GameObject GameOverPanel;


    // Start is called before the first frame update
    void Start()
    {
        UpdateScore(AsteraX.score);

        UpdateJumpRemaining(AsteraX.jumpRemaining);

        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }

        this.RegisterListener(Event.OnUnlockAchievement, (param) => UnlockAchievementHandler(param as AchievementInfomation));
        this.RegisterListener(Event.OnNextLevel, (param) => OnNextLevelHandler());
    }

    private IEnumerator ShowNotiLevel()
    {
        congratulationPopup.GetComponent<Animator>().SetBool("isOn", true);
        yield return new WaitForSeconds(1f);
        congratulationPopup.GetComponent<Animator>().SetBool("isOn", false);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.gameObject.GetComponentInChildren<Text>().text = "Level " + (LevelManager.level + 1).ToString();
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", true);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", false);
    }

    private void OnNextLevelHandler()
    {
        StartCoroutine(ShowNotiLevel());
    }

    private void UnlockAchievementHandler(AchievementInfomation achievement)
    {
        
        StartCoroutine(ClosePopup(achievement));
    }

    IEnumerator ClosePopup(AchievementInfomation achievement)
    {
        popupAchievement.SetBool("isUnlock", false);
        yield return new WaitForSeconds(0.5f);
        popupAchievement.gameObject.GetComponentInChildren<Text>().text = achievement.displayName + "\n" + achievement.descriptionAchievement;
        popupAchievement.SetBool("isUnlock", true);
        yield return new WaitForSeconds(1.5f);
        popupAchievement.SetBool("isUnlock", false);
    }

    public void UpdateScore(int score)
    {
        scoreText.text = score.ToString();
    }

    public void UpdateJumpRemaining(int jumpRemaining)
    {
        jumpRemainingText.text = jumpRemaining.ToString() + " Jumps";
    }

    public void ShowGameOver()
    {
        GameOverPanel.SetActive(true);
        score.text = scoreText.text;
    }
}
