using System.Collections.Generic;
using UnityEngine;
using DanielLochner.Assets.SimpleScrollSnap;
using UnityEngine.UI;
using System.Collections;

public class ShipInfomation : MonoBehaviour
{
    private PlayerData playerData;

    public Text shipName;

    public Text shipName_des;

    public Text description;

    public Text price;

    public GameObject foregroundHealth;

    public GameObject bullets;

    public GameObject foregroundSpeed;

    public Text AbilityText;

    public Color32 bulletColor;

    public SimpleScrollSnap scroll;

    public List<Ship_SO> ships;

    public GameObject BuyButton;

    private SceneController sceneController;

    public Sprite hasBoughtSprite;

    public Sprite unBoughtYet;

    public Text noti;

    private bool isShipSeleted = false;

    private bool hasBought = false;

    public List<int> boughtIndex = new List<int>();

    private Coin coin;

    private int currentIndex;

    private int currentSelected = -1;

    private Ship_SO currentShip;

    private void Awake()
    {
        coin = FindObjectOfType<Coin>();
        boughtIndex.Clear();
    }

    private void OnDisable()
    {
        playerData.bought = boughtIndex;
        playerData.selectedIndex = currentSelected;

        if (SaveDataManager.Instance != null)
        {
            SaveDataManager.Instance.playerData = playerData;
            SaveDataManager.Instance.ExportData();
        }

    }

    private void Start()
    {
        sceneController = SceneController.Instance;
        SaveDataManager.Instance.LoadDataPersistent();

        if (SaveDataManager.Instance.playerData == null)
        {
            SaveDataManager.Instance.playerData = new PlayerData();
        }
        
        playerData = SaveDataManager.Instance.playerData;
       
        if (playerData != null)
        {
            currentSelected = playerData.selectedIndex;
            boughtIndex = playerData.bought;
        }

        if (currentSelected != -1)
        {
            scroll.GoToPanel(currentSelected);
            sceneController.SelectedIndex = currentSelected;
        }

        LoadInfomation();
    }

    private bool CheckBought()
    {
        if (boughtIndex.Count == 0)
        {
            return false;
        }

        for (int i = 0; i < boughtIndex.Count; i++)
        {
            if (currentIndex == boughtIndex[i])
            {
                return true;
            }
        }
        return false;
    }

    private void CheckBoughtAndSelect()
    {
        hasBought = CheckBought();

        if (hasBought)
        {
            BuyButton.GetComponent<Image>().sprite = hasBoughtSprite;
            price.text = "Select";

            if (currentSelected == scroll.currentPanel && currentSelected != -1)
            {
                isShipSeleted = true;
                price.text = "Selected";
            }
        }
        else
        {
            BuyButton.GetComponent<Image>().sprite = unBoughtYet;
            price.text = "Buy (" + currentShip.price + " coins)";
        }
    }

    public void LoadInfomation()
    {

        currentIndex = scroll.currentPanel;

        currentShip = ships[currentIndex];

        shipName.text = currentShip.shipName;
        shipName_des.text = currentShip.shipName;
        description.text = currentShip.description;

        ResetInfomation();
        CheckBoughtAndSelect();

        for (int i = 0; i < currentShip.HP; i++)
        {
            foregroundHealth.transform.GetChild(i).gameObject.SetActive(true);
        }

        for (int i = 0; i < currentShip.speed; i++)
        {
            foregroundSpeed.transform.GetChild(i).gameObject.SetActive(true);
        }

        for (int i = 0; i < currentShip.attack; i++)
        {
            bullets.transform.GetChild(i).GetComponent<Image>().color = bulletColor;
        }

        AbilityText.text = currentShip.skill;


        if (sceneController != null)
        {
            sceneController.LoadAnimator();
        }
    }

    private void ResetInfomation()
    {
        for (int i = 0; i < foregroundHealth.transform.childCount; i++)
        {
            foregroundHealth.transform.GetChild(i).gameObject.SetActive(false);
        }

        for (int i = 0; i < foregroundSpeed.transform.childCount; i++)
        {
            foregroundSpeed.transform.GetChild(i).gameObject.SetActive(false);
        }

        for (int i = 0; i < bullets.transform.childCount; i++)
        {
            bullets.transform.GetChild(i).GetComponent<Image>().color = Color.white;
        }
    }

    public void PreviousScene()
    {
        if (sceneController != null)
        {
            sceneController.PrevScene();
        }
    }

    public void NextScene()
    {
        if (isShipSeleted)
        {
            if (sceneController != null)
            {
                sceneController.NextScene();
            }
        }
        else
        {
            StartCoroutine(PushNoti("Please select your spaceship"));
        }
    }

    private IEnumerator PushNoti(string content)
    {
        noti.text = content;
        noti.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.5f);
        noti.gameObject.SetActive(false);
    }


    public void BuyOrSelect()
    {
        if (!hasBought)
        {
            int coins = coin.GetCoins();

            if (coins >= currentShip.price)
            {
                coins -= currentShip.price;

                boughtIndex.Add(currentIndex);

                BuyButton.GetComponent<Image>().sprite = hasBoughtSprite;

                coin.SetCoin(coins);

                price.text = "Select";

                hasBought = true;
            }
            else
            {
                StartCoroutine(PushNoti("Not enough coin"));
            }
        }
        else
        {
            if (!isShipSeleted || currentIndex != currentSelected)
            {
                isShipSeleted = true;
                price.text = "Selected";
                sceneController.SelectedIndex = scroll.currentPanel;
                currentSelected = scroll.currentPanel;
            }
        }

        playerData.bought = boughtIndex;
        playerData.selectedIndex = currentSelected;
    }
}
