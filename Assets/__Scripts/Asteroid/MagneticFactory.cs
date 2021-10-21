using UnityEngine;
using UnityEngine.AddressableAssets;

public class MagneticFactory : MonoBehaviour
{
    private static MagneticFactory instance;

    public static MagneticFactory Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<MagneticFactory>();
            }
            return instance;
        }
    }

    public PlayerShip player;

    public Rigidbody rb;

    [HideInInspector] public float originalSpeed = 10f;

    [HideInInspector] public float speedInMagneticField = 5f;

    public Color32 originalColor;

    public Color32 colorInMagneticField;

    public MeshRenderer shipBody;

    private SceneController sceneController;

    public GameObject Magnetic;

    [HideInInspector] public float force = 7.5f;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

        player = FindObjectOfType<PlayerShip>();

        rb = player.GetComponent<Rigidbody>();

        shipBody = player.gameObject.GetComponentInChildren<MeshRenderer>();

        originalColor = shipBody.material.color;

        sceneController = FindObjectOfType<SceneController>();

        if (sceneController != null)
        {
            originalSpeed = sceneController.shipInfo[sceneController.SelectedIndex].speed * 12.5f / 5f;
            speedInMagneticField = originalSpeed / 2f;
        }

        //Magnetic = LoadDatabase.Instance.Magnetic;
    }

    public GameObject CreateMagnetic()
    {
        GameObject magnetic = Instantiate(Magnetic);

        magnetic.GetComponent<Magnetic>().Promote(player, rb, originalSpeed, speedInMagneticField, originalColor, colorInMagneticField, shipBody, force);

        return magnetic;
    }
}
