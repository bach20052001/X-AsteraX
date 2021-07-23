using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(OffScreenWrapper))]
public class Bullet : MonoBehaviour {
    //static private Transform _BULLET_ANCHOR;
    //static Transform BULLET_ANCHOR {
    //    get {
    //        if (_BULLET_ANCHOR == null) {
    //            GameObject go = new GameObject("BulletAnchor");
    //            _BULLET_ANCHOR = go.transform;
    //        }
    //        return _BULLET_ANCHOR;
    //    }
    //}

    private Rigidbody rigid;

    private float    bulletSpeed;
    private float    lifeTime;
    public bool     bDidWrap = false;

    public Bullet_SO bulletData;

    private void OnEnable()
    {
        StartCoroutine(nameof(Unactive));
    }

    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
    }

    void Start()
    {
        InitData();
    }

    IEnumerator Unactive()
    {
        yield return new WaitForSeconds(lifeTime);
        DestroyMe();
    }

    public void InitVel()
    {
        rigid.velocity = transform.forward * bulletSpeed;
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
        gameObject.SetActive(false);
    }
}
