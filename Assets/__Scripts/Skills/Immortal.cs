using System.Collections;
using UnityEngine;

public class Immortal : Skill
{
    public float timeInterval;
    private PlayerShip player;
    public bool isImmortal;

    public MeshRenderer shipBody;
    private Material[] materials;

    private Color32 EffectColor = new Color32(255, 96, 96, 255);

    private void Start()
    {
        isImmortal = false;

        player = GetComponent<PlayerShip>();

        shipBody = player.transform.GetChild(0).GetComponent<MeshRenderer>();
        materials = shipBody.materials;

        timeInterval = 5f;
    }

    public override void Active()
    {
        ImmortalActive();
        base.Active();
    }

    private void ImmortalActive()
    {
        this.PostEvent(GameEvent.OnActiveSkill, timeInterval);

        StartCoroutine(Trigger());
    }

    IEnumerator Trigger()
    {
        for (int i = 0; i < materials.Length; i++)
        {
            materials[i].color = EffectColor;
        }

        isImmortal = true;

        player.ImmortalSetting(false);

        yield return new WaitForSeconds(timeInterval);

        player.ImmortalSetting(true);

        isImmortal = false;

        for (int i = 0; i < materials.Length; i++)
        {
            materials[i].color = Color.white;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Magnetic")
        {
            other.GetComponent<Magnetic>().enabled = false;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Magnetic")
        {
            other.GetComponent<Magnetic>().enabled = true;
        }
    }
}
