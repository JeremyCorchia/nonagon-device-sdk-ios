//
//  CAlgorithms.h
//  NonagonDeviceSDK
//
//  Umbrella header for all C algorithm functions used by the SDK.
//

#ifndef CAlgorithms_h
#define CAlgorithms_h

// SpO2 & Heart Rate
#include "Algs_SpO2_and_HR.h"
#include "calc_hr.h"
#include "calc_hr_correlation.h"
#include "calc_hr_types.h"
#include "calc_spo2_and_hr.h"
#include "calc_spo2_and_hr_types.h"
#include "calc_spo2_types.h"
#include "update_led_current.h"
#include "update_led_current2.h"
#include "update_led_current_types.h"
#include "Bool_type.h"
#include "vectors_tools.h"

// Thermometer
#include "fix_temperature.h"

// Stethoscope audio filtering
#include "filter_stethoscope.h"
#include "filter_stethoscope_step1_filter.h"
#include "filter_stethoscope_step2_scale.h"

// Ambient sound meter
#include "ambient_sound_meter.h"

// Shared types
#include "rtwtypes.h"

#endif /* CAlgorithms_h */
