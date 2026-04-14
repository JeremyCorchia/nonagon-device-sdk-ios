#ifndef __UPDATE_LED_CURRENT_H__
#define __UPDATE_LED_CURRENT_H__
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "update_led_current_types.h"

extern void update_led_current(int ir, const char old_current_val_hex[2], boolean_T reset_flag, char new_current_val_hex[2], boolean_T *done_flag);
extern void update_led_current_initialize(void);
extern void update_led_current_terminate(void);

#endif
