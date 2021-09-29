using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class BossSignalReaction : MonoBehaviour
{
    public List<GameObject> ListGun = new List<GameObject>();

    public CinemachineVirtualCamera bossVTCam;

    public GameObject bullet;

    public GameObject spark;

    public GameObject explosion;

    public GameObject fire;

    public AudioSource audioSource;

    public AudioClip audio_explosion;

    public AudioClip audio_shoot;

    private void Awake()
    {
        if (bullet == null)
        {
            bullet = LoadDatabase.Instance.enemyShotCinematic;
        }
    }

    public void Start()
    {
        Debug.Log(ListGun.Count);
    }

    public void ShootPlayer()
    {
        for (int i = 0; i < ListGun.Count; i++)
        {
            GameObject bulletGene = Instantiate(bullet);
            bulletGene.transform.position = ListGun[i].transform.position;
            bulletGene.transform.forward = ListGun[i].transform.up;

            bulletGene.GetComponent<ShotBehavior>().InitVelo(30f);

            StartCoroutine(DestroySelf(bulletGene));
        }

        Debug.Log("ShootPlayer");
        audioSource.PlayOneShot(audio_shoot);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Bullet"))
        {
            Instantiate(spark, collision.GetContact(0).point , Quaternion.identity);

            Destroy(collision.gameObject);
        }
    }

    public void BossExplosion()
    {
        bossVTCam.GetComponent<ShakeCamera>().StartShake();
        audioSource.PlayOneShot(audio_explosion);
        Debug.Log("BossExplosion");
    }

    IEnumerator DestroySelf(GameObject target)
    {
        yield return new WaitForSeconds(2);
        Destroy(target);
    }

    public void BossDestroy()
    {
        audioSource.PlayOneShot(audio_explosion);
        explosion.SetActive(true);
        fire.SetActive(true);
    }
}
