using UnityEngine;

public class ShotBehavior : MonoBehaviour {

	private Rigidbody rigid;

	public void InitVelo(float speed)
    {
		rigid.velocity = transform.forward * speed;
	}

	// Use this for initialization
	void Awake () {
		rigid = GetComponent<Rigidbody>();
	}
}
