//
//  Algs_SpO2_and_HR.h
//  MHD-SDK
//
//  Created by Medix software on 02/09/2021.
//  Copyright © 2021 Medix Software. All rights reserved.
//

/*
 * File: Algs_SpO2_and_HR.h
 *
 * Combination of SpO2 algorithm and HR / BPM algorithm into one function
 */

#pragma once
#ifdef __cplusplus
extern "C"
{
#endif
/* Include files */
#include "Bool_type.h"
//#include "rtwtypes.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
//Calls for SpO2 and HR algorithms. Returns 0 in case of success. Returns a non-zero number for failure (Returns -1 general failure)
//Need to call initialize_SpO2_and_HR_Alg prior to a sequence/session of calling call_SpO2_and_HR_Alg. need to call terminate_SpO2_and_HR_Alg at the end of the sequence.
extern int call_SpO2_and_HR_Alg(
                int red_input, int ir_input, // Red and InfraRed signal
                unsigned short fs, //  Frequency of Sampling (expected to be 50 Hz)
                boolean_TT *finger,  // finger detected true/false
                boolean_TT *Saturated_invalid_signal, // the red and/or ir signals are saturated or invalid so that calibration required.
                unsigned char *best_spo2_out, //Best SpO2 so far (for this attempt/session). Reset by calling initialize_SpO2_and_HR_Alg.
                double *best_spo2_quality_out, //The quality wich associate with the best_spo2_out. Best SpO2 Quality so far.
                float  *best_hr_out, //Best Heart Rate (BPM) so far (for this attempt/session). Reset by calling initialize_SpO2_and_HR_Alg.
                double *best_hr_quality_out, //The quality wich associate with the best_hr_out. Best Heart-Rate-Quality so far.
                boolean_TT *best_are_good_enough, //Done flag. The values and quality of HR and SpO2 are good. no need to continue the attempt/session by sending additional inputs.
                signed char *temporal_spo2, //Changing SpO2 value with limited integration/history time. Can be use for online graph.
                float  *temporal_hr, //Changing Heart Rate (BPM) value with limited integration/history time. Can be use for online graph.
                double *temporal_quality
                );

//initialized the SpO2 and HR algorithms. Returns 0 in case of success. Returns a non-zero number for failure (Returns -1 general failure)
extern int initialize_SpO2_and_HR_Alg(void);

//Terminate the SpO2 and HR algorithms and free resources. Returns 0 in case of success. Returns a non-zero number for failure (Returns -1 general failure)
extern int terminate_SpO2_and_HR_Alg(void);

#ifdef __cplusplus
}
#endif


