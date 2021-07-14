using System.Collections;
using UnityEngine;

public class MachineGun : Skill
{
    private float time;
    private float fireRate = 0.05f;
    private PlayerShip player;
    private void Start()
    {
        countdownSkill = 60f;
        isIncremental = false;
        maxIncremental = 1;

        player = GetComponent<PlayerShip>();

        time = 2f;
    }

    public override void Active()
    {
        Shoot();
        base.Active();
    }

    private void Shoot()
    {
        this.PostEvent(Event.OnActiveSkill, time);

        StartCoroutine(ShootAutomation(time));
    }

    IEnumerator ShootAutomation(float time)
    {
        float timeInterval = time;
        while (timeInterval > 0)
        {
            timeInterval -= fireRate;
            yield return new WaitForSeconds(fireRate);
            player.Fire(player.modeControl);
        }
    }
}
