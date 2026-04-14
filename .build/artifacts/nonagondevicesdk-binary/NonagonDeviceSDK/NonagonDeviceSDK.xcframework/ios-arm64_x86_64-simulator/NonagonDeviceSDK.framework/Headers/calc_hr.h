//
//  calc_hr.h
//  MHD-SDK
//
//  Created by Medix software on 02/09/2021.
//  Copyright © 2021 Medix Software. All rights reserved.
//

/*
 * File: calc_hr.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 02-Aug-2020 14:44:36
 */

#ifndef __CALC_HR_APP__
#define __CALC_HR_APP__

/* Include files */
//#include "rtwtypes.h"
#include "Bool_type.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
extern float calc_hr(int red, int ir, boolean_TT rst_flg, double *snr_out);
extern float manage_calc_hr(int red, int ir, boolean_TT rst_flg, boolean_TT Flag_100Hz, double *snr_out);
extern void calc_hr_initialize(void);
extern void calc_hr_terminate(void);

#endif

/*
 * File trailer for calc_hr.h
 *
 * [EOF]
 */
