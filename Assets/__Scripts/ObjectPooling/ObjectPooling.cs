using System.Collections.Generic;
using UnityEngine;

public enum ObjectType
{
    BulletPlayerVsAsteroid,
    BulletPlayerVsBoss,
    BulletEnemy,
    Explosion
}

public class ObjectPooling : MonoBehaviour
{
    public ObjectType type;

    [SerializeField] private GameObject gameObjectPrefab;

    private List<GameObject> listGameObject = new List<GameObject>();

    private List<Bullet> listBulletData = new List<Bullet>();

    public int initialSize;

    void Awake()
    {
        if (type != ObjectType.Explosion)
        {
            gameObjectPrefab = LoadDatabase.Instance.listBullet[((int)type)];
        }
    }

    private void Start()
    {
        for (int i = 0; i < initialSize; i++)
        {
            InitialObject();
        }
    }

    public GameObject GetUnactiveObject()
    {
        for (int i = 0; i < listGameObject.Count; i++)
        {
            if (!listGameObject[i].activeSelf)
            {
                listGameObject[i].SetActive(true);
                return listGameObject[i];
            }
        }

        //If all object actived
        GameObject newObject = InitialObject();
        newObject.SetActive(true);
        return newObject;
    }

    public Bullet GetUnactiveBullet()
    {
        for (int i = 0; i < listGameObject.Count; i++)
        {
            if (!listGameObject[i].activeSelf)
            {
                listGameObject[i].SetActive(true);
                listGameObject[i].transform.position = Vector3.zero;
                listGameObject[i].transform.rotation = Quaternion.identity;
                return listBulletData[i];
            }
        }

        //If all object actived
        GameObject newObject = InitialObject();
        newObject.SetActive(true);
        return listBulletData[listBulletData.Count - 1];
    }

    private GameObject InitialObject()
    {
        GameObject tmp = Instantiate(gameObjectPrefab, Vector3.zero, Quaternion.identity);

        tmp.SetActive(false);
        tmp.transform.SetParent(this.gameObject.transform);
        listGameObject.Add(tmp);

        if (type != ObjectType.Explosion)
        {
            listBulletData.Add(tmp.GetComponent<Bullet>());
        }

        return tmp;
    }
}
