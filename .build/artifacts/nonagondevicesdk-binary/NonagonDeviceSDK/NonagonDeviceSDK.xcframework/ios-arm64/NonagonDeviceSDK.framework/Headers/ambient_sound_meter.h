#ifndef AMBIENT_SOUND_METER_H
#define AMBIENT_SOUND_METER_H



#include <stdlib.h>
#include "Bool_type.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "update_led_current_types.h"


typedef struct
{
    size_t sample_rate; //8000Hz or 44100Hz or 48000Hz
    float visibal_scale; /*  Number between 0.0 and 1.0 (100%).
                        The full sampling range is when the samples reached -32768 or +32767.
                        If you want the sound meter to display only 80% then set this number to 0.8.
                        'max_noise_threshold' and 'SoundMeter_value_out' represent the fraction of this 'visibal_scale'.
                        If the noise peak is above 32767 * 'visibal_scale', then the 'SoundMeter_value_out' will be truncated to 1.
                        */
    float max_noise_threshold; // a number between 0.0 to 1.0
    size_t max_noise_linger; // seconds. The size of the input sliding window that produces the peak value. In other words the time when ‘peak value of noise’ will continue to affect.
}SoundMeterParam_t;



extern boolean_T SetSoundMeterParams (SoundMeterParam_t* in_meter_param);
extern boolean_T GetSoundMeterParams (SoundMeterParam_t* out_meter_param);

extern boolean_T SoundMeter_initialize(void);
extern void SoundMeter_terminate(void);

// The function should be cold every 0.1 second with minimal delay since the microphone sampled.
extern boolean_T RT_SoundMeter_short(
        const short *tenth_second_in, // samples array of the last 0.1 second. resive numbers frpm -32768 to 32767
        size_t length, //must match the number in sample_rate (of SoundMeterParam_t) Ddvided by 10
        float *SoundMeter_value_out, // the max peak noise in the last max_noise_linger seconds (of SoundMeterParam_t). Number between 0.0 to 1.0
        boolean_T *Noise_too_loud_out, // False (0) => OK (no noise). True (1) => Noise level exceeds and is not acceptable
        float *SoundMeter_temporal_out // Extra information that should not be use for the first implementation. Gives another optional indication of the temporary noise value of the last 0.1 second.
);


// Note that you only need to use one type of RT_SoundMeter function, depending on your preferred input type from the microphone.
// The function should be cold every 0.1 second with minimal delay since the microphone sampled.
extern boolean_T RT_SoundMeter_float(
        const float *tenth_second_in, // samples array of the last 0.1 second. resive numbers frpm -1.0 to 1.0
        size_t length, //must match the number in sample_rate (of SoundMeterParam_t) Ddvided by 10
        float *SoundMeter_value_out, // the max peak noise in the last max_noise_linger seconds (of SoundMeterParam_t). Number between 0.0 to 1.0
        boolean_T *Noise_too_loud_out, // False (0) => OK (no noise). True (1) => Noise level exceeds and is not acceptable
        float *SoundMeter_temporal_out // Extra information that should not be use for the first implementation. Gives another optional indication of the temporary noise value of the last 0.1 second.
);

extern void Reset_SoundMeter_history(void); //Forget peaks from the past (the sound meter remembers peaks from the last max_noise_linger seconds)


extern bool setSoundMeterParameters(int sample_rate, float visibal_scale, float max_noise_threshold, int max_noise_linger);
extern int getSoundMeterParamsSampleRate(void);
extern float getSoundMeterParamsVisibalScale(void);
extern float getSoundMeterParamsMaxNoiseThreshold(void);
extern int getSoundMeterParamsMaxNoiseLinger(void);
#endif
