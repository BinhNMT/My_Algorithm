/*
* ASW_StoppingDistance.c
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#include <stdio.h>
#include "ASW_StoppingDistance.h"

float brakingDistance(float velocity,
                      float frictionCoeff)
{
    /*                                        velocity^2
    *   Braking Distance =  ------------------------------------------------
    *                       ( 2 x Friction_Coefficent x Gravity_Accelerate )
    */
    float brkDistance = (velocity * velocity) / (2 * frictionCoeff * G);
    return brkDistance;
}

float reactionDistance(float velocity)
{
    /*
    *   Reaction Distance =  Velocity * Reaction_Time
    */
    float reactDistance = velocity * REACTTIME;
    return reactDistance;
}

/*
*   Stopping_Distance = Reaction_Distance + Braking_Distance
*/
float stoppingDistance(float velocity,
                       float frictionCoeff)
{
    float distance;
    distance = brakingDistance(velocity, frictionCoeff) + reactionDistance(velocity);
    return distance;
}