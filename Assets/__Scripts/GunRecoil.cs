using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunRecoil : MonoBehaviour
{
    private Vector3 originalPos;
    private Vector3 recoilPos;

    private void Start()
    {
        originalPos = this.transform.localPosition;
        recoilPos = originalPos + new Vector3(0, -2.5f, 0);
    }

    private IEnumerator StartRecoil()
    {

        float duration = 0.075f;
        while (duration >= 0)
        {
            this.transform.localPosition = Vector3.Lerp(originalPos, recoilPos, 0.5f);
            duration -= Time.deltaTime;
        }
        yield return new WaitForEndOfFrame();
        duration = 0.05f;
        while (duration >= 0)
        {
            this.transform.localPosition = Vector3.Lerp(recoilPos, originalPos, 0.6f);
            duration -= Time.deltaTime;
        }
        this.transform.localPosition = originalPos;
    }

    public void Recoil()
    {
        StartCoroutine(StartRecoil());
    }
}
