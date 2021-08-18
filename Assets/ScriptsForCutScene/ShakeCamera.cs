using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class ShakeCamera : MonoBehaviour
{
    public float duration;

    public float threshold;

    public CinemachineVirtualCamera virtualCamera;
    private CinemachineBasicMultiChannelPerlin cinemachineBasicMultiChannelPerlin;

    private void Start()
    {
        cinemachineBasicMultiChannelPerlin = virtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
    }

    IEnumerator ShakingCamera (float duration, float threshold)
    {
        Vector3 originalPosition = this.transform.position;

        float elapsedTime = 0f;


        while (elapsedTime  < duration)
        {
            //Shake

            cinemachineBasicMultiChannelPerlin.m_AmplitudeGain = threshold;

            elapsedTime += Time.deltaTime;

            yield return null;
        }

        cinemachineBasicMultiChannelPerlin.m_AmplitudeGain = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("Shake");
            StartCoroutine(ShakingCamera(duration, threshold));
        }
    }
}
