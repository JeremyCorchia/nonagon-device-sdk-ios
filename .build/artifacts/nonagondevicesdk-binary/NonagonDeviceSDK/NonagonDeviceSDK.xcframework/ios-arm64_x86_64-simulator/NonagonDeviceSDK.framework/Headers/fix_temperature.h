/*
 * File: fix_temperature.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 02-Apr-2020 11:48:54
 */

#ifndef FIX_TEMPERATURE_H
#define FIX_TEMPERATURE_H

/* Include Files */
#include <stddef.h>
#include "rtwtypes.h"

typedef struct
{
    float varianceThershold;                // the max variance threshold of the signal expected
}ThermometerParam_t;

typedef struct
{
    float a_param;
    float b_param;
    float c_param;
    float d_param;
    float e_param;
}ThermometerPolynomParm_t;


typedef struct
{
    short IRSensor;                                      // current IR measurement
    short INSensor;                                      // current IR sensor ambient measurement
    short ExSensor;                                      // current device ambient measurement
}ThermometerInputData_t;

typedef struct
{
    float bodyTemp;                               // oral level temperature in Celsius degrees
    float objTemp;                                  // object level temperature (post polynomic)
    short quality;                                          // confidence level (0-bad, 100-excellent)
}ThermometerRes_t;

/* Function Declarations */
extern boolean_T ExecThermometerAlgorithm(ThermometerInputData_t* input, ThermometerRes_t* results);
extern boolean_T SetThermometerAlgorithmParams (ThermometerParam_t* samples_alg_param, ThermometerPolynomParm_t* direct_param, ThermometerPolynomParm_t* adjustment_param);
extern boolean_T GetThermometerAlgorithmParams (ThermometerParam_t* out_samples_alg_param, ThermometerPolynomParm_t* out_direct_param, ThermometerPolynomParm_t* out_adjustment_param);

extern float transfer_forehead_to_oral_temperature(float forehead_ir, float mhd_amb, ThermometerPolynomParm_t* adjustment_param); //was previously named fix_temperature
extern void ThermometerAlgorithm_initialize(void);
extern void ThermometerAlgorithm_terminate(void);

#endif

/*
 * File trailer for fix_temperature.h
 *
 * [EOF]
 */
