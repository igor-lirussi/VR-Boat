using UnityEngine;
using System.Collections;
using UnityEngine.XR;   
using TMPro;
using System;

public class BoatVRController : MonoBehaviour
{
  public PropellerBoats ship;
  bool forward = true;

  public XRNode inputSource;
  public TextMeshPro debugText;
  private Vector2 inputAxis;
  private bool up = false;
  private bool down = false;
  private bool left = false;
  private bool right = false;
  //private float threshold = 0.5f;
  private float power = 0; //power given from the player, from -1 to 1
  public AudioSource engineAudioSource;

  void Update()
  {
    //get input
    InputDevice device = InputDevices.GetDeviceAtXRNode(inputSource);
    device.TryGetFeatureValue(CommonUsages.primary2DAxis, out inputAxis);
    //find direction to move boat
    right=inputAxis[0]>0.5 || Input.GetKey(KeyCode.RightArrow);
    left=inputAxis[0]<-0.5 || Input.GetKey(KeyCode.LeftArrow);
    
    up=inputAxis[1]>0.5 || Input.GetKey(KeyCode.UpArrow);
    down=inputAxis[1]<-0.5 || Input.GetKey(KeyCode.DownArrow);
    //set power 
    power = inputAxis[1];
    engineAudioSource.volume = Math.Abs(power);

    debugText.text=string.Format("right {0}\n left {1}\n up {2}\n down {3}", right, left, up, down);
    debugText.text=string.Format("throttle {0}\n engine rmp {1}\n", ship.throttle, ship.engine_rpm);
    debugText.text=string.Format("power {0}\n volume {1}\n", power, engineAudioSource.volume);

    if (left)
      ship.RudderLeft();
    if (right)
      ship.RudderRight();

    if (forward)
    {
      if (up)
        ship.ThrottleUp();
      else if (down)
      {
        ship.ThrottleDown();
        ship.Brake();
      }
    }
    else
    {
      if (down)
        ship.ThrottleUp();
      else if (up)
      {
        ship.ThrottleDown();
        ship.Brake();
      }
    }

    if (!up && !down)
      ship.ThrottleDown();
      ship.Brake();

    if (ship.engine_rpm == 0 && down && forward)
    {
      forward = false;
      ship.Reverse();
    }
    else if (ship.engine_rpm == 0 && up && !forward)
    {
      forward = true;
      ship.Reverse();
    }


  }

}
