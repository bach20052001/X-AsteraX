using System.IO;
using UnityEngine;

public class SaveDataManager : MonoBehaviour
{
    private static SaveDataManager instance;

    public static SaveDataManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<SaveDataManager>();
            }
            return instance;
        }
    }
    [HideInInspector] public PlayerData playerData = new PlayerData();

    private string jsonData;

    private string dataPath;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }

        if (this != instance)
        {
            Destroy(this.gameObject);
        }

        dataPath = Path.Combine(Application.persistentDataPath, "PersistentDataPlayer");

        if (!Directory.Exists(dataPath))
        {
            Directory.CreateDirectory(dataPath);
            File.WriteAllText(dataPath + "/PlayerData.json", "");
        }

        dataPath = Path.Combine(dataPath, "PlayerData.json");
    }

    private void Start()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    public void LoadDataPersistent()
    {
        jsonData = File.ReadAllText(dataPath);
        playerData = JsonUtility.FromJson<PlayerData>(jsonData);
    }

    public void ExportData()
    {
        jsonData = JsonUtility.ToJson(playerData);
        File.WriteAllText(dataPath, jsonData);
    }
}
