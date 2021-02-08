#include <stdio.h>
#include <stdlib.h>
#include "ASW_StoppingDistance.h"
#include "ASW_ConfigParameters.h"
#include "ASW_Interpolate.h"

int main(int argc, char* argv[])
{
    int velocity = atof(argv[1]);
    int loop = atoi(argv[2]);
    float tc1;
    float tc2;
    struct VehicleState State;

    State.prevSpeed = velocity;

    tc1 = brakingDistance(velocity, FRICTCOEFF);
    printf("Braking Distance = %f\n", tc1);
    
    for (int i = 0; i < loop; i++)
    {
        tc2 = interpolVehicleSpeed(&State);
        if (tc2 <= 0)
        {
            break;
        }
        printf("Speed = %f\n", tc2);
    }

    return 0;
}