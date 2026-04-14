/*
 * File: filter_stethoscope_step2_scale.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 18-Oct-2020 14:36:18
 */

#ifndef __FILTER_STETHOSCOPE_STEP2_SCALE_H__
#define __FILTER_STETHOSCOPE_STEP2_SCALE_H__

/* Include files */
#include "rtwtypes.h"

/* Function Declarations */
extern void filter_stethoscope_step2_scale(float y_filt_bell, float  y_filt_diaphragm, float y_filt_extended, float y_filt_midband, boolean_T *valid_flag, short *out_bell, short *out_diaphragm, short *out_extended, short *out_midband);
extern void filter_stethoscope_step2_scale_initialize(void);
extern void filter_stethoscope_step2_scale_terminate(void);

#endif

/*
 * File trailer for filter_stethoscope_step2_scale.h
 *
 * [EOF]
 */
