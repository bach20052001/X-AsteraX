using System;
using System.Collections;
using UnityEngine;

public enum EnemyType
{
    None,
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

    [SerializeField] private GameObject EnemyPrefab;
    private GameObject enemy;

    private int point;

    private float speed = 10f;

    [SerializeField] private GameObject EnemyBullet;

    public bool isUp = true;

    private int startEnemy;

    private void Awake()
    {
        startEnemy = 1;
        downDestination = this.transform.position - Vector3.down;
        upDestination = this.transform.position + Vector3.up * 5f;
        outScreenPos = this.transform.position + Vector3.right * 5f;
        point = 2000;

        this.RegisterListener(Event.OnDestroyedEnemy, (param) => OnDestroyedEnemy());

        StartCoroutine(SpawnEnemy((EnemyType)startEnemy));
    }

    private void Update()
    {
#if UNITY_EDITOR
        if (Input.GetKeyDown(KeyCode.O))
        {
            Destroy(enemy);
            MoveOut();
        }
#endif
    }

    public GameObject InitBullet()
    {
        return EnemyBullet;
    }

    private void OnDestroyedEnemy()
    {
        startEnemy++;

        if (startEnemy > (int)EnemyType.Red)
        {
            MoveOut();
        }
        else
        {
            StartCoroutine(SpawnEnemy((EnemyType)startEnemy));

        }
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
    {
        while (Vector3.Distance(this.transform.position, pos) > 0.1f)
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

        enemy = Instantiate(EnemyPrefab, this.transform.position, Quaternion.identity);

        yield return new WaitForEndOfFrame();
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
