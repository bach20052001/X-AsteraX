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
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DownloadData : MonoBehaviour
{
    public List<string> fileNames = new List<string>();
    private string localUrl;

    public Text fileNameDisplay;
    public Text downloadProgessDisplay;
    public Text alertFileSize;

    public Button downloadButton;
    public Slider sliderProgess;

    private int progess = 0;

    private bool hasDownloaded = false;

    public GameObject noInternetNoti;
    public Animator downloadPanel;
    public GameObject updateDateWarn;

    private FirebaseStorage storage;
    private StorageReference gsReference;
    private StorageReference dataRef;

    public bool isInternetConnection = false;

    private void Awake()
    {
        localUrl = Path.Combine(Application.persistentDataPath, "Data");

        storage = FirebaseStorage.DefaultInstance;

        gsReference = storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");

        dataRef = gsReference.Child("Data");

        if (!Directory.Exists(localUrl))
        {
            hasDownloaded = false;
        }
        else
        {
            hasDownloaded = true;
        }
    }

    private 

    // Start is called before the first frame update
    void Start()
    {
        if (!hasDownloaded)
        {

            Task checkSize = new Task(GetDataFilesize);
            Task LoadPopup = new Task(PopupDownload);

            checkSize.Start();
            checkSize.Wait();
            LoadPopup.RunSynchronously();
            LoadPopup.Wait();

            downloadButton.onClick.AddListener(delegate {
                TryToDownload();    
            });
        }
        else
        {
            updateDateWarn.SetActive(true);

            StartCoroutine(CheckDataVersion((isOldVersion, UpdateFilepath) => {
                if (isOldVersion)
                {
                    PopupDownload();

                    downloadButton.onClick.AddListener(delegate {
                        TryToDownload(UpdateFilepath);
                    });

                    updateDateWarn.GetComponent<Text>().text = "Update game data";
                }
                else
                {
                    downloadProgessDisplay.gameObject.SetActive(false);
                    fileNameDisplay.gameObject.SetActive(false);
                    sliderProgess.GetComponent<SliderRunTo1>().enabled = true;
                    StartCoroutine(NothingToDownloadAndNextScene());
                }
            }));
        }
    }

    private IEnumerator NothingToDownloadAndNextScene()
    {
        yield return new WaitForSeconds(1f);
        NextScene();
    }

    public void TryToDownload()
    {
        if (!Directory.Exists(localUrl))
        {
            Directory.CreateDirectory(localUrl);
        }

        downloadProgessDisplay.gameObject.SetActive(true);
        fileNameDisplay.gameObject.SetActive(true);

        StartCoroutine(CheckInternetConnection(isConnected =>
        {
            if (isConnected)
            {
                Download(true, null);
                hasDownloaded = true;
                downloadPanel.SetBool("hasDownloaded", hasDownloaded);
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

    public void TryToDownload(List<StorageReference> listFileNeedToUpdate)
    {
        if (!Directory.Exists(localUrl))
        {
            Directory.CreateDirectory(localUrl);
        }

        downloadProgessDisplay.gameObject.SetActive(true);
        fileNameDisplay.gameObject.SetActive(true);

        StartCoroutine(CheckInternetConnection(isConnected =>
        {
            if (isConnected)
            {
                Download(false, listFileNeedToUpdate);
                hasDownloaded = true;
                downloadPanel.SetBool("hasDownloaded", hasDownloaded);
            }
            else
            {
                if (downloadPanel.GetBool("hasDownloaded"))
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

    private void Download(bool isAll, List<StorageReference>? downloadFilepaths)
    {
        if (isAll)
        {
            StartCoroutine(DownloadHandler());
        }
        else
        {
            StartCoroutine(DownloadHandler(downloadFilepaths));
        }
    }

    private void GetDataFilesize()
    {
        long sizeToDownload = 0;

        void action()
        {
            alertFileSize.text = "You need to download " + sizeToDownload + "B of game data";
        }

        foreach (string fileName in fileNames)
        {
            string localPath = Path.Combine(localUrl, fileName);

            StorageReference jsonRef = dataRef.Child(fileName);

            jsonRef.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {

                    StorageMetadata meta = taskk.Result;
                    sizeToDownload += meta.SizeBytes;

                }
                taskk.Wait();

                Task LoadToText = new Task(action);

                LoadToText.RunSynchronously();
            });
        }        
    }

    private IEnumerator CheckDataVersion(Action<bool, List<StorageReference>> callback)
    {
        List<StorageReference> pathfileForUpdate = new List<StorageReference>();
        bool result = false;
        long sizeToDownload = 0;

        void action()
        {
            alertFileSize.text = "You need to download " + sizeToDownload + "B of game data";
        }

        foreach (string fileName in fileNames)
        {
            string localPath = Path.Combine(localUrl, fileName);

            StorageReference jsonRef = dataRef.Child(fileName);

            jsonRef.GetMetadataAsync().ContinueWithOnMainThread(taskk =>
            {
                if (!taskk.IsFaulted && !taskk.IsCanceled)
                {
                    DateTime lastUpdateInSystem = File.GetLastWriteTime(localPath).ToUniversalTime();

                    StorageMetadata meta = taskk.Result;

                    DateTime lastUpdateInFirebase = meta.CreationTimeMillis.ToUniversalTime();

                    if (DateTime.Compare(lastUpdateInFirebase, lastUpdateInSystem) > 0)
                    {
                        result = true;
                        pathfileForUpdate.Add(jsonRef);
                        sizeToDownload += meta.SizeBytes;
                    }
                }

                taskk.Wait();

                Task LoadToText = new Task(action);

                LoadToText.RunSynchronously();
            });
        }

        yield return new WaitForSeconds(1.25f);
        callback(result, pathfileForUpdate);
    }

    private void PopupDownload()
    {
        downloadPanel.gameObject.SetActive(true);
        downloadPanel.SetBool("hasDownloaded", false);
    }

    IEnumerator DownloadHandler()
    {
        progess = 0;

        foreach (string fileName in fileNames)
        {
            yield return new WaitForEndOfFrame();
            string localPath = Path.Combine(localUrl, fileName);
            StorageReference jsonRef = dataRef.Child(fileName);


            Task task = jsonRef.GetFileAsync(localPath,
            new StorageProgress<DownloadState>(state =>
            {
                fileNameDisplay.text = fileName;
                sliderProgess.value = (float)state.BytesTransferred / state.TotalByteCount;
                downloadProgessDisplay.text = String.Format("{0}/{1} B", state.BytesTransferred, state.TotalByteCount);
            }), CancellationToken.None);

           
            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess += 1;
                    Debug.Log("Download finished." + fileName);

                    if (progess == fileNames.Count)
                    {
                        NextScene();
                    }
                }
                else
                {
                    Debug.LogWarning("Download failed");
                }
            });
            yield return new WaitForSeconds(0.125f);
        }
    }

    IEnumerator DownloadHandler(List<StorageReference> downloadFilepaths)
    {
        progess = 0;
        foreach (StorageReference filePath in downloadFilepaths)
        {
            yield return new WaitForEndOfFrame();

            string localPath = Path.Combine(localUrl, filePath.Name);

            Task task = filePath.GetFileAsync(localPath,
            new StorageProgress<DownloadState>(state =>
            {
                fileNameDisplay.text = filePath.Name;
                sliderProgess.value = (float)state.BytesTransferred / state.TotalByteCount;
                downloadProgessDisplay.text = String.Format("{0}/{1} B", state.BytesTransferred, state.TotalByteCount);
            }), CancellationToken.None);


            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess += 1;
                    Debug.Log("Download finished." + filePath.Name);

                    if (progess == downloadFilepaths.Count)
                    {
                        NextScene();
                    }
                }
                else
                {
                    Debug.LogWarning("Download failed");
                }
            });
            yield return new WaitForSeconds(0.125f);
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

    public void NextScene()
    {
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
