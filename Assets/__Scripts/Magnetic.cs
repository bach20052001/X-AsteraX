using UnityEngine;

public class Magnetic : MonoBehaviour
{
    private PlayerShip player;

    private Rigidbody rb;

    private float originalSpeed = 10;

    private float speedInMagneticField;

    private Color32 originalColor;

    private Color32 colorInMagneticField;

    private MeshRenderer shipBody;

    private float force;

    public void Promote(PlayerShip player, Rigidbody rb, float originalSpeed, float speedInMagneticField, Color32 originalColor, Color32 colorInMagneticField, MeshRenderer shipBody,float force)
    {
        this.player = player;
        this.rb = rb;
        this.originalSpeed = originalSpeed;
        this.speedInMagneticField = speedInMagneticField;
        this.originalColor = originalColor;
        this.colorInMagneticField = colorInMagneticField;
        this.shipBody = shipBody;
        this.force = force;
    }

    private void Start()
    {
        this.RegisterListener(Event.PlayerShipDestroyed, (param) => ResetPlayership());
    }

    private void OnTriggerEnter(Collider other)
    {
        AffectToPlayership();
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            ResetPlayership();
        }
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
        player.SetShipSpeed(speedInMagneticField);
        shipBody.material.color = colorInMagneticField;
    }

    private void ResetPlayership()
    {
        player.SetShipSpeed(originalSpeed);
        shipBody.material.color = originalColor;
    }

    private void OnDestroy()
    {
        player.SetShipSpeed(originalSpeed);
        //shipBody.material.color = originalColor;
    }
}
