using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Firebase.Extensions;
using Firebase.Storage;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DownloadData : MonoBehaviour
{
    public List<string> fileNames = new List<string>();

    //=== Local URL==//
    [SerializeField] private List<string> fileUrls = new List<string>();
    [SerializeField] private List<string> asteroidUrls = new List<string>();
    [SerializeField] private List<string> playershipUrls = new List<string>();
    [SerializeField] private List<string> bulletUrls = new List<string>();
    [SerializeField] private List<string> explosionUrls = new List<string>();
    [SerializeField] private List<string> effectUrls = new List<string>();

    private string localUrl;
    private string assetUrl;
    private string playershipAssetURl;
    private string asteroidAssetURl;
    private string bulletAssetURl;
    private string effectAssetURl;
    private string explosionAssetURl;
    //===============//

    public Text fileNameDisplay;
    public Text downloadProgessDisplay;
    public Text alertFileSize;

    public Button downloadButton;
    public Slider sliderProgess;

    private int progess = 0;
    private int progessCheckversion = 0;
    private int downloadProgess = 0;



    private bool dataHasDownloaded = false;
    private bool assetHasDownloaded = false;

    private float downloadSize = 0f;

    public GameObject noInternetNoti;
    public Animator downloadPanel;
    public GameObject updateDateWarn;

    //==Firebase URL==//
    private FirebaseStorage storage;
    private StorageReference gsReference;
    private StorageReference dataRef;
    private StorageReference assetBundleRef;
    private StorageReference asteroidBundleRef;
    private StorageReference playershipBundleRef;
    private StorageReference effectBundleRef;
    private StorageReference explosionBundleRef;
    private StorageReference bulletBundleRef;
    //================//

    private Dictionary<StorageReference, string> listAssetBundleRef = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> listDataRef = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> downloadList = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> allList = new Dictionary<StorageReference, string>();


    public bool isInternetConnection = false;

    private void Awake()
    {
        listAssetBundleRef.Clear();
        listDataRef.Clear();
        downloadList.Clear();
        allList.Clear();

        localUrl = Path.Combine(Application.persistentDataPath, "Data");

        assetUrl = Path.Combine(Application.persistentDataPath, "Asset");

        playershipAssetURl = Path.Combine(assetUrl, "playership");
        asteroidAssetURl = Path.Combine(assetUrl, "asteroid");
        bulletAssetURl = Path.Combine(assetUrl, "bullet");
        explosionAssetURl = Path.Combine(assetUrl, "explosion");
        effectAssetURl = Path.Combine(assetUrl, "effect");

        storage = FirebaseStorage.DefaultInstance;

        gsReference = storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");

        dataRef = gsReference.Child("Data");

        assetBundleRef = gsReference.Child("AssetBundle");

        asteroidBundleRef = assetBundleRef.Child("asteroid");
        playershipBundleRef = assetBundleRef.Child("playership");
        explosionBundleRef = assetBundleRef.Child("explosion");
        effectBundleRef = assetBundleRef.Child("effect");
        bulletBundleRef = assetBundleRef.Child("bullet");

        dataHasDownloaded = Directory.Exists(localUrl);
        assetHasDownloaded = Directory.Exists(assetUrl);

        LoadAssetContent();
        LoadDataContent();
        AllListLoad();

        updateDateWarn.SetActive(true);
    }

    private void AllListLoad()
    {
        allList = listDataRef;

        foreach (KeyValuePair<StorageReference, string> entry in listAssetBundleRef)
        {
            allList.Add(entry.Key, entry.Value);
        }
    }

    private void LoadStorageReference(List<string> Names, StorageReference storageRef, string url, Dictionary<StorageReference, string> storages)
    {
        foreach (string fileName in Names)
        {
            StorageReference reference = storageRef.Child(fileName);
            string localPath = Path.Combine(url, fileName);
            if (!storages.ContainsKey(reference))
            {
                storages.Add(reference, localPath);
            }
        }
    }

    private void LoadAssetContent()
    {
        LoadStorageReference(fileUrls, assetBundleRef, assetUrl, listAssetBundleRef);
        LoadStorageReference(asteroidUrls, asteroidBundleRef, asteroidAssetURl, listAssetBundleRef);
        LoadStorageReference(playershipUrls, playershipBundleRef, playershipAssetURl, listAssetBundleRef);
        LoadStorageReference(bulletUrls, bulletBundleRef, bulletAssetURl, listAssetBundleRef);
        LoadStorageReference(effectUrls, effectBundleRef, effectAssetURl, listAssetBundleRef);
        LoadStorageReference(explosionUrls, explosionBundleRef, explosionAssetURl, listAssetBundleRef);
    }

    private void LoadDataContent()
    {
        LoadStorageReference(fileNames, dataRef, localUrl, listDataRef);
    }

    void Start()
    {
        StartCoroutine(CheckDataVersion(allList));
    }

    private IEnumerator NothingToDownloadAndNextScene()
    {
        yield return new WaitForEndOfFrame();
        SceneController.Instance.NextSceneAB();
    }

    public void TryToDownload()
    {
        CreateGameAssetFile();

        updateDateWarn.GetComponentInChildren<Text>().text = "Downloading...";
        downloadProgessDisplay.gameObject.SetActive(true);
        fileNameDisplay.gameObject.SetActive(true);

        StartCoroutine(CheckInternetConnection(isConnected =>
        {
            if (isConnected)
            {
                Download();
                dataHasDownloaded = true;
                downloadPanel.SetBool("hasDownloaded", dataHasDownloaded);
            }
            else
            {   if (downloadPanel.GetBool("hasDownloaded"))
                {
                    downloadPanel.gameObject.SetActive(true);
                    downloadPanel.SetBool("hasDownloaded", false);
                }

                downloadButton.GetComponentInChildren<Text>().text = "Try Again";
                noInternetNoti.SetActive(true);
            }
        }
        ));
    }

    public void Exit()
    {
        // save any game data here
#if UNITY_EDITOR
        // Application.Quit() does not work in the editor so
        // UnityEditor.EditorApplication.isPlaying need to be set to false to end the game
        UnityEditor.EditorApplication.isPlaying = false;
#else
         Application.Quit();
#endif
    }

    private void Download()
    {
        Debug.Log("Start download");
        StartCoroutine(DownloadHandler());
    }


    private void GetDataFilesize(List<StorageReference> storageRef)
    {
        progess = 0;
        foreach (StorageReference reference in storageRef)
        {
            Task task = reference.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {

                    StorageMetadata meta = taskk.Result;
                    downloadSize += (float)meta.SizeBytes / 1024;
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess++;
                }

                if (progess == storageRef.Count)
                {
                    alertFileSize.text = "You need to download " + downloadSize + "KB gamedata";
                    PopupDownload();
                }
            });
        }
    }

    private void GetDataFilesize(Dictionary<StorageReference, string> list)
    {
        Debug.Log("Calculate download size");
        updateDateWarn.GetComponentInChildren<Text>().text = "Calculate download size";
        progess = 0;
        List<StorageReference> listRef = new List<StorageReference>(list.Keys);
        foreach (StorageReference reference in listRef)
        {
            Task task = reference.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {
                    StorageMetadata meta = taskk.Result;
                    downloadSize += (float) meta.SizeBytes / 1024;
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess++;
                }

                if (progess == list.Count)
                {
                    alertFileSize.text = "You need to download " + downloadSize + "KB gamedata";
                    PopupDownload();
                }
            });
        }
    }

    private IEnumerator CheckDataVersion(Dictionary<StorageReference, string> list)
    {
        Debug.Log("Checking data");
        progessCheckversion = 0;
        foreach (KeyValuePair<StorageReference, string> entry in list)
        {
            string localPath = entry.Value;

            StorageReference fileRef = entry.Key;

            Task task = fileRef.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {
                    DateTime lastUpdateInSystem = File.GetLastWriteTime(localPath).ToUniversalTime();

                    StorageMetadata meta = taskk.Result;

                    DateTime lastUpdateInFirebase = meta.CreationTimeMillis.ToUniversalTime();

                    if (DateTime.Compare(lastUpdateInFirebase, lastUpdateInSystem) > 0)
                    {
                        if (!downloadList.ContainsKey(fileRef))
                        {
                            downloadList.Add(fileRef, localPath);
                        }
                    }
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progessCheckversion++;
                }

                if (progessCheckversion == list.Count)
                {
                    if (downloadList.Count > 0)
                    {
                        GetDataFilesize(downloadList);
                    }
                    else
                    {
                        sliderProgess.GetComponent<SliderRunTo1>().enabled = true;
                        LoadDatabase.Instance.StartRead();
                    }
                }
            });
        }
        yield return new WaitForEndOfFrame();
    }

    private IEnumerator CheckDataVersion(List<string> Names, StorageReference reference, string url)
    {

        foreach (string fileName in Names)
        {
            string localPath = Path.Combine(url, fileName);

            StorageReference fileRef = reference.Child(fileName);

            Task task = fileRef.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {
                    DateTime lastUpdateInSystem = File.GetLastWriteTime(localPath).ToUniversalTime();

                    StorageMetadata meta = taskk.Result;

                    DateTime lastUpdateInFirebase = meta.CreationTimeMillis.ToUniversalTime();

                    if (DateTime.Compare(lastUpdateInFirebase, lastUpdateInSystem) > 0)
                    {
                        if (!downloadList.ContainsKey(fileRef))
                        {
                            downloadList.Add(fileRef, localPath);
                        }
                    }
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progessCheckversion++;
                }

                if (progessCheckversion == Names.Count)
                {
                    if (downloadList.Count > 0)
                    {
                        GetDataFilesize(downloadList);
                    }
                    else
                    {
                        sliderProgess.GetComponent<SliderRunTo1>().enabled = true;
                        LoadDatabase.Instance.StartRead();
                    }
                }
            });
        }
        yield return new WaitForEndOfFrame();
    }

    private void PopupDownload()
    {
        downloadPanel.gameObject.SetActive(true);
        downloadPanel.SetBool("hasDownloaded", false);
    }

    IEnumerator DownloadHandler()
    {
        downloadProgess = 0;

        foreach (KeyValuePair<StorageReference, string> downloadContent in downloadList)
        {
            string localPath = downloadContent.Value;
            StorageReference reference = downloadContent.Key;

            Task task = reference.GetFileAsync(localPath,
            new StorageProgress<DownloadState>(state =>
            {
                fileNameDisplay.text = downloadContent.Value;
                sliderProgess.value = (float)state.BytesTransferred / state.TotalByteCount;
                downloadProgessDisplay.text = String.Format("{0}/{1} B", state.BytesTransferred, state.TotalByteCount);
            }), CancellationToken.None);

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    downloadProgess += 1;
                    Debug.Log("Download finished." + downloadContent.Value);
                }
                else
                {
                    Debug.LogWarning("Download failed" + downloadContent.Value);
                }

                if (downloadProgess == downloadList.Count)
                {
                    LoadDatabase.Instance.StartRead();
                }
            });
        }
        yield return new WaitForEndOfFrame();
    }

    private void CreateGameAssetFile()
    {
        if (!Directory.Exists(localUrl))
        {
            Directory.CreateDirectory(localUrl);
        }

        if (!Directory.Exists(assetUrl))
        {
            Directory.CreateDirectory(assetUrl);
        }

        if (!Directory.Exists(playershipAssetURl))
        {
            Directory.CreateDirectory(playershipAssetURl);
        }

        if (!Directory.Exists(asteroidAssetURl))
        {
            Directory.CreateDirectory(asteroidAssetURl);
        }

        if (!Directory.Exists(bulletAssetURl))
        {
            Directory.CreateDirectory(bulletAssetURl);
        }

        if (!Directory.Exists(effectAssetURl))
        {
            Directory.CreateDirectory(effectAssetURl);
        }

        if (!Directory.Exists(explosionAssetURl))
        {
            Directory.CreateDirectory(explosionAssetURl);
        }
    }

    IEnumerator CheckInternetConnection(Action<bool> callback)
    {
        UnityWebRequest www = new UnityWebRequest("http://google.com");
        yield return www.SendWebRequest();

        switch (www.result)
        {
            case UnityWebRequest.Result.ConnectionError:
                callback(false);
                isInternetConnection = false;
                break;

            case UnityWebRequest.Result.DataProcessingError:
                callback(false);
                isInternetConnection = false;
                break;

            case UnityWebRequest.Result.ProtocolError:
                callback(false);
                isInternetConnection = false;
                break;

            case UnityWebRequest.Result.Success:
                isInternetConnection = true;
                callback(true);
                break;
        }
    }
}
    