using UnityEditor;
using System.IO;

public class CreateAssetBundles
{
    [MenuItem("Assets/Build AssetBundles/Build for Android")]
    public static void BuildAllAssetBundlesAndroid()
    {
        string assetBundleDirectory = "Assets/AssetBundle";
        if (!Directory.Exists(assetBundleDirectory))
        {
            Directory.CreateDirectory(assetBundleDirectory);
        }

        BuildPipeline.BuildAssetBundles(assetBundleDirectory,
                                        BuildAssetBundleOptions.None,
                                        BuildTarget.Android);
    }
    
    [MenuItem("Assets/Build AssetBundles/Build for IOS")]
    public static void BuildAllAssetBundlesIOS()
    {
        string assetBundleDirectory = "Assets/AssetBundle";
        if (!Directory.Exists(assetBundleDirectory))
        {
            Directory.CreateDirectory(assetBundleDirectory);
        }

        BuildPipeline.BuildAssetBundles(assetBundleDirectory,
            BuildAssetBundleOptions.None,
            BuildTarget.iOS);
    }
    
    
    [MenuItem("Assets/Build AssetBundles/Build for Window")]
    public static void BuildAllAssetBundlesStandalone()
    {
        string assetBundleDirectory = "Assets/AssetBundle";
        if (!Directory.Exists(assetBundleDirectory))
        {
            Directory.CreateDirectory(assetBundleDirectory);
        }

        BuildPipeline.BuildAssetBundles(assetBundleDirectory,
            BuildAssetBundleOptions.None,
            BuildTarget.StandaloneWindows);
    }
}