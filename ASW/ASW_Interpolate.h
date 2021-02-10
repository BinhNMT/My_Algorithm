/*
* ASW_Interpolate.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#ifndef ASW_INTERPOLATE_H
#define ASW_INTERPOLATE_H

#include "ASW_VehicleState.h"

// @brief: Interpolate vehicle speed per cycle-time.
//
void interpolVehicleSpeed(struct VehicleState *ptrVehicleState);

#endif /* ASW_INTERPOLATE_H */