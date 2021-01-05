/*
*
* Based on https://github.com/pms67/PID
*
*/

#ifndef PID_H
#define PID_H

struct PID
{
    /* data */
    float pivot;            // Expected output value of the system
    float error;            // The actual difference output compared to expected (pivot)
    float time;             // Sample time in second
    float preError;

    float Kp;               // Proportional coefficient
    float Ki;               // Integration coefficient
    float Kd;               // Derivaty coefficient

    float Proportional;
    float Integration;
    float Derivaty;

    /* Output limits */
    float limMin;
    float limMax;
};

void setPivot(struct PID *ptrPID, float expectedValue);

void setSystemCoefficient(struct PID *ptrPID,
                          float sampleTime,	    /* set sample time */
                          float inputKp,	    /* set Kp */
                          float inputKi,	    /* set Ki */
                          float inputKd,	    /* set Kd */
                          float limMaxSeted,	/* max limit value */
                          float limMinSeted);	/* min limit value */

float PIDProcessor(struct PID *ptrPID, float);

#endif
