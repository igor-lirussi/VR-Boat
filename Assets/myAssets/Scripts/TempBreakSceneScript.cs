using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TempBreakSceneScript : MonoBehaviour
{
    public bool playAudio = true;
    private float volume = 0.8f;
    public AudioSource playerAudioSource;
    public AudioClip initialClip;

    public float seconds = 10f;
    public string nextSceneName;



    // Start is called before the first frame update
    void Start()
    {
        //SceneManager.SetActiveScene(SceneManager.GetSceneByName("TempBreakScene"));
        if (playAudio)
        {
            playerAudioSource.PlayOneShot(initialClip, volume);
        }
        Invoke("goNextScene", seconds);
    }

    // Update is called once per frame
    void Update()
    {
    }

    //go NEXT SCENE
    public void goNextScene()
    {
        Debug.Log("********* Set SeaRisen var to true ");
        GlobalVariables.SeaRisen = true;
        Debug.Log("********* Next Scene ");
        if (nextSceneName != null && !nextSceneName.Equals(""))
        {
            Debug.Log("********* Next Scene " + nextSceneName);
            SceneManager.LoadSceneAsync(nextSceneName);
            //SceneManager.SetActiveScene(SceneManager.GetSceneByName(nextSceneName));
            //SceneManager.UnloadSceneAsync("TempBreakScene");
        }
        else
        {
            Debug.LogWarning("********* Next Scene not set!");
        }
    }

}
    
