/*
*
*
*
*/

#include <stdio.h>
#include "PID.h"

void setPivot(struct PID *ptrPID, float expectedValue)
{
    ptrPID->pivot = expectedValue;
}

void setSystemCoefficient(struct PID *ptrPID, 
                          float sampleTime,
                          float inputKp,
                          float inputKi,
                          float inputKd,
                          float limMaxSeted,
                          float limMinSeted)
{
    ptrPID->time = sampleTime;
    ptrPID->Kp = inputKp;
    ptrPID->Ki = inputKi;
    ptrPID->Kd = inputKd;
    ptrPID->limMax = limMaxSeted;
    ptrPID->limMin = limMinSeted;
}

float PIDProcessor(struct PID *ptrPID, float systemOutput)
{
    // Calculate the actual difference output
    ptrPID->error = ptrPID->pivot - systemOutput;

    ptrPID->Proportional = ptrPID->Kp * ptrPID->error;
    ptrPID->Integration = ptrPID->Ki * (ptrPID->Integration + (ptrPID->error * ptrPID->time));
    ptrPID->Derivaty = ptrPID->Kd * ((ptrPID->error - ptrPID->preError) / ptrPID->time);

    // System processed output
    systemOutput = ptrPID->Proportional + ptrPID->Integration + ptrPID->Derivaty;

    /*
    * Compute output and apply limits
    */
    if (systemOutput > ptrPID->limMax) 
    {
        systemOutput = ptrPID->limMax;
    }
    else if (systemOutput < ptrPID->limMin) 
    {
        systemOutput = ptrPID->limMin;
    }

    // Backup error value
    ptrPID->preError = ptrPID->error;

    return systemOutput;
}