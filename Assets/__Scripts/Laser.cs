﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    public GameObject FirePoint;
    [SerializeField] private float MaxLength;
    public GameObject PrefabLaser;

    private GameObject Instance;
    private EGA_Laser LaserScript;

    private RaycastHit hit;
    private int layer;

    Vector3 rightDirection;
    Vector3 leftDirection;
    Vector3 targetDirection;
    Vector3 midDirection;

    List<Vector3> listDirect = new List<Vector3>();

    void OnEnable()
    {
        Destroy(Instance);
        Instance = Instantiate(PrefabLaser, FirePoint.transform.position, Quaternion.identity);
        Instance.transform.parent = transform;
        Instance.transform.forward = Vector3.down;
        LaserScript = Instance.GetComponent<EGA_Laser>();

        StartCoroutine(ChangeDirection());
    }

    private void Start()
    {
        layer = LayerMask.GetMask("PlayerShip");
        rightDirection = Vector3.right + Vector3.down;
        leftDirection = -Vector3.right + Vector3.down;
        midDirection = Vector3.down;


        listDirect.Add(rightDirection);
        listDirect.Add(leftDirection);
        listDirect.Add(midDirection);

        targetDirection = midDirection;
    }

    IEnumerator ChangeDirection()
    {
        while (true)
        {
            yield return new WaitForSeconds(3);
            targetDirection = listDirect[Random.Range(0, listDirect.Count)];
        }
    }

    void OnDisable()
    {
        StopCoroutine(ChangeDirection());
        LaserScript.DisablePrepare();
        Destroy(Instance, 1);
    }

    private void Update()
    {
        if (Physics.Raycast(Instance.transform.position, Instance.transform.forward, out hit, 20f, layer))
        {
            PlayerShip player = hit.collider.gameObject.GetComponent<PlayerShip>();
            player.Damaged();
        }

        Vector3 newDirection = Vector3.RotateTowards(Instance.transform.forward, targetDirection, Time.deltaTime, 0.0f);

        Instance.transform.rotation = Quaternion.LookRotation(newDirection);
    }
}
