using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExperienceScript : MonoBehaviour
{
    public bool visitedAreaPolarbear { get; set; } = false;
    public bool visitedAreaNature { get; set; } = false;
    public bool visitedAreaUrban { get; set; } = false;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (visitedAreaPolarbear && visitedAreaNature && visitedAreaUrban)
        {
            Invoke("riseSea", 10.0f);
            visitedAreaPolarbear = false;
            visitedAreaNature = false;
            visitedAreaUrban = false;
        }
    }

    public void riseSea()
    {
        Debug.LogWarning("********* Rising Sea ");
        GameObject.Find("Boat").transform.position += new Vector3(0, 2, 0);
        GameObject.Find("Sea").transform.position += new Vector3(0, 2, 0);
    }
}
    
