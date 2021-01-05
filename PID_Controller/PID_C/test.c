#include <stdio.h>
#include "PID.h"

#define Ts      0.01f
#define SP      40.0f
#define KP      2
#define KI      0.5
#define KD      0.25

#define PID_LIM_MIN -40.0f
#define PID_LIM_MAX  40.0f

float update(float inp) {

    static float output = 0.0f;
    static const float alpha = 0.02f;

    output = (Ts * inp + output) / (1.0f + alpha * Ts);

    return output;
}

int main(int argc, char *argv[])
{
    struct PID instance;
    float res;
    float measure;
    unsigned int count = 0;

    setPivot(&instance, SP);
    setSystemCoefficient(&instance, 
                         Ts, 
                         KP, 
                         KI, 
                         KD, 
                         PID_LIM_MAX, 
                         PID_LIM_MIN);

    for (float t = 0.0f; t <= 4.0f; t += Ts)
    {
        measure = update(res);
        res = PIDProcessor(&instance, measure);
        printf("%d\t%f\t%f\t%f\r\n", count, t, measure, res);
        count++;
    }

    return 0;
}