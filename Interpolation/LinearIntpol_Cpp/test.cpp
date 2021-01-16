#include <iostream>
#include <stdlib.h>
#include "LinearIntpol.h"

int main(int argc, char *argv[])
{
    int expected = atoi(argv[1]);
    float Ax = 2, Ay = 2;
    float Bx = 7, By = 5;

    LinearIntpol instance;

    std::cout << instance.interpolate(Ax, Ay, Bx, By, expected) << std::endl;

    return 0;
}