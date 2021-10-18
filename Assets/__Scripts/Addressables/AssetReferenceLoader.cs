using System.Collections;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;

public class AssetReferenceLoader<T> : MonoBehaviour where T : Object
{
    public T targetObject;

    private async Task LoadAssetReference(AssetReference reference)
    {
        targetObject = await reference.InstantiateAsync().Task as T;
    }

    private IEnumerator LoadObject(AssetReference reference)
    {
        yield return LoadAssetReference(reference);
    }

    public void LoadObjectFromAssetRef(AssetReference reference)
    {
        StartCoroutine(LoadObject(reference));
    }
}
