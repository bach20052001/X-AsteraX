using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters;
using System;
using UnityEngine;

public class Laser : MonoBehaviour
{
    public GameObject FirePoint;
    public float MaxLength;
    public GameObject PrefabLaser;

    private GameObject Instance;
    private EGA_Laser LaserScript;

    //Double-click protection
    private float buttonSaver = 0f;

    void Start ()
    {

    }

    void Update()
    {
        //Enable lazer
        if (Input.GetMouseButtonDown(0))
        {
            Destroy(Instance);
            Instance = Instantiate(PrefabLaser, FirePoint.transform.position, Quaternion.identity);
            Instance.transform.parent = transform;
            Instance.transform.forward = Vector3.down;
            LaserScript = Instance.GetComponent<EGA_Laser>();
        }

        //Disable lazer prefab
        if (Input.GetMouseButtonUp(0))
        {
            LaserScript.DisablePrepare();
            Destroy(Instance,1);
        }

        buttonSaver += Time.deltaTime;
    }
}
