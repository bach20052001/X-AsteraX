using System.Collections;
using UnityEngine;

public class Invisible : Skill
{
    public float timeInterval;
    private BoxCollider player;

    private void Start()
    {
        player = GetComponent<BoxCollider>();

        timeInterval = 5f;
    }

    public override void Active()
    {
        InvisibleActive();
        base.Active();
    }

    private void InvisibleActive()
    {
        this.PostEvent(GameEvent.OnActiveSkill, timeInterval);

        StartCoroutine(Trigger());
    }

    IEnumerator Trigger()
    {
        if (player != null)
        {
            player.isTrigger = true;
        }
        yield return new WaitForSeconds(timeInterval);

        if (player != null)
        {
            player.isTrigger = false;
        }
    }
}
