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

        this.RegisterListener(GameEvent.PlayerShipDestroyed, (param) => OnPlayerShipDestroyedHandler());
        this.RegisterListener(GameEvent.OnPlayerFired, (param) => OnPlayerFiredHandler());
        this.RegisterListener(GameEvent.OnHitAsteroid, (param) => OnHitAsteroid());
        this.RegisterListener(GameEvent.OnNextLevel, (param) => OnNextLevel());
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

    private void OnPlayerShipDestroyedHandler()
    {
        audioSource.PlayOneShot(ShipExplosion);
    }
}
