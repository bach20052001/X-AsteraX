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
    [SerializeField] private List<string> explosionUrls = new List<string>();
    [SerializeField] private List<string> effectUrls = new List<string>();

    private string _localUrl;
    private string _assetUrl;
    private string _playershipAssetURl;
    private string _asteroidAssetURl;
    private string _effectAssetURl;
    private string _explosionAssetURl;
    //===============//

    [SerializeField] private Text fileNameDisplay;
    [SerializeField] private Text downloadProcessDisplay;
    [SerializeField] private Text alertFileSize;

    [SerializeField] private Button downloadButton;
    [SerializeField] private Slider sliderProcess;

    private int _process = 0;
    private int _processCheckVersion = 0;
    private int _downloadProcess = 0;



    private bool _dataHasDownloaded = false;
    private bool _assetHasDownloaded = false;

    private float _downloadSize = 0f;

    [SerializeField] private GameObject noInternetNotification;
    [SerializeField] private Animator downloadPanel;
    [SerializeField] private GameObject updateDateWarn;

    //==Firebase URL==//
    private FirebaseStorage _storage;
    private StorageReference _gsReference;
    private StorageReference _dataRef;
    private StorageReference _assetBundleRef;
    private StorageReference _asteroidBundleRef;
    private StorageReference _playershipBundleRef;
    private StorageReference _effectBundleRef;
    private StorageReference _explosionBundleRef;
    //================//

    private Dictionary<StorageReference, string> _listAssetBundleRef = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> _listDataRef = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> _downloadList = new Dictionary<StorageReference, string>();
    private Dictionary<StorageReference, string> _allList = new Dictionary<StorageReference, string>();


    private bool _isFirebaseReady = false;
    private bool _isInternetConnection = false;
    private static readonly int HasDownloaded = Animator.StringToHash("hasDownloaded");

    private void Awake()
    {
        _listAssetBundleRef.Clear();
        _listDataRef.Clear();
        _downloadList.Clear();
        _allList.Clear();

        _localUrl = Path.Combine(Application.persistentDataPath, "Data");

        _assetUrl = Path.Combine(Application.persistentDataPath, "Asset");

        _playershipAssetURl = Path.Combine(_assetUrl, "playership");
        _asteroidAssetURl = Path.Combine(_assetUrl, "asteroid");
        _explosionAssetURl = Path.Combine(_assetUrl, "explosion");
        _effectAssetURl = Path.Combine(_assetUrl, "effect");

        _storage = FirebaseStorage.DefaultInstance;

        _gsReference = _storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");

        _dataRef = _gsReference.Child("Data");

        _assetBundleRef = _gsReference.Child("AssetBundle");

        _asteroidBundleRef = _assetBundleRef.Child("asteroid");
        _playershipBundleRef = _assetBundleRef.Child("playership");
        _explosionBundleRef = _assetBundleRef.Child("explosion");
        _effectBundleRef = _assetBundleRef.Child("effect");

        _dataHasDownloaded = Directory.Exists(_localUrl);
        _assetHasDownloaded = Directory.Exists(_assetUrl);

        LoadAssetContent();
        LoadDataContent();
        AllListLoad();

        updateDateWarn.SetActive(true);
    }
    

    private void OnTokenReceived(object sender, Firebase.Messaging.TokenReceivedEventArgs token) {
        UnityEngine.Debug.Log("Received Registration Token: " + token.Token);
    }

    private void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e) {
        UnityEngine.Debug.Log("Received a new message from: " + e.Message.From);
    }
    
    private void AllListLoad()
    {
        _allList = _listDataRef;

        foreach (KeyValuePair<StorageReference, string> entry in _listAssetBundleRef)
        {
            _allList.Add(entry.Key, entry.Value);
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
        LoadStorageReference(fileUrls, _assetBundleRef, _assetUrl, _listAssetBundleRef);
        LoadStorageReference(asteroidUrls, _asteroidBundleRef, _asteroidAssetURl, _listAssetBundleRef);
        LoadStorageReference(playershipUrls, _playershipBundleRef, _playershipAssetURl, _listAssetBundleRef);
        LoadStorageReference(effectUrls, _effectBundleRef, _effectAssetURl, _listAssetBundleRef);
        LoadStorageReference(explosionUrls, _explosionBundleRef, _explosionAssetURl, _listAssetBundleRef);
    }

    private void LoadDataContent()
    {
        LoadStorageReference(fileNames, _dataRef, _localUrl, _listDataRef);
    }

    private void Start()
    {
        StartCoroutine(CheckDataVersion(_allList));
        
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available) {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                var app = Firebase.FirebaseApp.DefaultInstance;
                Firebase.Messaging.FirebaseMessaging.TokenReceived += OnTokenReceived;
                Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;
                // Set a flag here to indicate whether Firebase is ready to use by your app.
            } else {
                UnityEngine.Debug.LogError(System.String.Format(
                    "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });

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
        downloadProcessDisplay.gameObject.SetActive(true);
        fileNameDisplay.gameObject.SetActive(true);

        StartCoroutine(CheckInternetConnection(isConnected =>
        {
            if (isConnected)
            {
                Download();
                _dataHasDownloaded = true;
                downloadPanel.SetBool(HasDownloaded, _dataHasDownloaded);
            }
            else
            {   if (downloadPanel.GetBool(HasDownloaded))
                {
                    downloadPanel.gameObject.SetActive(true);
                    downloadPanel.SetBool(HasDownloaded, false);
                }

                downloadButton.GetComponentInChildren<Text>().text = "Try Again";
                noInternetNotification.SetActive(true);
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
        _process = 0;
        foreach (StorageReference reference in storageRef)
        {
            Task task = reference.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {

                    StorageMetadata meta = taskk.Result;
                    _downloadSize += (float)meta.SizeBytes / 1024;
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    _process++;
                }

                if (_process == storageRef.Count)
                {
                    alertFileSize.text = "You need to download " + _downloadSize + "KB gamedata";
                    PopupDownload();
                }
            });
        }
    }

    private void GetDataFilesize(Dictionary<StorageReference, string> list)
    {
        Debug.Log("Calculate download size");
        updateDateWarn.GetComponentInChildren<Text>().text = "Calculate download size";
        _process = 0;
        List<StorageReference> listRef = new List<StorageReference>(list.Keys);
        
        foreach (StorageReference reference in listRef)
        {
            Task task = reference.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {
                    StorageMetadata meta = taskk.Result;
                    _downloadSize += (float) meta.SizeBytes / 1024;
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    _process++;
                }

                if (_process == list.Count)
                {
                    alertFileSize.text = "You need to download " + _downloadSize + "KB gamedata";
                    PopupDownload();
                }
            });
        }
    }

    private IEnumerator CheckDataVersion(Dictionary<StorageReference, string> list)
    {
        Debug.Log("Checking data");
        _processCheckVersion = 0;
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
                        if (!_downloadList.ContainsKey(fileRef))
                        {
                            _downloadList.Add(fileRef, localPath);
                        }
                    }
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    _processCheckVersion++;
                }

                if (_processCheckVersion == list.Count)
                {
                    if (_downloadList.Count > 0)
                    {
                        GetDataFilesize(_downloadList);
                    }
                    else
                    {
                        sliderProcess.GetComponent<SliderRunTo1>().enabled = true;
                        updateDateWarn.GetComponentInChildren<Text>().text = "Loading...";
                        StartCoroutine(LoadDatabase.Instance.StartRead());
                    }
                }
            });
        }
        yield return null;
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
                        if (!_downloadList.ContainsKey(fileRef))
                        {
                            _downloadList.Add(fileRef, localPath);
                        }
                    }
                }
            });

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    _processCheckVersion++;
                }

                if (_processCheckVersion == Names.Count)
                {
                    if (_downloadList.Count > 0)
                    {
                        GetDataFilesize(_downloadList);
                    }
                    else
                    {
                        sliderProcess.GetComponent<SliderRunTo1>().enabled = true;
                        updateDateWarn.GetComponentInChildren<Text>().text = "Loading...";
                        StartCoroutine(LoadDatabase.Instance.StartRead());
                    }
                }
            });
        }
        yield return null;
    }

    private void PopupDownload()
    {
        downloadPanel.gameObject.SetActive(true);
        downloadPanel.SetBool("hasDownloaded", false);
    }

    IEnumerator DownloadHandler()
    {
        _downloadProcess = 0;

        foreach (KeyValuePair<StorageReference, string> downloadContent in _downloadList)
        {
            string localPath = downloadContent.Value;
            StorageReference reference = downloadContent.Key;

            Task task = reference.GetFileAsync(localPath,
            new StorageProgress<DownloadState>(state =>
            {
                fileNameDisplay.text = downloadContent.Value;
                sliderProcess.value = (float)state.BytesTransferred / state.TotalByteCount;
                downloadProcessDisplay.text = String.Format("{0}/{1} B", state.BytesTransferred, state.TotalByteCount);
            }), CancellationToken.None);

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    _downloadProcess += 1;
                    Debug.Log("Download finished." + downloadContent.Value);
                }
                else
                {
                    Debug.LogWarning("Download failed" + downloadContent.Value);
                }

                if (_downloadProcess == _downloadList.Count)
                {
                    updateDateWarn.GetComponentInChildren<Text>().text = "Loading...";
                    StartCoroutine(LoadDatabase.Instance.StartRead());
                }
            });
        }
        yield return null;
    }

    private void CreateGameAssetFile()
    {
        if (!Directory.Exists(_localUrl))
        {
            Directory.CreateDirectory(_localUrl);
        }

        if (!Directory.Exists(_assetUrl))
        {
            Directory.CreateDirectory(_assetUrl);
        }

        if (!Directory.Exists(_playershipAssetURl))
        {
            Directory.CreateDirectory(_playershipAssetURl);
        }

        if (!Directory.Exists(_asteroidAssetURl))
        {
            Directory.CreateDirectory(_asteroidAssetURl);
        }

        if (!Directory.Exists(_effectAssetURl))
        {
            Directory.CreateDirectory(_effectAssetURl);
        }

        if (!Directory.Exists(_explosionAssetURl))
        {
            Directory.CreateDirectory(_explosionAssetURl);
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
                _isInternetConnection = false;
                break;

            case UnityWebRequest.Result.DataProcessingError:
                callback(false);
                _isInternetConnection = false;
                break;

            case UnityWebRequest.Result.ProtocolError:
                callback(false);
                _isInternetConnection = false;
                break;

            case UnityWebRequest.Result.Success:
                _isInternetConnection = true;
                callback(true);
                break;
        }
    }
}
    