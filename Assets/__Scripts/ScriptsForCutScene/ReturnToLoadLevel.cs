using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnToLoadLevel : MonoBehaviour
{
    public void LoadNewLevel()
    {
        if (SceneController.Instance != null)
        {
            SceneController.Instance.Return();
        }
    }
}
