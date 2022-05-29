using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlace : MonoBehaviour
{
    public GameObject gameObjectToInstantiate;
   
    private GameObject _spawnedGameObject;
    private ARRaycastManager _arRaycastManager;

    private bool _isPlaned = false;
    
    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private void Awake()
    {
        _arRaycastManager=GetComponent<ARRaycastManager>();
        // gameObjectToInstantiate = _arRaycastManager.raycastPrefab;
    }

    private bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount>0)
        {
            touchPosition=Input.GetTouch( index: 0).position;
            return true;
        }
        touchPosition=default;
        return false;
    }

    private void Update()
    {
        if(!TryGetTouchPosition(out Vector2 touchPosition)) return;
        
        if (_arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose=hits[0].pose;

            if (!_isPlaned)
            {
                _spawnedGameObject = Instantiate(gameObjectToInstantiate, hitPose.position, hitPose.rotation);
                _isPlaned = true;
            }
        }
    }
}
