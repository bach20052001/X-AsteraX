using System;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BuildCustom : MonoBehaviour
{
    static int numberOfBuildInDay = 0;
    static DateTime previousBuild;

    // Add a menu item named "Do Something" to MyMenu in the menu bar.
    [MenuItem("Build Tool/Build... &b")]
    static void Build()
    {
        BuildApplication();
        BuildAssetBundleAndUploadToFirebase();
    }

    static void BuildApplication()
    {
        string path = Path.Combine("Assets","BuildArtifact");

        if (!Directory.Exists(path))
        {
            Directory.CreateDirectory(path);
        }

        string scenePath = Path.Combine("Assets", "_Scenes");
        string[] levels = new string[] { Path.Combine(scenePath, GetSceneNameByBuildIndex(0)) + ".unity"};

        if (previousBuild.Day == DateTime.Now.Day && previousBuild.Month == DateTime.Now.Month && previousBuild.Year == DateTime.Now.Year)
        {
            numberOfBuildInDay++;
        }
        else
        {
            numberOfBuildInDay = 0;
        }

        string buildName = Application.productName + "_" + DateTime.Now.ToString("yyyymmdd") + "_" + numberOfBuildInDay.ToString();

        previousBuild = DateTime.Now;

#if UNITY_ANDROID
        BuildPipeline.BuildPlayer(levels, Path.Combine(path,buildName), BuildTarget.Android, BuildOptions.None);
#elif UNITY_IOS
        BuildPipeline.BuildPlayer(levels, Path.Combine(path,buildName), BuildTarget.iOS, BuildOptions.None);
#endif
    }

    static void BuildAssetBundleAndUploadToFirebase()
    {

    }

    public static string GetSceneNameByBuildIndex(int buildIndex)
    {
        return GetSceneNameFromScenePath(SceneUtility.GetScenePathByBuildIndex(buildIndex));
    }

    private static string GetSceneNameFromScenePath(string scenePath)
    {
        // Unity's asset paths always use '/' as a path separator
        var sceneNameStart = scenePath.LastIndexOf("/", StringComparison.Ordinal) + 1;
        var sceneNameEnd = scenePath.LastIndexOf(".", StringComparison.Ordinal);
        var sceneNameLength = sceneNameEnd - sceneNameStart;
        return scenePath.Substring(sceneNameStart, sceneNameLength);
    }
}
