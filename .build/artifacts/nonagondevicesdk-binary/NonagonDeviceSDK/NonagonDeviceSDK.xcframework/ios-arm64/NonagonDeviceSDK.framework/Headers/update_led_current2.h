#ifndef __UPDATE_LED_CURRENT2_H__
#define __UPDATE_LED_CURRENT2_H__
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "update_led_current_types.h"

extern void update_led_current2(int ir, unsigned short old_current_val_dec_in, boolean_T reset_flag, unsigned short *new_current_val_dec_out, boolean_T *done_flag);
extern void update_led_current_initialize2(void);
extern void update_led_current_terminate2(void);

#endif
