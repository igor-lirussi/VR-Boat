using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExperienceScript : MonoBehaviour
{
    //variables
    public bool visitedAreaPolarbear = false;
    public bool visitedAreaNature = false;
    public bool visitedAreaUrban = false;

    public int seaLevelRisingMeters = 10;
    private bool seaRised = false;

    public bool playAudio = false;
    private float volume = 0.8f;
    public AudioSource playerAudioSource;
    public AudioClip initialClip;
    public AudioClip enterPolarbearArea;
    public AudioClip exitPolarbearArea;
    public AudioClip enterNatureArea;
    public AudioClip exitNatureArea;
    public AudioClip enterUrbanArea;
    public AudioClip exitUrbanArea;
    public AudioClip seaRiseClip;
    public AudioClip finishClip;

    private Vector3 initialBoatPosition;
    private Quaternion initialBoatRotation;



    // Start is called before the first frame update
    void Start()
    {
        initialBoatPosition = this.transform.position;
        initialBoatRotation = this.transform.rotation;

        if (playAudio)
        {
            playerAudioSource.PlayOneShot(initialClip, volume);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (visitedAreaPolarbear && visitedAreaNature && visitedAreaUrban)
        {
            visitedAreaPolarbear = false;
            visitedAreaNature = false;
            visitedAreaUrban = false;
            if (!seaRised)
            {
                Invoke("riseSea", 30.0f);
            } else
            {
                Invoke("endExperience", 10.0f);
            }
        }
    }

    //POLAR BEAR AREA
    public void setVisitedAreaPolarbear()
    {
        visitedAreaPolarbear = true;
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(enterPolarbearArea, volume);
        }
    }
    public void setExitAreaPolarbear()
    {
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(exitPolarbearArea, volume);
        }
    }

    //NATURE AREA
    public void setVisitedAreaNature()
    {
        visitedAreaNature = true;
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(enterNatureArea, volume);
        }
    }
    public void setExitAreaNature()
    {
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(exitNatureArea, volume);
        }
    }

    //URBAN AREA
    public void setVisitedAreaUrban()
    {
        visitedAreaUrban = true;
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(enterUrbanArea, volume);
        }
    }
    public void setExitAreaUrban()
    {
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(exitUrbanArea, volume);
        }
    }


    public void riseSea()
    {
        Debug.Log("********* Moving boat to start posiiton");
        GameObject.Find("Boat").transform.position = initialBoatPosition;
        GameObject.Find("Boat").transform.rotation = initialBoatRotation;

        Debug.LogWarning("********* Rising Sea ");
        seaRised = true;
        GameObject.Find("Boat").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
        GameObject.Find("Sea").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(seaRiseClip, volume);
        }
    }

    public void endExperience()
    {
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(finishClip, volume);
        }
    }
}
    
