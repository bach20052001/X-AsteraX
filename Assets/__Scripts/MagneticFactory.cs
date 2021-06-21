using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagneticFactory : MonoBehaviour
{
    public PlayerShip player;

    public Rigidbody rb;

    public float originalSpeed = 10;

    public float speedInMagneticField;

    public Color32 originalColor;

    public Color32 colorInMagneticField;

    public MeshRenderer shipBody;

    public SceneController sceneController;

    public GameObject Magnetic;

    public float force;


    private void Awake()
    {
        player = FindObjectOfType<PlayerShip>();
        rb = player.GetComponent<Rigidbody>();

        shipBody = player.gameObject.GetComponentInChildren<MeshRenderer>();

        originalColor = shipBody.material.color;

        sceneController = GetComponent<SceneController>();

        if (sceneController != null)
        {
            originalSpeed = sceneController.shipInfo[sceneController.SelectedIndex].speed * 12.5f / 5f;
        }
    }

    public GameObject CreateMagnetic()
    {
        GameObject magnetic = Instantiate(Magnetic);

        magnetic.GetComponent<Magnetic>().Promote(player, rb, originalSpeed, speedInMagneticField, originalColor ,colorInMagneticField, shipBody, force);

        return magnetic;
    }
}
