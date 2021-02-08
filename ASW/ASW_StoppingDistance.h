/*
* ASW_StoppingDistance.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#ifndef ASW_STOPPINGDISTANCE_H
#define ASW_STOPPINGDISTANCE_H

// @brief: calculate the distance after the brake is applied.
// @detailed: Braking Distance = velocity^2 / (2 x Friction Coefficent x Gravity Accelerate)
// #param: Velocity (m/s)
//         Friction Coefficent
//
float brakingDistance(float p_velocity,
                      float p_frictionCoeff);

// @brief: calculate the reaction distance covered by the vehicle 
//         due to the reaction time/delay of the driver between the moment 
//         an obstacle is spotted on the road and the moment the brakes are applied.
// #param: Velocity (m/s)
//
float reactionDistance(float p_velocity);

/*
*   _________     |                   |                                   |STOPPED
*   |        \____| Reaction Distance |          Braking Distance         |STOPPED
*   |_  _______  ||-------------------|-----------------------------------|STOPPED
*     |_|     |_| |                   |                                   |STOPPED
*                 |                                                       |STOPPED
*                 |                 Stopping Distance                     |STOPPED
*                 |-------------------------------------------------------|STOPPED
*/

// @brief: calculate the total distance that the vehicle will be stopped.
// @detailed: Stopping Distance = Reaction Distance + Braking Distance.
// #param: Velocity (m/s)
//         Friction Coefficent
//
float stoppingDistance(float p_velocity,
                       float p_frictionCoeff);

#endif /*ASW_STOPPINGDISTANCE_H*/