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

    void OnEnable()
    {
        Destroy(Instance);
        Instance = Instantiate(PrefabLaser, FirePoint.transform.position, Quaternion.identity);
        Instance.transform.parent = transform;
        Instance.transform.forward = Vector3.down;
        LaserScript = Instance.GetComponent<EGA_Laser>();
    }

    private void Start()
    {
        layer = LayerMask.GetMask("PlayerShip");
    }

    void OnDisable()
    {
        LaserScript.DisablePrepare();
        Destroy(Instance, 1);
    }

    private void Update()
    {
        if (Physics.Raycast(transform.position, transform.up,out hit, 20f, layer))
        {
            PlayerShip player = hit.collider.gameObject.GetComponent<PlayerShip>();
            player.Damaged();
        }
    }
}
