using UnityEngine;

public class ShotBehavior : MonoBehaviour {

	private Rigidbody rigid;

	public GameObject spark;

	public void InitVelo(float speed)
    {
		rigid.velocity = transform.forward * speed;
	}

	// Use this for initialization
	void Awake () {
		rigid = GetComponent<Rigidbody>();
	}

    private void OnCollisionEnter(Collision collision)
    {
		Instantiate(spark, collision.contacts[0].point , Quaternion.identity);

		Destroy(this.gameObject);
    }
}
