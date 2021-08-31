using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurretRotateWithJoy : MonoBehaviour
{
    float currentAx;
    float currentAy;
    Vector3 currentDirection;
    // Update is called once per frame
    void Update()
    {
        if (AsteraX.GameState == AsteraX.BaseGameState.PLAY)
        {
            currentAx = UltimateJoystick.GetHorizontalAxis("FireDirection");
            currentAy = UltimateJoystick.GetVerticalAxis("FireDirection");

            if (currentAx != 0f && currentAy != 0f)
            {
                currentDirection = new Vector3(currentAx, currentAy, 0);
                //Debug.Log(currentDirection);
            }

            //Debug.DrawRay(direction.transform.position, direction.transform.position + currentDirection * 5);
            this.transform.LookAt(this.transform.position + currentDirection * 5, Vector3.back);
        }
    }
}
