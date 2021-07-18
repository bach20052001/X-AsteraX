using UnityEngine;

[System.Serializable]
public class SkillDataObject
{
    [Range(1, 4)]
    public int SkillIndex;

    public string SkillName;

    public float CountdownSkill;

    public int MaxIncremental;
}

[System.Serializable]
public class DataSkill
{
    public SkillDataObject[] data_skill;
}
