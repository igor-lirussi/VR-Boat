using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class ExperienceScript : MonoBehaviour
{
    //variables
    public bool visitedAreaPolarbear = false;
    public bool visitedAreaNature = false;
    public bool visitedAreaUrban = false;
    public TextMeshPro debugText;

    public int seaLevelRisingMeters = 10;

    public bool tempBreakScene = true;

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

        if (!GlobalVariables.SeaRisen)
        {
            if (playAudio)
            {
                playerAudioSource.PlayOneShot(initialClip, volume);
            }
        }
        else
        {
            riseSea();
        }
    }

    // Update is called once per frame
    void Update()
    {
        debugText.text = string.Format("Artic: {0}\nNature: {1}\nUrban: {2}", visitedAreaPolarbear?"X":" ", visitedAreaNature?"X":" ", visitedAreaUrban?"X":" ");
        if (visitedAreaPolarbear && visitedAreaNature && visitedAreaUrban)
        {
            //set all areas to false to avoid reenter in this if in the next update
            visitedAreaPolarbear = false;
            visitedAreaNature = false;
            visitedAreaUrban = false;
            //call functions with delay
            if (!GlobalVariables.SeaRisen)
            {
                if (tempBreakScene)
                {
                    Invoke("loadTempBreakScene", 30.0f);
                } else {
                    Invoke("riseSea", 30.0f);
                }
            } else
            {
                Invoke("endExperience", 30.0f);
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

    public void loadTempBreakScene()
    {
        Debug.Log("********* Loading TempBreakScene");
        SceneManager.LoadSceneAsync("TempBreakScene");
        //SceneManager.LoadSceneAsync("TempBreakScene", LoadSceneMode.Additive);
    }

    public void riseSea()
    {
        temporaryDeactivateSoundForAreaTrigger();
        Debug.Log("********* Moving boat to start position"); //moving boat might start area triggers
        GameObject.Find("Boat").transform.position = initialBoatPosition;
        GameObject.Find("Boat").transform.rotation = initialBoatRotation;

        Debug.LogWarning("********* Rising Sea ");
        GlobalVariables.SeaRisen = true;
        GameObject.Find("Boat").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
        GameObject.Find("Sea").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(seaRiseClip, volume);
        }
        visitedAreaPolarbear = false;
        visitedAreaNature = false;
        visitedAreaUrban = false;
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
        Debug.Log("* Sound for areas NOT active *");
        Invoke("activateSoundForAreaTriggers", 5.0f);
    }

    private void activateSoundForAreaTriggers()
    {
        Debug.Log("* Sound for areas active *");
        soundForAreas = true;
    }
}
    
