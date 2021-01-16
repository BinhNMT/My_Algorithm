#include <stdio.h>
#include "LinearIntpol.h"

float interpolate(float pAx,              /* 'X' coordination of first point */
                  float pAy,              /* 'Y' coordination of first point */
                  float pBx,              /* 'X' coordination of second point*/
                  float pBy,              /* 'Y' coordination of second point*/
                  float expexted_pCx)     /* 'Y' coordination of expected point*/
{
    return ( ( pBy*(expexted_pCx - pAx) ) + ( pAy*(pBx - expexted_pCx) ) ) / (pBx - pAx);
}