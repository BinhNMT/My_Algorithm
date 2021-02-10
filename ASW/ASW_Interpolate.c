/*
* ASW_Interpolate.c
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#include <stdio.h>
#include "ASW_Interpolate.h"
#include "ASW_ConfigParameters.h"

// @brief: Interpolate vehicle speed per cycle-time.
//
void interpolVehicleSpeed(struct VehicleState *ptrVehicleState)
{
    float newSpeed;
    
    /*
    *                        Previous_Vehicle_Speed
    *   Current_Speed = ---------------------------------
    *                   Decelerate x Cycle_Interrupt_Time
    */
    newSpeed = ptrVehicleState->vehicleSpeed - (DECEL * CYCLETIME);

    // Set current speed to previous speed
    ptrVehicleState->vehicleSpeed = newSpeed;
}