/*
*
*
*
*/

#include <iostream>
#include "PID.h"

void PID::setPivot(float expectedValue)
{
    pivot = expectedValue;
}

void PID::setSystemCoefficient(float sampleTime,
                               float inputKp,
                               float inputKi,
                               float inputKd)
{
    time = sampleTime;
    Kp = inputKp;
    Ki = inputKi;
    Kd = inputKd;
}

float PID::PIDProcessor(float systemOutput)
{
    // Calculate the actual difference output
    error = pivot - systemOutput;
    
    Proportional = Kp * error;
    Integration = Ki * (error / time);
    Derivaty = Kd * (error - preError) * time;

    // System processed output
    systemOutput = Proportional + Integration + Derivaty;

    // Backup error value
    preError = error;

    return systemOutput;
}