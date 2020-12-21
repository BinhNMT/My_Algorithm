/*
*
*
*
*/

#include <iostream>
#include "PID.h"

PID::PID(): Proportional(0), 
			Integration(0), 
			Derivaty(0)
{
}

void PID::setPivot(float expectedValue)
{
    pivot = expectedValue;
}

void PID::setSystemCoefficient(float sampleTime,
                               float inputKp,
                               float inputKi,
                               float inputKd,
							   float limMaxSeted,
							   float limMinSeted)
{
    time = sampleTime;
    Kp = inputKp;
    Ki = inputKi;
    Kd = inputKd;
	limMax = limMaxSeted;
	limMin = limMinSeted;
}

float PID::PIDProcessor(float systemOutput)
{
    // Calculate the actual difference output
    error = pivot - systemOutput;
    
	Proportional = Kp * error;
    Integration = Ki * (Integration + (error * time));
    Derivaty = Kd * ((error - preError) / time);

    // System processed output
    systemOutput = Proportional + Integration + Derivaty;

	/*
	 * Compute output and apply limits
	 */
    if (systemOutput > limMax) 
	{
        systemOutput = limMax;
    } 
	else if (systemOutput < limMin) 
	{
		systemOutput = limMin;
    }

    // Backup error value
    preError = error;

    return systemOutput;
}