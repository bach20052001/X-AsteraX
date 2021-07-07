using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{
    public int hp;
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
        if (hp >= 0)
        {
            hps[hp].gameObject.SetActive(false);
        }
    }

    public void InitialBar(int hp)
    {
        GameObject bar = Instantiate(healthBar[hp - 1]);
        bar.transform.localScale = bar.transform.localScale * hp / 3;
        bar.GetComponent<Canvas>().worldCamera = GameObject.Find("Camera").GetComponent<Camera>();
        bar.transform.SetParent(gameObject.transform);
        bar.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;

        Image[] images = bar.GetComponentsInChildren<Image>();

        background = images[0];

        for (int i = 1; i < images.Length; i++)
        {
            hps.Add(images[i]);
        }
    }

    private void Update()
    {
        transform.rotation = Quaternion.Euler(Vector3.zero);
    }
}
