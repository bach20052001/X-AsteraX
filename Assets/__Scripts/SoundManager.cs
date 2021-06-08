using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private AudioSource audioSource;

    public AudioClip Shoot;

    public AudioClip ShipExplosion;

    public AudioClip AsteroidExplosion;

    public AudioClip nextLevel;

    private void Start()
    {

        audioSource = GetComponent<AudioSource>();

        this.RegisterListener(Event.OnPlayerDamaged, (param) => OnPlayerDamagedHandler());
        this.RegisterListener(Event.OnPlayerFired, (param) => OnPlayerFiredHandler());
        this.RegisterListener(Event.OnHitAsteroid, (param) => OnHitAsteroid());
        this.RegisterListener(Event.OnNextLevel, (param) => OnNextLevel());
    }

    private void OnNextLevel()
    {
        audioSource.PlayOneShot(nextLevel);
    }

    private void OnHitAsteroid()
    {
        audioSource.PlayOneShot(AsteroidExplosion);
    }

    private void OnPlayerFiredHandler()
    {
        audioSource.PlayOneShot(Shoot);
    }

    private void OnPlayerDamagedHandler()
    {
        audioSource.PlayOneShot(ShipExplosion);
    }
}
