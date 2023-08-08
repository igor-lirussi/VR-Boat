using UnityEngine;
using UnityEngine.EventSystems;

public class VirtualJoystickScript : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public Transform stick; // The stick's transform
    public float stickRadius = 50f; // Radius of the stick's movement area
    private Vector2 stickCenter; // Center of the stick's movement area

    private Vector2 inputDirection = Vector2.zero; // Direction of the input

    private void Start()
    {
        stickCenter = transform.position; // Store the center position of the joystick area
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 touchPosition = eventData.position;

        // Calculate the distance between the touch position and the center of the stick's movement area
        Vector2 offset = touchPosition - stickCenter;

        // If the touch is within the stick's movement area
        if (offset.sqrMagnitude <= stickRadius * stickRadius)
        {
            // Move the stick to the touch position
            stick.position = touchPosition;

            // Calculate the input direction based on the offset from the center
            inputDirection = offset.normalized;
        }
        else
        {
            // If the touch is outside the stick's movement area, clamp it to the edge
            stick.position = stickCenter + offset.normalized * stickRadius;

            // Set the input direction to the maximum value along the edge
            inputDirection = offset.normalized;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        // Reset the joystick when the pointer is lifted
        stick.position = stickCenter;
        inputDirection = Vector2.zero;
    }

    // You can access the input direction from other scripts
    public Vector2 GetInputDirection()
    {
        return inputDirection;
    }
}

