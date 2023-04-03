using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionSound : MonoBehaviour
{
    public AudioSource playerAudioSource;
    public float volume=0.5f;
    
    public AudioClip clip1;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision collision) 
    {
        if(string.Equals(collision.gameObject.tag,"rock")) 
        {   
            Debug.Log("********* hit");
            playerAudioSource.clip = clip1;
            playerAudioSource.PlayOneShot(clip1,volume);
        } 
    }
}
