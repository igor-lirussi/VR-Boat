using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaPolarbearScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.name == "Boat")
        {
            Debug.Log("********* " + collider.gameObject.name + " entered " + this.name);
            GameObject.Find("Boat").GetComponent<ExperienceScript>().setVisitedAreaPolarbear();
        }
    }

    private void OnTriggerExit(Collider collider)
    {
        if (collider.gameObject.name == "Boat")
        {
            Debug.Log("********* " + collider.gameObject.name + " exit " + this.name);
            GameObject.Find("Boat").GetComponent<ExperienceScript>().setExitAreaPolarbear();
        }
    }
}
