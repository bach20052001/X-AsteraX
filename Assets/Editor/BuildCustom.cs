using System;
using System.IO;
using System.Threading.Tasks;
using Firebase.Storage;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BuildCustom
{
    static FirebaseStorage storage;
    static StorageReference gsReference;
    static int numberOfFile = 0;
    static int uploaded = 0;
    static int numberOfBuildInDay = 0;
    public static float progess = 0;
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
        string path = Path.Combine(Path.GetDirectoryName(Application.dataPath), "BuildArtifact");

        if (!Directory.Exists(path))
        {
            Directory.CreateDirectory(path);
        }

        string scenePath = Path.Combine("Assets", "_Scenes");
        string[] levels = new string[] { Path.Combine(scenePath, "LoadingScene") + ".unity" };

        if (previousBuild.Day == DateTime.Now.Day && previousBuild.Month == DateTime.Now.Month && previousBuild.Year == DateTime.Now.Year)
        {
            numberOfBuildInDay++;
        }
        else
        {
            numberOfBuildInDay = 0;
        }

        string buildName = "AsteraX" + "_" + DateTime.Now.ToString("yyyyMMdd") + "_" + numberOfBuildInDay.ToString() + ".apk";

        previousBuild = DateTime.Now;

#if UNITY_ANDROID
        BuildPipeline.BuildPlayer(levels, Path.Combine(path, buildName), BuildTarget.Android, BuildOptions.None);
#elif UNITY_IOS
        BuildPipeline.BuildPlayer(levels, Path.Combine(path,buildName), BuildTarget.iOS, BuildOptions.None);
#endif
    }

    static void BuildAssetBundleAndUploadToFirebase()
    {
        storage = FirebaseStorage.DefaultInstance;
        gsReference = storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");

        while (BuildPipeline.isBuildingPlayer)
        {
            Debug.Log("");
        }

        CreateAssetBundles.BuildAllAssetBundles();

        while (BuildPipeline.isBuildingPlayer)
        {
            Debug.Log("");
        }

        PopupProcess.Init();

        numberOfFile = 0;
        uploaded = 0;

        CountingUploadFile(new DirectoryInfo(Path.Combine("Assets", "AssetBundle")));
        RecursiveUploadFile(new DirectoryInfo(Path.Combine("Assets", "AssetBundle")), gsReference);
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

    private static void CountingUploadFile(DirectoryInfo baseDir)
    {
        if (!baseDir.Exists)
        {
            return;
        }

        var files = baseDir.GetFiles();

        foreach (var file in files)
        {
            if (Path.GetExtension(file.FullName) == "")
            {
                numberOfFile++;
            }
        }

        foreach (var dir in baseDir.EnumerateDirectories())
        {
            CountingUploadFile(dir);
        }
    }

    private static void RecursiveUploadFile(DirectoryInfo baseDir, StorageReference parent)
    {
        StorageReference parentreference = parent;

        //UnityEngine.Debug.Log(parentreference.ToString());

        if (!baseDir.Exists)
        {
            //UnityEngine.Debug.Log(0);
            return;
        }

        var files = baseDir.GetFiles();

        foreach (var file in files)
        {
            if (Path.GetExtension(file.FullName) == "")
            {
                string localFile = file.FullName;

                // Create a reference to the file you want to upload
                StorageReference riversRef = parentreference.Child(baseDir.Name).Child(file.Name);

                //UnityEngine.Debug.Log(localFile + " " + riversRef);

                riversRef.PutFileAsync(localFile)
                    .ContinueWith((Task<StorageMetadata> task) =>
                    {
                        if (task.IsFaulted || task.IsCanceled)
                        {
                            UnityEngine.Debug.Log(task.Exception.ToString());
                        }
                        else
                        {
                            StorageMetadata metadata = task.Result;
                            string md5Hash = metadata.Md5Hash;

                            uploaded++;

                            //UnityEngine.Debug.Log("Finished uploading...");
                            if (uploaded < numberOfFile)
                            {
                                //Debug.Log(uploaded + "/" + numberOfFile);
                                progess = (float)((float)uploaded / (float)numberOfFile);
                            }
                            else if (uploaded == numberOfFile)
                            {
                                //Debug.Log(uploaded + "/" + numberOfFile);
                                progess = 1f;
                            }

                            //Debug.Log(PopupProcess.uploadProgess);
                        }
                    });
            }
        }

        foreach (var dir in baseDir.EnumerateDirectories())
        {
            RecursiveUploadFile(dir, parentreference.Child(baseDir.Name));
        }
    }
}