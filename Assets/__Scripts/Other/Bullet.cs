using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(OffScreenWrapper))]
public class Bullet : MonoBehaviour {
    static private Transform _BULLET_ANCHOR;
    static Transform BULLET_ANCHOR {
        get {
            if (_BULLET_ANCHOR == null) {
                GameObject go = new GameObject("BulletAnchor");
                _BULLET_ANCHOR = go.transform;
            }
            return _BULLET_ANCHOR;
        }
    }

    private float    bulletSpeed;
    private float    lifeTime;
    public bool     bDidWrap = false;

    public Bullet_SO bulletData;

    void Start()
    {
        InitData();

        transform.SetParent(BULLET_ANCHOR, true);

        // Set Bullet to self-destruct in lifeTime seconds
        Invoke("DestroyMe", lifeTime);

        // Set the velocity of the Bullet
        GetComponent<Rigidbody>().velocity = transform.forward * bulletSpeed;
    }

    void InitData()
    {
        bulletSpeed = bulletData.Speed;
        lifeTime = bulletData.LifeTime;
        GetComponent<OffScreenWrapper>().enabled = bulletData.isOffScreenWrapper;
        GetComponent<Renderer>().material.color = bulletData.color;
    }

    void DestroyMe()
    {
        Destroy(gameObject);
    }
    
}
