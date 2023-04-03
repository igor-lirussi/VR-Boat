using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExperienceScript : MonoBehaviour
{
    public bool visitedAreaPolarbear = false;
    public bool visitedAreaNature = false;
    public bool visitedAreaUrban = false;
    
    public int seaLevelRisingMeters = 10;

    private Vector3 initialBoatPosition;
    private Quaternion initialBoatRotation;

    // Start is called before the first frame update
    void Start()
    {
        initialBoatPosition = this.transform.position;
        initialBoatRotation = this.transform.rotation;
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

    public void setVisitedAreaPolarbear()
    {
        visitedAreaPolarbear = true;
    }
    public void setVisitedAreaUrban()
    {
        visitedAreaUrban = true;
    }
    public void setVisitedAreaNature()
    {
        visitedAreaNature = true;
    }


    public void riseSea()
    {
        Debug.Log("********* Moving boat to start posiiton");
        GameObject.Find("Boat").transform.position = initialBoatPosition;
        GameObject.Find("Boat").transform.rotation = initialBoatRotation;

        Debug.LogWarning("********* Rising Sea ");
        GameObject.Find("Boat").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
        GameObject.Find("Sea").transform.position += new Vector3(0, seaLevelRisingMeters, 0);
    }
}
    
