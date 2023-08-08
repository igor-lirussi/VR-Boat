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
  public UnityEngine.UI.Image virtualJoystick;
  private Vector2 inputAxis;
  private bool up = false;
  private bool down = false;
  private bool left = false;
  private bool right = false;
  //private float threshold = 0.5f;
  public AudioSource engineAudioSource;

  void Update()
  {
    //get input
    InputDevice device = InputDevices.GetDeviceAtXRNode(inputSource);
    device.TryGetFeatureValue(CommonUsages.primary2DAxis, out inputAxis);
    Vector2 joystick = virtualJoystick.GetComponent<VirtualJoystickScript>().GetInputDirection();
    //find direction to move boat
    right = inputAxis[0]>0.5 || Input.GetKey(KeyCode.RightArrow) || joystick.x>0.5;
    left = inputAxis[0]<-0.5 || Input.GetKey(KeyCode.LeftArrow) || joystick.x<-0.5;
    
    up = inputAxis[1]>0.5 || Input.GetKey(KeyCode.UpArrow) || joystick.y>0.5;
    down = inputAxis[1]<-0.5 || Input.GetKey(KeyCode.DownArrow) || joystick.y<-0.5;
    
    //set volume
    engineAudioSource.volume = Math.Abs(inputAxis[1]);

    //set debug text
    //debugText.text=string.Format("throttle {0}\n engine rmp {1}\n", ship.throttle, ship.engine_rpm);
    //debugText.text=string.Format("rudder {0}\n angle {1}\n", ship.rudder, ship.angle);

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
