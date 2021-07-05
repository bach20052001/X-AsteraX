using UnityEngine;

[CreateAssetMenu(menuName = "Scriptable Objects/SkillSO", fileName = "SkillSO.asset")]

public class Skill_SO : ScriptableObject
{
    public Skills skillIndex;

    public float countdownSkill;

    public int maxIncremental;
}
