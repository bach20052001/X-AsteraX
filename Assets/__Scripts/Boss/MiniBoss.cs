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

    private Vector3 outScreenPos;

    public GameObject Enemy;

    private int point;

    private float speed = 10f;

    public GameObject EnemyBullet;

    public bool isUp = true;

    private void Start()
    {
        downDestination = this.transform.position - Vector3.down;
        upDestination = this.transform.position + Vector3.up * 5f;
        outScreenPos = this.transform.position + Vector3.right * 5f;
        point = 2000;

        StartCoroutine(SpawnEnemy(EnemyType.Blue));
    }

    public void MoveUpAndDown()
    {
        if (isUp)
        {
            MoveToPos(upDestination);
        }
        else
        {
            MoveToPos(downDestination);
        }

        isUp = !isUp;
    }

    public void MoveOut()
    {
        StartCoroutine(MoveTo(outScreenPos));
    }

    public void MoveToPos(Vector3 position)
    {
        StartCoroutine(MoveTo(position));
    }

    private IEnumerator MoveTo(Vector3 pos)
    {   while (Vector3.Distance(this.transform.position, pos) > 0.1f)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, pos, Time.deltaTime * speed);
            yield return new WaitForEndOfFrame();
        }

        yield return new WaitForSeconds(1f);

        if (pos == outScreenPos)
        {
            this.PostEvent(Event.OnDestroyedBoss, point);
            Destroy(gameObject);
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
}
