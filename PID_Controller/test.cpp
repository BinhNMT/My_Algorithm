#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "PID.h"

#define Ts              0.01f
#define SP              40.0f
#define KP              2
#define KI              0.5
#define KD              0.25
#define PID_LIM_MIN     -100.0f
#define PID_LIM_MAX     100.0f

float update(float inp) 
{
    static float output = 0.0f;
    static const float alpha = 0.02f;

    output = (Ts * inp + output) / (1.0f + alpha * Ts);

    return output;
}

int main(int argc, char *argv[])
{
    PID instance;
    float res;
    float measure;

    instance.setPivot(SP);
    instance.setSystemCoefficient(Ts, 
                                  KP, 
                                  KI, 
                                  KD, 
                                  PID_LIM_MAX, 
                                  PID_LIM_MIN);

    for (float t = 0.0f; t <= 4.0f; t += Ts)
    {
        measure = update(res);
        res = instance.PIDProcessor(measure);
        
        printf("%f\t%f\t%f\r\n", t, measure, res);
    }

    return 0;
}