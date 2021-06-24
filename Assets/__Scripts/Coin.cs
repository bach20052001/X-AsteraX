using System;
using UnityEngine;
using UnityEngine.UI;

[Serializable]
public class Coin : MonoBehaviour
{
    public Text amountOfCoin;

    private int coins = 0;

    private void OnDisable()
    {
        PlayerPrefs.SetInt("AmountOfCoins", coins);
        PlayerPrefs.Save();
    }

    private void OnEnable()
    {
        coins = PlayerPrefs.GetInt("AmountOfCoins");
        amountOfCoin.text = coins.ToString();
    }

    void Start()
    {
        this.RegisterListener(Event.EarnCoin, (param) => OnEarnCoin());   
    }

    private void OnEarnCoin()
    {
        coins++;
        amountOfCoin.text = coins.ToString();
    }
}
