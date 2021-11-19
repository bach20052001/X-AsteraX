using UnityEngine;
using UnityEngine.UI;

public class LoadSpritesToManage : LoadSprites
{
    public override void SetUp()
    {
        base.SetUp();
        
        others[0].GetComponent<ShipInfomation>().hasBoughtSprite = spriteAtlas.GetSprite("Btn_button02_p");
        others[0].GetComponent<ShipInfomation>().unBoughtYet = spriteAtlas.GetSprite("Btn_button02_Yellow");
    }
}
