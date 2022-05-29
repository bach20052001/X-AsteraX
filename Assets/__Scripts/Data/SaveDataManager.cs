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
            //Default Load
            PlayerData playerData = new PlayerData
            {
                selectedIndex = 0
            };

            playerData.bought.Add(0);

            playerData.point = 0;

            playerData.level = 1;

            File.WriteAllText(dataPath + "/PlayerData.json", JsonUtility.ToJson(playerData));
        }

        dataPath = Path.Combine(dataPath, "PlayerData.json");
        LoadDataPersistent();

        if (playerData.level < 1)
        {
            playerData.level = 1;
        }      
        
        // Debug.Log((dataPath));
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

    public void ExportDataToExit()
    {
        playerData.point = 0;
        jsonData = JsonUtility.ToJson(playerData);
        File.WriteAllText(dataPath, jsonData);
    }

    public int LoadScore()
    {
        jsonData = File.ReadAllText(dataPath);
        playerData = JsonUtility.FromJson<PlayerData>(jsonData);
        return playerData.point;
    }

    private void OnDisable()
    {
        ExportData();
    }

    public void ResetDataAndExport()
    {
        playerData.point = 0;
        ExportData();
    }

    // ============== SAVE PROGESS =================== //

    private void OnApplicationPause(bool pause)
    {
        ExportData();
    }

    private void OnApplicationQuit()
    {
        ExportData();
    }

}
