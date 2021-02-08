/*
* ASW_Interpolate.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#include <stdio.h>
#include "ASW_Interpolate.h"
#include "ASW_ConfigParameters.h"

// @brief: Interpolate vehicle speed per cycle-time.
//
float interpolVehicleSpeed(struct VehicleState *ptrVehicleState)
{
    float currentSpeed;
    
    /*
    *                        Previous_Vehicle_Speed
    *   Current_Speed = ---------------------------------
    *                   Decelerate x Cycle_Interrupt_Time
    */
    currentSpeed = ptrVehicleState->prevSpeed - (DECEL * CYCLETIME);

    // Set current speed to previous speed
    ptrVehicleState->prevSpeed = currentSpeed;
    
    return currentSpeed;
}