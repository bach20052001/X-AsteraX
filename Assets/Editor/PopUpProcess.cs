using UnityEditor;
using UnityEngine;

public class PopupProcess : EditorWindow
{
    public static bool isFinished = false;

    public static float uploadProgess = 0f;

    public float secs = 10f;
    public float startVal = 0f;
    public float progress = 0f;
    static EditorWindow window;

    public static void Init()
    {
        window = GetWindow(typeof(PopupProcess));
        window.Show();
    }
    void OnGUI()
    {
        progress = BuildCustom.progess;

        if (progress < 1f)
        {
            EditorUtility.DisplayProgressBar("Upload AssetBunldes to Firebase", "Uploading... " + (int)(BuildCustom.progess * 100) + "%", BuildCustom.progess);
            progress = BuildCustom.progess;
        }
        else
        {
            EditorUtility.ClearProgressBar();
            window.Close();
        }
    }
    void OnInspectorUpdate()
    {
        Repaint();
    }
}