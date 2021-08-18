using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossSignalReaction : MonoBehaviour
{
    public List<GameObject> ListGun = new List<GameObject>();

    public GameObject bullet;
    // Start is called before the first frame update

    public void ShootPlayer()
    {
        for (int i = 0; i < ListGun.Count; i++)
        {
            GameObject bulletGene = Instantiate(bullet);
            bulletGene.transform.position = ListGun[i].transform.position;
            bulletGene.transform.forward = ListGun[i].transform.up;

            bulletGene.GetComponent<ShotBehavior>().InitVelo(25f);
        }
    }
}
