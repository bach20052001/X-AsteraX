using System.Collections;
using System.Collections.Generic;
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
    public List<Enemy_SO> ListEnemyData = new List<Enemy_SO>();

    public Dictionary<EnemyType, Enemy_SO> EnemiesData = new Dictionary<EnemyType, Enemy_SO>();

    public Enemy_SO currentData;

    private int numberOfCurrentEnemy;

    private Vector3 upDestination;

    public MiniBoss_SO bossData;

    private Vector3 downDestination;

    private Vector3 outScreenPos;

    public GameObject EnemyPrefab;
    private GameObject enemy;

    private int point;

    private float speed = 10f;

    public bool isUp = true;

    private int currenEnemy;

    private void Awake()
    {
        ListEnemyData = LoadDatabase.Instance.data_enemy;
        //EnemyPrefab = LoadDatabase.Instance.enemy;
        bossData = LoadDatabase.Instance.data_miniboss;

        currenEnemy = 1;
        numberOfCurrentEnemy = bossData.EnemyList[currenEnemy];

        downDestination = this.transform.position - Vector3.down;
        upDestination = this.transform.position + Vector3.up * 5f;
        outScreenPos = this.transform.position + Vector3.right * 5f;
        point = 2000;

        for (int i = 0; i < ListEnemyData.Count; i++)
        {
            EnemiesData[(EnemyType)(i + 1)] = ListEnemyData[i];
        }

        currentData = EnemiesData[(EnemyType)currenEnemy];

        this.RegisterListener(GameEvent.OnDestroyedEnemy, (param) => OnDestroyedEnemy());

        StartCoroutine(SpawnEnemy((EnemyType)currenEnemy));
    }

    private void Update()
    {
//#if UNITY_EDITOR
        if (Input.GetKeyDown(KeyCode.O))
        {
            DestroySelf();
        }
//#endif
    }

    public void DestroySelf()
    {
        AsteraX.S.isBossAppear = false;
        Destroy(enemy);
        MoveOut();
    }

    private void OnDestroyedEnemy()
    {
        Debug.Log("OnDestroyHandler");
        numberOfCurrentEnemy--;

        if (numberOfCurrentEnemy == 0)
        {
            currenEnemy++;

            if (currenEnemy > (int)EnemyType.Red)
            {
                MoveOut();
            }
            else
            {
                StartCoroutine(SpawnEnemy((EnemyType)currenEnemy));
                numberOfCurrentEnemy = bossData.EnemyList[currenEnemy];
            }
        }
        else if (numberOfCurrentEnemy > 0)
        {
            StartCoroutine(SpawnEnemy((EnemyType)currenEnemy));
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
//#if UNITY_EDITOR
            AsteraX.S.isBossAppear = false;
//#endif
            this.PostEvent(GameEvent.OnDestroyedMiniBoss, point);
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

        Debug.Log("Spawn");

        yield return new WaitForEndOfFrame();

        currentData = EnemiesData[enemyType];

        enemy.AddComponent<Enemy>();

        yield break;
    }
}
