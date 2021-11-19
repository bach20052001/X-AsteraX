using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

public class LoadSprites : MonoBehaviour
{
    public SpriteAtlas spriteAtlas;

    public List<Image> listUI = new List<Image>();
    public List<Button> listButton = new List<Button>();
    public List<GameObject> others = new List<GameObject>();

    void Awake()
    {
        SetUp();
    }

    public virtual void SetUp()
    {
        for (int i = 0; i < listUI.Count; i++)
        {
            listUI[i].sprite = spriteAtlas.GetSprite(listUI[i].sprite.name);
        }

        for (int i = 0; i < listButton.Count; i++)
        {
            SpriteState sprState = new SpriteState
            {
                highlightedSprite = spriteAtlas.GetSprite(listButton[i].spriteState.highlightedSprite.name),

                pressedSprite = spriteAtlas.GetSprite(listButton[i].spriteState.pressedSprite.name),

                selectedSprite = spriteAtlas.GetSprite(listButton[i].spriteState.selectedSprite.name)
            };

            listButton[i].spriteState = sprState;
        }
    }
}
