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
    private string localPath;

    public Text fileNameDisplay;
    public Text downloadProgessDisplay;

    public Button downloadButton;
    public Slider sliderProgess;

    private float progess = 0;

    private bool hasDownloaded = false;

    public GameObject noInternetNoti;
    public Animator downloadPanel;
    public GameObject updateDateWarn;

    private FirebaseStorage storage;
    private StorageReference gsReference;
    private StorageReference dataRef;
    private StorageReference jsonRef;

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

    // Start is called before the first frame update
    void Start()
    {
        if (!hasDownloaded)
        {
            downloadPanel.gameObject.SetActive(true);
            downloadProgessDisplay.gameObject.SetActive(true);
            fileNameDisplay.gameObject.SetActive(true);
            downloadPanel.SetBool("hasDownloaded", hasDownloaded);
        }
        else
        {
            updateDateWarn.SetActive(true);

            StartCoroutine(CheckDataVersion((isOldVersion) => {
                if (isOldVersion)
                {
                    updateDateWarn.GetComponent<Text>().text = "Update game data";
                    downloadProgessDisplay.gameObject.SetActive(true);
                    fileNameDisplay.gameObject.SetActive(true);
                    TryToDownload();
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
        Directory.CreateDirectory(localUrl);

        StartCoroutine(CheckInternetConnection(isConnected =>
        {
            if (isConnected)
            {
                Download();
                hasDownloaded = true;
                downloadPanel.SetBool("hasDownloaded", hasDownloaded);
            }
            else
            {   if (downloadPanel.GetBool("hasDownloaded"))
                {
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
        StartCoroutine(DownloadHandler());
    }

    private IEnumerator CheckDataVersion(Action<bool> callback)
    {
        bool result = false;
        foreach (string fileName in fileNames)
        {
            localPath = Path.Combine(localUrl, fileName);
            jsonRef = dataRef.Child(fileName);


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
                        return;
                    }
                }
            });
        }

        yield return new WaitForSeconds(1.25f);
        callback(result);
    }

    IEnumerator DownloadHandler()
    {
        foreach (string fileName in fileNames)
        {
            yield return new WaitForEndOfFrame();
            localPath = Path.Combine(localUrl, fileName);
            jsonRef = dataRef.Child(fileName);


            Task task = jsonRef.GetFileAsync(localPath,
            new StorageProgress<DownloadState>(state =>
            {
                // called periodically during the download
                //Debug.Log(String.Format(
                //    "Progress: {0} of {1} bytes transferred.",
                //    state.BytesTransferred,
                //    state.TotalByteCount
                //    ) + fileName);
                fileNameDisplay.text = fileName;
                sliderProgess.value = (float)state.BytesTransferred / state.TotalByteCount;
                downloadProgessDisplay.text = String.Format("{0}/{1} B", state.BytesTransferred, state.TotalByteCount);
            }), CancellationToken.None);

           
            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess += (float)1 / fileNames.Count;
                    Debug.Log("Download finished." + fileName);

                    if (progess == 1f)
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
