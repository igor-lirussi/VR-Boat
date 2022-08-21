using UnityEngine;
using System.Collections;

public class BoatController : MonoBehaviour
{
  public PropellerBoats ship;
  bool forward = true;

  void Update()
  {

    if (Input.GetKey(KeyCode.Q))
      ship.RudderLeft();
    if (Input.GetKey(KeyCode.D))
      ship.RudderRight();

    if (forward)
    {
      if (Input.GetKey(KeyCode.Z))
        ship.ThrottleUp();
      else if (Input.GetKey(KeyCode.S))
      {
        ship.ThrottleDown();
        ship.Brake();
      }
    }
    else
    {
      if (Input.GetKey(KeyCode.S))
        ship.ThrottleUp();
      else if (Input.GetKey(KeyCode.Z))
      {
        ship.ThrottleDown();
        ship.Brake();
      }
    }

    if (!Input.GetKey(KeyCode.Z) && !Input.GetKey(KeyCode.S))
      ship.ThrottleDown();

    if (ship.engine_rpm == 0 && Input.GetKeyDown(KeyCode.S) && forward)
    {
      forward = false;
      ship.Reverse();
    }
    else if (ship.engine_rpm == 0 && Input.GetKeyDown(KeyCode.Z) && !forward)
    {
      forward = true;
      ship.Reverse();
    }
  }

}
