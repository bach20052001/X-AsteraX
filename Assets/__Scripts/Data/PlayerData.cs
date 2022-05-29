using System;
using System.Collections.Generic;

[Serializable]
public class PlayerData
{
    public int selectedIndex = -1;
    public List<int> bought = new List<int>();

    public int point;

    public int level;

    public int coin;
}

