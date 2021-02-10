/*
* ASW_WheelSpeedHandling.c
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#include <stdio.h>
#include "ASW_WheelSpeedHandling.h"
#include "ASW_ConfigParameters.h"

void setCounter(struct VehicleState *ptrVehicleState)
{
    ptrVehicleState->counter++;
}

void calcVehicleSpeed(struct VehicleState *ptrVehicleState)
{
    float round;
    float roundPerSecond;
    
    /*
    *                   Counted_Solution
    *   Turned_Round = ------------------
    *                   Encoder_Solution
    */
    round = ptrVehicleState->counter / TEETHCOUNT;

    /*
    *                   Turned_Round
    *   Wheel_RPM = ---------------------
    *               Cylcle_Interrupt_Time
    */
    roundPerSecond = round / CYCLETIME;

    /*
    *   Vehicle_Speed = 2 * pi * Wheel_RPM * Wheel_Radius
    */
    ptrVehicleState->vehicleSpeed = 2 * PI * roundPerSecond * W_RADIUS;

    // Reset counter
    ptrVehicleState->counter = 0;
}