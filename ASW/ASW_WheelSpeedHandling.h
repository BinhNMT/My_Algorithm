/*
* ASW_WheelSpeedHandling.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#ifndef ASW_WHEELSPEEDHANDLING_H
#define ASW_WHEELSPEEDHANDLING_H

#include "ASW_VehicleState.h"

#define PI 3.14

// @brief: - Counting up once per external interrupt from
//           wheel speed sensor (encoder) trigger to record
//           the wheel speed in run-time.
//
void setCounter(struct VehicleState *ptrVehicleState);

// @brief: - Calculate the Vehicle speed based on wheel speed.
//         - The speed calculated just only applied for non-braking phase.
//         - Reset the counter after calulated.
//
void calcVehicleSpeed(struct VehicleState *ptrVehicleState);

#endif /* ASW_WHEELSPEEDHANDLING_H */