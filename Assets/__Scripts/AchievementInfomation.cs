
public class AchievementInfomation
{
    public string displayName;

    public int requiredToUnlock;

    public string descriptionAchievement;

    public bool isUnlocked;

    #region Constructor
    public AchievementInfomation(string displayName, string descriptionAchievement,int requiredToUnlock)
    {
        this.displayName = displayName;
        this.descriptionAchievement = descriptionAchievement;
        this.requiredToUnlock = requiredToUnlock;
        this.isUnlocked = false;
    }
    #endregion

    public string GetName()
    {
        return displayName;
    }

    public string GetDescripsion()
    {
        return descriptionAchievement;
    }

    public override string ToString()
    {
        return displayName + "\n" + descriptionAchievement;
    }
}
