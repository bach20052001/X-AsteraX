using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEngine.Networking;
using System.IO;

public class AssetBundleLoader
{
    public Object Obj; // The object retrieved from the AssetBundle
    public string sceneName;

    public IEnumerator LoadBundle<T>(string url, string assetName, string assetPath)
    {
        Obj = null;

#if UNITY_EDITOR
        Obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(T));
        if (Obj == null)
            Debug.LogError("Asset not found at path: " + assetPath);
        yield break;

#else
        AssetBundle myLoadedAssetBundle = AssetBundle.LoadFromFile(Path.Combine(url));
        if (myLoadedAssetBundle == null)
        {
            Debug.Log("Failed to load AssetBundle!");
            yield break;
        }
        Obj = myLoadedAssetBundle.LoadAsset<GameObject>(assetName);
        //UnityWebRequest download;
        //if ( Caching.compressionEnabled ) { 
        //    while (!Caching.ready)
        //        yield return null;  
        //   download = UnityWebRequestAssetBundle.GetAssetBundle(url, 0);
        //}
        //else {
        //    download = new UnityWebRequest(url);
        //}

        //yield return download.SendWebRequest();
        //if ( download.error != null ) {
        //    Debug.LogError( download.error );
        //    download.Dispose();
        //    yield break;
        //}

        //AssetBundle assetBundle = DownloadHandlerAssetBundle.GetContent(download);
        //download.Dispose();
        //Obj = assetBundle.LoadAsset(assetName, typeof(T));

        //assetBundle.Unload(false);
#endif
    }

    public IEnumerator LoadSceneBundle(string url, string assetName, string assetPath)
    {
        Obj = null;
#if UNITY_EDITOR
        Obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(SceneAsset));
        if (Obj == null)
            Debug.LogError("Asset not found at path: " + assetPath);
        sceneName = Obj.name;
        yield return null;

#else
        AssetBundle bundle = AssetBundle.LoadFromFile(url);

        string[] scenes = bundle.GetAllScenePaths();

        sceneName = Path.GetFileNameWithoutExtension(scenes[0]);

        yield return null;
#endif
    }
}
