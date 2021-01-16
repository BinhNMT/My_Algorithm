#include <stdio.h>
#include <stdlib.h>
#include "LinearIntpol.h"

int main(int argc, char *argv[])
{
    int expected = atoi(argv[1]);
    float result = 0;
    float Ax = 2, Ay = 2;
    float Bx = 7, By = 5;

    result = interpolate(Ax, Ay, Bx, By, expected);

    printf("%f\n", result);

    return 0;
}