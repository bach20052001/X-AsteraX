using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;


public class PlayerSignalReation : MonoBehaviour
{
    public GameObject bullet;

    public GameObject direction;

    private Rigidbody rigid;

    public Vector3 offset;

    public CinemachineVirtualCamera camFocusBullet;
    // Start is called before the first frame update

    private void Start()
    {
        rigid = GetComponent<Rigidbody>();
    }

    public void Shoot()
    {
        GameObject bulletGene = Instantiate(bullet);
        bulletGene.transform.position = direction.transform.position;
        bulletGene.transform.forward = direction.transform.up;

        bulletGene.GetComponent<ShotBehavior>().InitVelo(25f);
        //Debug.Log("Shoot");
    }

    public void LastShootSignal()
    {
        GameObject bulletGene = Instantiate(bullet);
        bulletGene.transform.position = direction.transform.position;
        bulletGene.transform.forward = direction.transform.up;

        camFocusBullet.Follow = bulletGene.transform;
        camFocusBullet.LookAt = bulletGene.transform;

        bulletGene.GetComponent<ShotBehavior>().InitVelo(5f);

        camFocusBullet.GetCinemachineComponent<CinemachineTransposer>().m_FollowOffset = offset;

        //Time.timeScale = 0.2f;
    }

    public void GoAway()
    {
        rigid.velocity = transform.up * 100f;
    }
}
