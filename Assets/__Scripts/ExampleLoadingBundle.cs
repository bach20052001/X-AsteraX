using UnityEngine;
using System.Collections;

public class ExampleLoadingBundle : MonoBehaviour
{
    public string url; // URL where the AssetBundle is
    public string assetName = "MyPrefab"; // Name of the Asset to be loaded from the AssetBundle
    public string assetPath; // Path to the Asset in the Project folder
    public Object ObjInstance; // Instance of the object

    public ExampleLoadingBundle(string url, string assetName, string assetPath, Object ObjInstance)
    {
        this.url = url;
        this.assetName = assetName;
        this.assetPath = assetPath;
        this.ObjInstance = ObjInstance;
    }

 
    void Start()
    {
        StartCoroutine(Download());
    }

    IEnumerator Download()
    {
        AssetBundleLoader assetBundleLoader = new AssetBundleLoader();
        yield return StartCoroutine(assetBundleLoader.LoadBundle<GameObject>(url, assetName, assetPath));
        if (assetBundleLoader.Obj != null)
            ObjInstance = Instantiate(assetBundleLoader.Obj);
    }

    void OnGUI()
    {
        GUILayout.Label(ObjInstance ? ObjInstance.name + " instantiated" : "");
    }
}