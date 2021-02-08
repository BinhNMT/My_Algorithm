#include <stdio.h>
#include <stdlib.h>
#include "ASW_StoppingDistance.h"

int main(int argc, char* argv[])
{
    int velocity = atoi(argv[1]);
    
    float tc1 = brakingDistance((float)velocity, FRICTCOEFF_DRY);
    printf("Braking Distance = %f\n", tc1);
    
    return 0;
}