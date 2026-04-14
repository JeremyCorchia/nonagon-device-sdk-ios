/*
 * File: filter_stethoscope.h
 *
 */

#ifndef __FILTER_STETHOSCOPE_H__
#define __FILTER_STETHOSCOPE_H__

/* Include files */
#include <stdlib.h>
#include "rtwtypes.h"

#define UpScaleRatio 6



/* Function Declarations */
extern void filter_stethoscope(short sig_in, boolean_T *valid_flag, short out_bell[UpScaleRatio], short out_diaphragm[UpScaleRatio], short out_extended[UpScaleRatio],  short out_midband[UpScaleRatio]);
extern void filter_stethoscope_initialize(void);
extern void filter_stethoscope_terminate(void);



extern void encryptionData2(uint8_t *inputData, uint8_t *Result1, uint8_t *Result2, uint8_t *Result3, uint8_t *Result4)
;
extern void encipher2(int32_t *input, int32_t *key);

#endif

/*
 * File trailer for filter_stethoscope.h
 *
 * [EOF]
 */
