using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(OffScreenWrapper))]
public class Bullet : MonoBehaviour {

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
        rigid = GetComponent<Rigidbody>();
        GetComponent<OffScreenWrapper>().enabled = bulletData.isOffScreenWrapper;
        GetComponent<Renderer>().material.color = bulletData.color;
    }

    void DestroyMe()
    {
        gameObject.SetActive(false);
    }
}
