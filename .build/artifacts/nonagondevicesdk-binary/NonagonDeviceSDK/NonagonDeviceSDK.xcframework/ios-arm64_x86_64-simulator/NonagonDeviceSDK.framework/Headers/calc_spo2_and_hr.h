//
//  calc_spo2_and_hr.h
//  MHD-SDK
//
//  Created by Medix software on 02/09/2021.
//  Copyright © 2021 Medix Software. All rights reserved.
//

#ifndef __CALC_SPO2_AND_HR_H__
#define __CALC_SPO2_AND_HR_H__
//#include "rtwtypes.h"
#include "Bool_type.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

//extern void calc_spo2_and_hr(int red, int ir, unsigned short fs, boolean_TT *reset_flag, unsigned char *spo2, unsigned char *hr, signed char *grade, unsigned char *spo2_mean, unsigned char *hr_mean, boolean_TT *finger)
extern void calc_spo2_and_hr(int red, int ir, unsigned short fs, boolean_TT *reset_flag,
                      unsigned char *spo2, unsigned char *hr, signed char *grade,
                      unsigned char *spo2_mean, unsigned char *hr_mean,
                      boolean_TT *finger, double *QM1, boolean_TT Flag_100Hz);
extern void calc_spo2_and_hr_initialize(void);
extern void calc_spo2_and_hr_terminate(void);

#endif
