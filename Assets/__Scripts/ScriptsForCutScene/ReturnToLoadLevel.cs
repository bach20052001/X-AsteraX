using UnityEngine;

public class ReturnToLoadLevel : MonoBehaviour
{
    public Material newSB;

    public void ChangeSkyBox()
    {
        RenderSettings.skybox = newSB;
    }

    public void LoadNewLevel()
    {
        if (SceneController.Instance != null)
        {
            SceneController.Instance.Return();
        }
    }
}
