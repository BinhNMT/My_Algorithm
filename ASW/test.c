#include <stdio.h>
#include <stdlib.h>
#include "ASW_StoppingDistance.h"
#include "ASW_ConfigParameters.h"
#include "ASW_Interpolate.h"
#include "ASW_WheelSpeedHandling.h"

void testcase1(struct VehicleState *ptrObj, int loop, float velocity)
{
    float distance  = brakingDistance(velocity, FRICTCOEFF);
    printf("Braking Distance = %f\n", distance);
    
    for (int i = 0; i < loop; i++)
    {
        interpolVehicleSpeed(ptrObj);
        if (ptrObj->vehicleSpeed <= 0)
        {
            break;
        }
        printf("Speed = %f\n", ptrObj->vehicleSpeed);
    }
}

void testcase2(struct VehicleState *ptrObj)
{
    //
}

int main(int argc, char* argv[])
{
    int testcase = atoi(argv[1]);
    int velocity = atof(argv[2]);
    int loop = atoi(argv[3]);
    
    struct VehicleState State;

    State.vehicleSpeed = velocity;

    switch (testcase)
    {
    case 1:
        testcase1(&State, loop, velocity);
        break;
    
    case 2:
        testcase2(&State);
        break;

    default:
        break;
    }

    return 0;
}