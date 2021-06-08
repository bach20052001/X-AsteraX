using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{
    private int hp;
    private int size;
    //private Asteroid asteroid;
    public Image background;
    public List<Image> hps;
    public List<GameObject> healthBar; 


    public int GetHp()
    {
        return hp;
    }

    public void damaged()
    {
        hp--;
        Debug.Log(hp);
        if (hp >= 0)
        {
            hps[hp].gameObject.SetActive(false);
        }
    }

    void Start()
    {
        size = GetComponentInParent<Asteroid>().size;
        hp = size;
        Debug.Log(hp);

        InitialBar(hp);
    }

    private void InitialBar(int hp)
    {
        GameObject bar = Instantiate(healthBar[hp - 1]);
        bar.transform.localScale = bar.transform.localScale * size / 3;
        bar.GetComponent<Canvas>().worldCamera = Camera.main;
        bar.transform.parent = gameObject.transform;
        bar.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;

        Image[] images = bar.GetComponentsInChildren<Image>();

        background = images[0];

        for (int i = 1; i < images.Length; i++)
        {
            hps.Add(images[i]);
        }
    }
}
