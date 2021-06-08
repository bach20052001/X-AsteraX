using UnityEngine;

public class Magnetic : MonoBehaviour
{
    public PlayerShip player;

    private Rigidbody rb;

    private float originalSpeed;

    public float speedInMagneticField;

    private Color32 originalColor;

    public Color32 colorInMagneticField;

    public MeshRenderer shipBody;

    public float force;

    private void Awake()
    {
        player = FindObjectOfType<PlayerShip>();
        rb = player.GetComponent<Rigidbody>();

        originalSpeed = player.shipSpeed;

        shipBody = player.gameObject.GetComponentInChildren<MeshRenderer>();

        originalColor = shipBody.material.color;
    }

    private void Start()
    {
        this.RegisterListener(Event.OnPlayerDamaged, (param) => ResetPlayership());
    }

    private void OnTriggerEnter(Collider other)
    {
        AffectToPlayership();
    }

    private void OnTriggerExit(Collider other)
    {
        ResetPlayership();
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Vector3 directionToMagneticField = this.transform.position - player.gameObject.transform.position;
            rb.AddForce(directionToMagneticField * force * Time.deltaTime, ForceMode.Impulse);
        }
    }

    private void AffectToPlayership()
    {
        player.shipSpeed = speedInMagneticField;
        shipBody.material.color = colorInMagneticField;
    }

    private void ResetPlayership()
    {
        player.shipSpeed = originalSpeed;
        shipBody.material.color = originalColor;
    }

    private void OnDestroy()
    {
        ResetPlayership();
    }
}
