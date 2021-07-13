using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EnemyType
{
    Blue,
    Green,
    Yellow,
    Red
}

public class MiniBoss : MonoBehaviour
{
    public GameObject Enemy;

    public GameObject EnemyBullet;

    private void Start()
    {
        StartCoroutine(SpawnEnemy(EnemyType.Blue));
    }

    public void MoveUpAndDown()
    {

    }

    public void Spawn(EnemyType enemyType)
    {
        StartCoroutine(SpawnEnemy(enemyType));
    }

    private IEnumerator SpawnEnemy(EnemyType enemyType)
    {
        yield return new WaitForSeconds(0.5f);
        Instantiate(Enemy, this.transform.position, Quaternion.identity);

        switch (enemyType)
        {
            case EnemyType.Blue:
                {
                    Enemy.AddComponent<BlueEnemy>();
                    break;
                }
            case EnemyType.Green:
                {
                    Enemy.AddComponent<GreenEnemy>();
                    break;
                }
            case EnemyType.Yellow:
                {
                    Enemy.AddComponent<YellowEnemy>();
                    break;
                }
            case EnemyType.Red:
                {
                    Enemy.AddComponent<RedEnemy>();
                    break;
                }
        }

    }

    private void Update()
    {
        
    }
}
