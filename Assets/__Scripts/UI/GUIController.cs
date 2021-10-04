﻿using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class GUIController : MonoBehaviour
{

    [SerializeField] private Animator popupAchievement;
    [SerializeField] private GameObject nextLevelPopup;
    public int levelShowToUI;
    [SerializeField] private GameObject congratulationPopup;

    private static GUIController instance;
    [SerializeField] private Text score;
    [SerializeField] private int scores;


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

    [SerializeField] private GameObject EnemyPanel;

    private void LoadScore()
    {
        scores = SaveDataManager.Instance.playerData.point;
        scoreText.text = scores.ToString();
    }

    private void Awake()
    {
        this.RegisterListener(GameEvent.OnUnlockAchievement, (param) => UnlockAchievementHandler(param as AchievementInfomation));
        this.RegisterListener(GameEvent.OnNextLevel, (param) => OnNextLevelHandler());
        this.RegisterListener(GameEvent.OnLoadMainScene, (param) => OnLoadMainSceneHandler());
        this.RegisterListener(GameEvent.OnPlayerDamaged, (param) => OnPlayerDamagedHandler(param));
        this.RegisterListener(GameEvent.OnEnemyDamaged, (param) => OnEnemyDamagedHandler(param));
        this.RegisterListener(GameEvent.OnActiveSkill, (param) => OnActiveSkillHandler(param));
        this.RegisterListener(GameEvent.Pause, (param) => OnPause());
        this.RegisterListener(GameEvent.FightBoss, (param) => OnFightBossHandler());
        this.RegisterListener(GameEvent.OnDestroyedMiniBoss, (param) => OnDestroyedBossHandler(param));
        this.RegisterListener(GameEvent.OnDestroyedSuperBoss, (param) => OnDestroyedSuperBossHandler(param));
        this.RegisterListener(GameEvent.OnAsteroidDestroyed, (param) => OnHitAsteroidHandler(param));
        this.RegisterListener(GameEvent.OnDestroyedEnemy, (param) => OnDestroyedEnemyHandler(param));
    }

    void Start()
    {
        LoadScore();

        UpdateJumpRemaining(AsteraX.jumpRemaining);

        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }

        skill = FindObjectOfType<Skill>();

        cdSkill.text = ((int)skill.countdown).ToString();
        remain.text = (skill.incremental).ToString();

        StartCoroutine(UpdateSkillUI());
    }

    private void OnLoadMainSceneHandler()
    {
        StartCoroutine(NotiLevelLoadMain());
    }

    private void OnDestroyedSuperBossHandler(object scoreFromBoss)
    {
        int scoreToIncrease = (int)scoreFromBoss;
        scores += scoreToIncrease;
        UpdateScore(scores);

        SaveDataManager.Instance.playerData.point = scores;

        SaveDataManager.Instance.ExportData();

        EnemyPanel.SetActive(false);
        EnemyPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = 1;
    }

    private void OnDestroyedEnemyHandler(object scoreFromEnemy)
    {
        int scoreToIncrease = (int)scoreFromEnemy;
        scores += scoreToIncrease;
        UpdateScore(scores);
    }

    public int GetScores()
    {
        return scores;
    }

    private void OnHitAsteroidHandler(object scoreFromAsteroid)
    {
        int scoreToIncrease = (scoreFromAsteroid as Asteroid).Score;
        scores += scoreToIncrease;
        UpdateScore(scores);
    }

    private void OnDestroyedBossHandler(object scoreFromBoss)
    {
        int scoreToIncrease = (int)scoreFromBoss;
        scores += scoreToIncrease;
        UpdateScore(scores);

        EnemyPanel.SetActive(false);
        EnemyPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = 1;
    }

    private void OnFightBossHandler()
    {
        EnemyPanel.SetActive(true);
        EnemyPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = 1;
    }

    private void OnPause()
    {
        StartCoroutine(ShowPausePanel());

    }

    private IEnumerator ShowPausePanel()
    {
        PausePanel.SetActive(true);

        yield return new WaitForEndOfFrame();

        PausePanel.GetComponent<Animator>().SetTrigger("Pause");
    }

    public void ResumeGame()
    {
        StartCoroutine(ClosePausePanel());
    }

    private IEnumerator ClosePausePanel()
    {
        PausePanel.GetComponent<Animator>().SetTrigger("Resume");

        yield return new WaitForSeconds(0.3f);

        PausePanel.SetActive(false);
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


        StartCoroutine(CountdownSkillDuration(time, maxTime));
    }

    IEnumerator CountdownSkillDuration(float time, float maxTime)
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
        float rate = (float)param;

        HealthPanel.GetComponent<Animator>().SetTrigger("Damaged");
        HealthPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = rate;
    }

    private void OnEnemyDamagedHandler(object param)
    {
        float rate = (float)param;
        EnemyPanel.transform.GetChild(1).GetComponent<Image>().fillAmount = rate;
    }

    private IEnumerator ShowNotiLevel()
    {
        congratulationPopup.SetActive(true);
        congratulationPopup.GetComponent<Animator>().SetBool("isOn", true);
        yield return new WaitForSeconds(1f);
        congratulationPopup.GetComponent<Animator>().SetBool("isOn", false);
        yield return new WaitForSeconds(1f);
        congratulationPopup.SetActive(false);

        nextLevelPopup.SetActive(true);
        nextLevelPopup.GetComponentInChildren<Text>().text = "Level " + (LevelManager.Instance.currentLevel).ToString();
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", true);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", false);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.SetActive(false);
    }

    private IEnumerator NotiLevelLoadMain()
    {
        nextLevelPopup.SetActive(true);
        nextLevelPopup.GetComponentInChildren<Text>().text = "Level " + (LevelManager.Instance.currentLevel).ToString();
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", true);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.GetComponent<Animator>().SetBool("transitionLevel", false);
        yield return new WaitForSeconds(1f);
        nextLevelPopup.SetActive(false);
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
        popupAchievement.gameObject.SetActive(true);
        popupAchievement.SetBool("isUnlock", false);

        yield return new WaitForEndOfFrame();

        popupAchievement.gameObject.GetComponentInChildren<Text>().text = achievement.displayName + "\n" + achievement.descriptionAchievement;
        popupAchievement.SetBool("isUnlock", true);

        yield return new WaitForSeconds(1.5f);

        popupAchievement.SetBool("isUnlock", false);

        yield return new WaitForSeconds(0.75f);

        popupAchievement.gameObject.SetActive(false);

    }

    public void LoadScore(int score)
    {
        scores = score;
        UpdateScore(scores);
    }

    public void UpdateScore(int score)
    {
        SaveDataManager.Instance.playerData.point = score;
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
