using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AttackMode
{
    Shoot,
    Laser,
}

public class SuperBoss : MonoBehaviour
{
    public GameObject bullet;

    private int HP;
    private int currentHP;

    public GameObject coreEnergy;
    public ParticleSystem energy;

    private PlayerShip player;
    public float speed;

    private Renderer energyMat;

    public Vector3 startPosition;

    private byte dfRed;
    private byte dfBlue;
    private byte dfGreen;

    // Start is called before the first frame update
    [System.Obsolete]
    void Start()
    {
        HP = 250;
        currentHP = 250;
        speed = 5f;
        player = FindObjectOfType<PlayerShip>();
        startPosition = new Vector3(0, 4, 0);
        MoveToFightPosition();
        energyMat = coreEnergy.GetComponent<Renderer>();

        dfRed = (byte)(energy.startColor.r * 255);
        dfGreen = (byte)(energy.startColor.g * 255);
        dfBlue = (byte)(energy.startColor.b * 255);

    }
    private void MoveToFightPosition()
    {
        StartCoroutine(MoveDown());
    }

    IEnumerator MoveDown()
    {
        player.TransitionModeControl(Mode.Animation);

        this.transform.position = startPosition;

        player.TransitionModeControl(Mode.FightingBoss);
        yield break;
    }

    [System.Obsolete]
    private void DecreaseEnergy(int rate)
    {
        energyMat.material.color = new Color32((byte)rate, (byte)rate, (byte)rate, 1);
        energy.startColor = new Color32(dfRed, dfGreen, dfBlue, (byte)rate);
    }

    [System.Obsolete]
    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag.Equals("Bullet"))
        {
            currentHP--;

            this.PostEvent(Event.OnEnemyDamaged, (float)currentHP / HP);

            DecreaseEnergy((int)255 * currentHP / HP);

            if (currentHP <= 0)
            {
                Destroy(gameObject, 2f);
            }

            Instantiate(AsteraX.S.explosion, collision.contacts[0].point, Quaternion.identity);

            Destroy(collision.gameObject);
        }
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedBoss);
    }
}
