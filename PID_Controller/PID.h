/*
*
*
*
*/

#ifndef PID_H
#define PID_H

class PID
{
private:
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

public:
    void setPivot(float);
    void setSystemCoefficient(float,   /* set sample time */
                              float,   /* set Kp */
                              float,   /* set Ki */
                              float);  /* set Kd */
    float PIDProcessor(float);
};

#endif