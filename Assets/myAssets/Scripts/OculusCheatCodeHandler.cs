using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.SceneManagement;
using TMPro;

public class OculusCheatCodeHandler : MonoBehaviour
{
    private float timeLimit = 5f;
    private float timeElapsed = 0f;
    private string inputString = "";
    public XRNode inputSource = XRNode.LeftHand;
    public string codeSeaRise = "xyxy";
    public string nextSceneName = "MainScene";
    public string codeBoostBoat = "yyyxxxyyy";

    private bool leftXisDown = false;
    private bool leftXwasDown = false;
    private bool leftYisDown = false;
    private bool leftYwasDown = false;
    public TextMeshPro debugText;

    void Update()
    {
        // increment the time elapsed
        timeElapsed += Time.deltaTime;

        // check if the time limit has been exceeded
        if (timeElapsed > timeLimit)
        {
            // reset the input string and time elapsed if the time limit has been exceeded
            inputString = "";
            timeElapsed = 0f;
        }

        InputDevice device = InputDevices.GetDeviceAtXRNode(inputSource);
        leftXwasDown = leftXisDown;
        leftYwasDown = leftYisDown;
        device.TryGetFeatureValue(CommonUsages.primaryButton, out leftXisDown);
        device.TryGetFeatureValue(CommonUsages.secondaryButton, out leftYisDown);
        bool leftXpressed = (leftXisDown && !leftXwasDown) || Input.GetKeyDown(KeyCode.X);
        bool leftYpressed = (leftYisDown && !leftYwasDown) || Input.GetKeyDown(KeyCode.Y);
        //debugText.text = string.Format("X {0} {1}\n Y {2} {3}\n{4}", leftXwasDown,leftXisDown,leftYwasDown,leftYisDown,inputString);

        // check if the buttons are being pressed on controllers
        if (leftXpressed || leftYpressed)
        {
            //reset time elapsed from last press
            timeElapsed = 0f;
            // add the most recent button press to the input string
            if (leftXpressed) inputString += "x";
            if (leftYpressed) inputString += "y";

            Debug.Log("Cheat String: "+inputString);

            // check if the input string matches the cheat code
            if (inputString.Equals(codeSeaRise))
            {
                // reset the input string and time elapsed
                inputString = "";
                timeElapsed = 0f;
                // execute the cheat code behavior
                Debug.Log("Cheat code activated for SeaRise");
                //  code desired behavior
                Debug.Log("********* Set SeaRisen var to true ");
                GlobalVariables.SeaRisen = true;
                Debug.Log("********* Next Scene ");
                if (nextSceneName != null && !nextSceneName.Equals(""))
                {
                    Debug.Log("********* Next Scene " + nextSceneName);
                    SceneManager.LoadSceneAsync(nextSceneName);
                }
                else
                {
                    Debug.LogWarning("********* Next Scene not set!");
                }
            }
            // check if the input string matches the cheat code
            if (inputString.Equals(codeBoostBoat))
            {
                // reset the input string and time elapsed
                inputString = "";
                timeElapsed = 0f;
                // execute the cheat code behavior
                Debug.Log("Cheat code activated for BoostBoat");
                GameObject.Find("Boat").GetComponent<Rigidbody>().mass = 10000;
            }
        }
    }
}
