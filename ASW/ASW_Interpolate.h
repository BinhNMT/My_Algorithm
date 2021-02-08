/*
* ASW_Interpolate.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#ifndef ASW_INTERPOLATE_H
#define ASW_INTERPOLATE_H

struct VehicleState
{
    /* data */
    float prevSpeed;     // Previous vehicle speed (m/s)
};

// @brief: Interpolate vehicle speed per cycle-time.
//
float interpolVehicleSpeed(struct VehicleState *ptrVehicleState);

#endif /* ASW_INTERPOLATE_H */