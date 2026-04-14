/*
 * File: calc_hr_correlation.h
 *
 *
 */

#pragma once
#ifdef __cplusplus
extern "C"
{
#endif
/* Include files */
#include <stdlib.h>
#include "Bool_type.h"

#define MAX_POSIBLE_BPM 250
#define MIN_POSIBLE_BPM 30

/* Function Declarations */
extern int calc_hr_correlation(int red, int ir, float *hr_out, double *quality_out);
extern void calc_hr_correlation_initialize(boolean_TT flag_100Hz);
extern void calc_hr_correlation_terminate(void);

extern int very_good_input_signal(double *ret_quality); //SIMULAT

#ifdef __cplusplus
}
#endif
