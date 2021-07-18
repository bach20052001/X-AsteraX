using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/SkillSO", fileName = "SkillSO.asset")]

public class Skill_SO : ScriptableObject
{
    public string SkillName;

    public Skills SkillIndex;

    public float countdownSkill;

    public int maxIncremental;
}
