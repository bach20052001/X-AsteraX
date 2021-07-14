using System.Collections;
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
    private Vector3 upDestination;

    private Vector3 downDestination;

    public GameObject Enemy;

    private float speed = 10f;

    public GameObject EnemyBullet;

    public bool isUp = true;

    private void Start()
    {
        StartCoroutine(SpawnEnemy(EnemyType.Blue));
        downDestination = this.transform.position - Vector3.down;
        upDestination = this.transform.position + Vector3.up * 5f;
    }

    public void MoveUpAndDown()
    {
        if (isUp)
        {
            StartCoroutine(MoveUp());
        }
        else
        {
            StartCoroutine(MoveDown());
        }

        isUp = !isUp;
    }

    private IEnumerator MoveUp()
    {   while (Vector3.Distance(this.transform.position, upDestination) > 0.5f)
        {
            transform.Translate(speed * Time.deltaTime * Vector3.up);
            yield return new WaitForEndOfFrame();
        }
        yield return null;
    }

    private IEnumerator MoveDown()
    {
        while (Vector3.Distance(this.transform.position, downDestination) > 0.5f)
        {
            transform.Translate(speed * Time.deltaTime * Vector3.down);
            yield return new WaitForEndOfFrame();
        }
        yield break;
    }

    public void Spawn(EnemyType enemyType)
    {
        StartCoroutine(SpawnEnemy(enemyType));
    }

    private IEnumerator SpawnEnemy(EnemyType enemyType)
    {
        MoveUpAndDown();
        yield return new WaitForSeconds(1f);
        GameObject enemy = Instantiate(Enemy, this.transform.position, Quaternion.identity);

        switch (enemyType)
        {
            case EnemyType.Blue:
                {
                    enemy.AddComponent<BlueEnemy>();
                    break;
                }
            case EnemyType.Green:
                {
                    enemy.AddComponent<GreenEnemy>();
                    break;
                }
            case EnemyType.Yellow:
                {
                    enemy.AddComponent<YellowEnemy>();
                    break;
                }
            case EnemyType.Red:
                {
                    enemy.AddComponent<RedEnemy>();
                    break;
                }
        }
        yield break;
    }

    private void OnDestroy()
    {
        this.PostEvent(Event.OnDestroyedBoss);
    }
}
