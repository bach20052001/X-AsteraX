﻿using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class GUIController : MonoBehaviour
{

    [SerializeField] private Animator popupAchievement;
    [SerializeField] private GameObject nextLevelPopup;

    [SerializeField] private GameObject congratulationPopup;

    private static GUIController instance;
    [SerializeField] private Text score;


    [HideInInspector] public Skill skill;
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
    [SerializeField] private GameObject HealthPanel;
    [SerializeField] private GameObject SkillPanel;

    [SerializeField] private GameObject PausePanel;


    [SerializeField] private Text cdSkill;
    [SerializeField] private Text remain;

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
        this.RegisterListener(Event.OnPlayerDamaged, (param) => OnPlayerDamagedHandler(param));
        this.RegisterListener(Event.OnActiveSkill, (param) => OnActiveSkillHandler(param));
        this.RegisterListener(Event.Pause, (param) => OnPause());

        skill = FindObjectOfType<Skill>();

        cdSkill.text = ((int)skill.countdown).ToString();
        remain.text = (skill.incremental).ToString();

        StartCoroutine(UpdateSkillUI());
    }



    private void OnPause()
    {
        PausePanel.GetComponent<Animator>().SetTrigger("Pause");

    }

    public void ResumeGame()
    {
        PausePanel.GetComponent<Animator>().SetTrigger("Resume");
    }

    IEnumerator UpdateSkillUI()
    {
        while (true)
        {
            cdSkill.text = ((int)skill.countdown).ToString();
            remain.text = (skill.incremental).ToString();

            yield return new WaitForSeconds(1);
        }
    }

    private void OnActiveSkillHandler(object param)
    {
        float time = (float)param;
        float maxTime = (float)param;

        SkillPanel.SetActive(true);


        StartCoroutine(countdownSkillDuration(time, maxTime));
    }

    IEnumerator countdownSkillDuration(float time, float maxTime)
    {
        while (time > 0)
        {
            time -= Time.deltaTime;
            yield return new WaitForEndOfFrame();
            SkillPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = time/maxTime;
        }

        SkillPanel.SetActive(false);
    }

    private void OnPlayerDamagedHandler(object param)
    {
        float currentHP = (float)param;

        HealthPanel.GetComponent<Animator>().SetTrigger("Damaged");
        HealthPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = currentHP;
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
