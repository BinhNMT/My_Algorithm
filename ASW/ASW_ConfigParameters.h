/*
* ASW_ConfigParameters.h
*   Author: BinhNMT
*   Email: binhmainguyen193@gmail.com
*/

#ifndef ASW_CONFIGPARAMETERS_H
#define ASW_CONFIGPARAMETERS_H

//----------------------------------
// Gravity Accelerate (m/s^2)
//----------------------------------
#define G   9.81
//----------------------------------
// Friction Coefficent (DRY)
//----------------------------------
#define FRICTCOEFF_DRY  0.7
//----------------------------------
// Friction Coefficent (WET)
//----------------------------------
#define FRICTCOEFF_WET  0.5
//----------------------------------
// Friction Coefficent
//----------------------------------
#define FRICTCOEFF  FRICTCOEFF_DRY
//----------------------------------
// Vehicle Deceleration
//----------------------------------
#define DECEL   (FRICTCOEFF * G)
//----------------------------------
// Time of driver reaction (s)
//----------------------------------
#define REACTTIME   1.5
//----------------------------------
// Times for interrupt per Second
//----------------------------------
#define CYCLETIME   0.2
//----------------------------------
// ENCODER RESOLUTIONS
//----------------------------------
#define TEETHCOUNT  50
//----------------------------------
// WHEEL'S RADIUS (mm)
//----------------------------------
#define W_RADIUS  215

#endif /* ASW_CONFIGPARAMETERS_H */