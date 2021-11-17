using System;
using System.IO;
using System.Threading.Tasks;
using Firebase.Extensions;
using Firebase.Storage;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Build;
using UnityEngine;
using UnityEngine.SceneManagement;


public class BuildCustom
{
    static FirebaseStorage storage;
    static StorageReference gsReference;
    static StorageReference androidRef;
    static int numberOfFile = 0;
    static int uploaded = 0;
    static int numberOfBuildInDay = 0;
    public static float progess = 0;

    // Add a menu item named "Do Something" to MyMenu in the menu bar.
    [MenuItem("Build Tool/Build and Update addressables... &b")]
    static void Build()
    {
        BuildApplication();
        BuildAddressableAndUploadToFirebase();
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


        string buildName = "AsteraX" + "_" + DateTime.Now.ToString("yyyyMMdd") + "_" + numberOfBuildInDay.ToString() + ".apk";

        while (File.Exists(Path.Combine(path, buildName)))
        {
            buildName = "AsteraX" + "_" + DateTime.Now.ToString("yyyyMMdd") + "_" + (++numberOfBuildInDay).ToString() + ".apk";
        }

#if UNITY_ANDROID
        BuildPipeline.BuildPlayer(levels, Path.Combine(path, buildName), BuildTarget.Android, BuildOptions.None);
#elif UNITY_IOS
        BuildPipeline.BuildPlayer(levels, Path.Combine(path,buildName), BuildTarget.iOS, BuildOptions.None);
#endif
    }

    [MenuItem("Build Tool/Update and Load Addressables to Firebase only")]
    static void BuildAddressableAndUploadToFirebase()
    {
        storage = FirebaseStorage.DefaultInstance;
        gsReference = storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");
        StorageReference addressableRef = gsReference.Child("Addressables");
        androidRef = addressableRef.Child("Android");

        string localPath = Path.Combine(Path.GetDirectoryName(Application.dataPath), "ServerData", "Android");

        while (BuildPipeline.isBuildingPlayer)
        {
            Debug.Log("");
        }

        BuildAddressables();

        numberOfFile = 0;
        uploaded = 0;

        CountingUploadFile(new DirectoryInfo(localPath));
        RecursiveUploadFile(new DirectoryInfo(localPath), androidRef);
    }

    public static string GetSceneNameByBuildIndex(int buildIndex)
    {
        return GetSceneNameFromScenePath(SceneUtility.GetScenePathByBuildIndex(buildIndex));
    }

    public static void Run_OneTask()
    {
        // Create a new progress indicator
        int progressId = Progress.Start("Running one task");

        // Report the progress status at anytime
        for (int frame = 0; frame <= 10000; ++frame)
        {
            Progress.Report(progressId, frame / 1000.0f);
        }

        // The task is finished. Remove the associated progress indicator.
        Progress.Remove(progressId);
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

        numberOfFile += files.Length;

        foreach (var dir in baseDir.EnumerateDirectories())
        {
            CountingUploadFile(dir);
        }
    }

    private static void RecursiveUploadFile(DirectoryInfo baseDir, StorageReference parent)
    {
        StorageReference parentReference = parent;

        //UnityEngine.Debug.Log(parentreference.ToString());

        if (!baseDir.Exists)
        {
            //UnityEngine.Debug.Log(0);
            return;
        }

        var files = baseDir.GetFiles();

        //Upload
        foreach (var file in files)
        {
            //Debug.Log(file.Name);
            string localFile = file.FullName;
            // Create a reference to the file you want to upload
            StorageReference riversRef = parentReference.Child(file.Name);

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

                        ++uploaded;
                        Debug.Log(uploaded + "/" + numberOfFile);

                        if (uploaded < numberOfFile)
                        {
                            progess = (float)((float)uploaded / (float)numberOfFile);
                        }
                        else
                        {
                            progess = 1f;
                        }
                    }
                });
        }

        foreach (var dir in baseDir.EnumerateDirectories())
        {
            RecursiveUploadFile(dir, parentReference.Child(baseDir.Name));
        }
    }

    public static void BuildAddressables()
    {
        var path = Path.GetFullPath(Path.Combine("Assets", "AddressableAssetsData", "Android", "addressables_content_state.bin"));

        string localPath = Path.Combine(Path.GetDirectoryName(Application.dataPath), "ServerData", "Android");

        DirectoryInfo directoryInfo = new DirectoryInfo(localPath);

        RecursiveDelete(directoryInfo, androidRef);

        if (!string.IsNullOrEmpty(path))
        {
            Debug.Log(path);
            var buildAddressable = ContentUpdateScript.BuildContentUpdate(AddressableAssetSettingsDefaultObject.Settings, path);

            var time = buildAddressable.Duration;
        }

        PopupProcess.Init();
    }

    public static void RecursiveDelete(DirectoryInfo di, StorageReference parent)
    {
        foreach (FileInfo file in di.GetFiles())
        {
            StorageReference riversRef = parent.Child(file.Name);

            //UnityEngine.Debug.Log(localFile + " " + riversRef);
            if (riversRef != null)
            {
                riversRef.DeleteAsync().ContinueWithOnMainThread(task =>
                {
                    if (task.IsCompleted)
                    {
                        Debug.Log("File deleted successfully.");
                    }
                    else
                    {
                        Debug.Log("Nothing to delete");
                    }
                });
            }

            file.Delete();
        }

        foreach (DirectoryInfo dir in di.GetDirectories())
        {
            StorageReference subRef = parent.Child(di.Name);

            RecursiveDelete(dir, subRef);

            subRef.DeleteAsync().ContinueWithOnMainThread(task =>
            {
                if (task.IsCompleted)
                {
                    Debug.Log("File deleted successfully.");
                }
                else
                {
                    Debug.Log("Nothing to delete");
                }
            });

            dir.Delete();
        }
    }
}

