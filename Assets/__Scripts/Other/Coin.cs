using System;
using UnityEngine;
using UnityEngine.UI;

[Serializable]
public class Coin : MonoBehaviour
{
    [SerializeField] private Text amountOfCoin;

    [SerializeField] private int coins = 0;

    public int GetCoins()
    {
        return coins;
    }

    public void SetCoin(int coins)
    {
        this.coins = coins;
        amountOfCoin.text = coins.ToString();
    }

    private void OnValidate()
    {
        amountOfCoin.text = coins.ToString();
    }

    private void OnDisable()
    {
        SavePlayerPref();
    }

    private void OnEnable()
    {
        coins = PlayerPrefs.GetInt("AmountOfCoins");
        amountOfCoin.text = coins.ToString();
    }

    void Start()
    {
        this.RegisterListener(GameEvent.EarnCoin, (param) => OnEarnCoin());   
    }

    private void OnEarnCoin()
    {
        coins++;

        if (amountOfCoin != null)
        {
            amountOfCoin.text = coins.ToString();
        }
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            AddCoin();
        }
    }

    public void AddCoin()
    {
        coins += 1000;
        amountOfCoin.text = coins.ToString();
    }

    public void SavePlayerPref()
    {
        PlayerPrefs.SetInt("AmountOfCoins", coins);
        PlayerPrefs.Save();
    }

    private void OnApplicationPause(bool pause)
    {
        SavePlayerPref();
    }

    private void OnApplicationQuit()
    {
        SavePlayerPref();
    }

}
