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
    private bool soundForAreas = true; // used to TEMPORARY deactivate sound of enter&exit areas
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
            //set all areas to false to avoid reenter in this if in the next update
            visitedAreaPolarbear = false;
            visitedAreaNature = false;
            visitedAreaUrban = false;
            //call functions with delay
            if (!seaRised)
            {
                Invoke("riseSea", 90.0f);
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
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(enterPolarbearArea, volume);
            temporaryDeactivateSoundForAreaTrigger();
        }
    }
    public void setExitAreaPolarbear()
    {
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(exitPolarbearArea, volume);
        }
    }

    //NATURE AREA
    public void setVisitedAreaNature()
    {
        visitedAreaNature = true;
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(enterNatureArea, volume);
            temporaryDeactivateSoundForAreaTrigger();
        }
    }
    public void setExitAreaNature()
    {
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(exitNatureArea, volume);
        }
    }

    //URBAN AREA
    public void setVisitedAreaUrban()
    {
        visitedAreaUrban = true;
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(enterUrbanArea, volume);
            temporaryDeactivateSoundForAreaTrigger();
        }
    }
    public void setExitAreaUrban()
    {
        if (playAudio && soundForAreas)
        {
            playerAudioSource.PlayOneShot(exitUrbanArea, volume);
        }
    }


    public void riseSea()
    {
        temporaryDeactivateSoundForAreaTrigger();
        Debug.Log("********* Moving boat to start position");
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

    private void temporaryDeactivateSoundForAreaTrigger()
    {
        soundForAreas = false;
        Debug.Log("********* Sound for areas NOT active");
        Invoke("activateSoundForAreaTriggers", 5.0f);
    }

    private void activateSoundForAreaTriggers()
    {
        Debug.Log("********* Sound for areas active");
        soundForAreas = true;
    }
}
    
