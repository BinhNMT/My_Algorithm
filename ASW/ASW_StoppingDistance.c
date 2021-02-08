/*
* ASW_StoppingDistance.c
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#include <stdio.h>
#include "ASW_StoppingDistance.h"
#include "ASW_ConfigParameters.h"

float brakingDistance(float p_velocity,
                      float p_frictionCoeff)
{
    /*                                        velocity^2
    *   Braking Distance =  ------------------------------------------------
    *                       ( 2 x Friction_Coefficent x Gravity_Accelerate )
    *
    *   Deceleration = Friction_Coefficent x Gravity_Accelerate
    */
    float brkDistance = (p_velocity * p_velocity) / (2 * DECEL);
    return brkDistance;
}

float reactionDistance(float p_velocity)
{
    /*
    *   Reaction Distance =  Velocity * Reaction_Time
    */
    float reactDistance = p_velocity * REACTTIME;
    return reactDistance;
}

/*
*   Stopping_Distance = Reaction_Distance + Braking_Distance
*/
float stoppingDistance(float p_velocity,
                       float p_frictionCoeff)
{
    float distance;
    distance = brakingDistance(p_velocity, p_frictionCoeff) + reactionDistance(p_velocity);
    return distance;
}