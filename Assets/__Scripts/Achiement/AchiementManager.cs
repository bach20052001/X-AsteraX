using System.Collections.Generic;
using UnityEngine;

public class AchiementManager : MonoBehaviour
{
    private static AchiementManager instance;

    public static AchiementManager Instance
    {
        get
        {
            if (instance == null)
            {
                GameObject AchiementManager = Instantiate(new GameObject("AchievementController"));
                AchiementManager AM = AchiementManager.AddComponent<AchiementManager>();
                instance = AM;
            }
            return instance;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }

    public Dictionary<AchiementType, AchievementInfomation> achievements = new Dictionary<AchiementType, AchievementInfomation>();
    public Queue<AchievementInfomation> unlockAchievement = new Queue<AchievementInfomation>();

    private int numberOfPlayerFired = 0;
    private int numberOfHitAsteroid = 0;
    private int luckyShot = 0;

    private void Start()
    {
        achievements[AchiementType.EagleEye] = new AchievementInfomation("Eagle eye", "100 Lucky Shot", 1);
        achievements[AchiementType.TriggerHappy] = new AchievementInfomation("Trigger Happy", "1000 Shot Fired", 1000);
        achievements[AchiementType.FirstDust] = new AchievementInfomation("First Dust", "Shot your first Asteroid", 1);

        achievements[AchiementType.RookiePilot] = new AchievementInfomation("Rockie Pilot", "Score above 10000", 10000);
        achievements[AchiementType.LuckyShot] = new AchievementInfomation("Lucky Shot", "Bullet Wrapped Screen & Hit Asteroid", 1);
        achievements[AchiementType.SkillfulDodger] = new AchievementInfomation("Skillful Dodger", "Reach Level 5", 5);


        this.RegisterListener(GameEvent.OnPlayerFired, (param) => OnPlayerFiredHandler());
        this.RegisterListener(GameEvent.OnAsteroidDestroyed, (param) => OnHitAsteroidHandler(param));
        this.RegisterListener(GameEvent.OnNextLevel, (param) => OnNextLevelHandler());

        //InvokeRepeating(nameof(PostAchievement), 0f, 0.5f);

    }

    private void OnNextLevelHandler()
    {
        if (LevelManager.Instance.level + 1 == 5)
        {
            UnlockAchievement(AchiementType.SkillfulDodger);
        }
    }

    private void UnlockAchievement(AchiementType achiementType)
    {
        if (!achievements[achiementType].isUnlocked)
        {
            achievements[achiementType].isUnlocked = true;

            unlockAchievement.Enqueue(achievements[achiementType]);
        }

        PostAchievement();
    }

    private void PostAchievement()
    {
        if (unlockAchievement.Count > 0)
        {
            this.PostEvent(GameEvent.OnUnlockAchievement, unlockAchievement.Dequeue());
        }
    }

    private void OnPlayerFiredHandler()
    {
        numberOfPlayerFired++;

        if (numberOfPlayerFired == achievements[AchiementType.TriggerHappy].requiredToUnlock)
        {
            UnlockAchievement(AchiementType.TriggerHappy);
        }
    }

    private void OnHitAsteroidHandler(object obj)
    {
        numberOfHitAsteroid++;

        if (GUIController.Instance.GetScores() > 10000)
        {
            UnlockAchievement(AchiementType.RookiePilot);
        }

        if ((obj as Asteroid).bulletCollision.GetComponent<OffScreenWrapper>().IsBulletWrapped)
        {
            luckyShot++;
            UnlockAchievement(AchiementType.LuckyShot);
        }

        if (luckyShot == 100)
        {
            UnlockAchievement(AchiementType.EagleEye);
        }

        if (numberOfHitAsteroid == achievements[AchiementType.FirstDust].requiredToUnlock)
        {
            UnlockAchievement(AchiementType.FirstDust);
        }
    }
}
