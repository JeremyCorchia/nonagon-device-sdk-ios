/*
 * File: filter_stethoscope_step1_filter.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 18-Oct-2020 14:33:46
 */

#ifndef __FILTER_STETHOSCOPE_STEP1_FILTER_H__
#define __FILTER_STETHOSCOPE_STEP1_FILTER_H__

/* Include files */
#include "rtwtypes.h"

/* Function Declarations */
extern void filter_stethoscope_step1_filter(short sig_in, boolean_T *valid_flag,  float *y_filt_bell, float *y_filt_diaphragm, float *y_filt_extended, float *y_filt_midband);
extern void filter_stethoscope_step1_filter_initialize(void);
extern void filter_stethoscope_step1_filter_terminate(void);

#endif

/*
 * File trailer for filter_stethoscope_step1_filter.h
 *
 * [EOF]
 */
