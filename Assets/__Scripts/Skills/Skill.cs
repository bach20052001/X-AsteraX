using UnityEngine;

public class Skill : MonoBehaviour
{
    public Skill_SO skillData;

    public float countdownSkill;

    public int maxIncremental;

    public void Execute()
    {
        if (countdown == 0 || incremental > 0)
        {
            Active();
        }
    }

    public virtual void Active()
    {
        if (incremental > 0)
        {
            incremental--;
        }
        countdown = countdownSkill;
    }

    public int incremental = 1;

    public float countdown = 0;

    private void Update()
    {
        if (countdown > 0)
        {
            countdown -= Time.deltaTime;
        }
        else
        {
            if (incremental < maxIncremental)
            {
                countdown = countdownSkill;
                incremental++;
                if (incremental == maxIncremental)
                {
                    countdown = 0;
                }
            }
        }
    }
}
