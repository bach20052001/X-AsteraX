using UnityEngine;
using Cinemachine;
using UnityEngine.Rendering.PostProcessing;
using System.Collections.Generic;

public class PlayerSignalReation : MonoBehaviour
{
    public List<GameObject> listShips;

    private GameObject playerShip;

    [SerializeField] private GameObject bullet;

    public GameObject direction;

    private Rigidbody rigid;

    public Vector3 offset;

    public GameObject portal;

    public CinemachineVirtualCamera camFocusBullet;
    public CinemachineVirtualCamera camFocusShip;

    private float distance;

    public PostProcessVolume m_Volume;

    private float currentDistance;
    private AutoExposure m_AutoExposure;

    public AudioSource audioSource;

    public AudioClip audio_sonicboom;

    public AudioClip audio_shoot;

    public ReturnToLoadLevel manage;

    private void Awake()
    {
        if (bullet == null)
        {
            bullet = LoadDatabase.Instance.playershipShotCinematic;
        }

        if (SceneController.Instance != null)
        {
            playerShip = listShips[SceneController.Instance.SelectedIndex];
        }
        else
        {
            playerShip = listShips[Random.Range(0, listShips.Count)];
        }

        Instantiate(playerShip, this.transform);
    }

    private void Start()
    {
        distance = Vector3.Distance(portal.transform.position ,this.transform.position) / 6f;
        rigid = GetComponent<Rigidbody>();
    }

    public void Shoot()
    {
        m_Volume.profile.TryGetSettings<AutoExposure>(out m_AutoExposure);

        GameObject bulletGene = Instantiate(bullet);
        bulletGene.transform.position = direction.transform.position;
        bulletGene.transform.forward = direction.transform.up;

        bulletGene.GetComponent<ShotBehavior>().InitVelo(25f);

        audioSource.PlayOneShot(audio_shoot);

        Debug.Log("ShootBoss");
    }

    public void LastShootSignal()
    {
        GameObject bulletGene = Instantiate(bullet);
        bulletGene.SetActive(true);
        bulletGene.transform.position = direction.transform.position;
        bulletGene.transform.forward = direction.transform.up;

        camFocusBullet.Follow = bulletGene.transform;
        camFocusBullet.LookAt = bulletGene.transform;

        bulletGene.GetComponent<ShotBehavior>().InitVelo(5f);

        camFocusBullet.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset = offset;

        audioSource.PlayOneShot(audio_shoot);

        Debug.Log("LastShoot");
    }

    private void Update()
    {
        if (currentDistance < distance && currentDistance != 0 && m_AutoExposure != null)
        {
            m_AutoExposure.maxLuminance.value = Mathf.Clamp(-12f * (distance - currentDistance) / distance, -9, 0);
        }

        currentDistance = Vector3.Distance(portal.transform.position, this.transform.position);

        if (currentDistance < 5f)
        {
            Stop();
        }
    }

    public void GoAway()
    {
        rigid.velocity = transform.up * 100f;

        audioSource.PlayOneShot(audio_sonicboom);
    }

    public void Stop()
    {
        manage.ChangeSkyBox();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EnemyShip"))
        {
            BossSignalReaction bsr = other.GetComponent<BossSignalReaction>();

            bsr.BossDestroy();
        }
    }
}
