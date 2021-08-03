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

    public Slider sliderProgess;

    private float progess = 0;

    private bool hasDownloaded = false;

    public GameObject noInternetNoti;
    public Animator downloadPanel;


    private FirebaseStorage storage;
    private StorageReference gsReference;
    private StorageReference dataRef;
    private StorageReference jsonRef;

    private float totalSize = 0;
    public bool isInternetConnection = false;

    private void Awake()
    {
        localUrl = Path.Combine(Application.persistentDataPath, "Data");

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
        storage = FirebaseStorage.DefaultInstance;

        gsReference = storage.GetReferenceFromUrl("gs://x-asterax.appspot.com/");

        dataRef = gsReference.Child("Data");

        if (!hasDownloaded)
        {
            downloadPanel.SetBool("hasDownloaded", hasDownloaded);
        }
        else
        {
            sliderProgess.GetComponent<SliderRunTo1>().enabled = true;
        }
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
            {
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

    IEnumerator DownloadHandler()
    {
        foreach (string fileName in fileNames)
        {
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

                totalSize += state.TotalByteCount;
                }), CancellationToken.None);

            task.ContinueWithOnMainThread(resultTask =>
            {
                if (!resultTask.IsFaulted && !resultTask.IsCanceled)
                {
                    progess += (float)1 / fileNames.Count;
                    Debug.Log(progess);

                    sliderProgess.value = progess;

                    Debug.Log("Download finished." + fileName);

                    if (sliderProgess.value == 1f)
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
        Debug.Log(totalSize);
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
