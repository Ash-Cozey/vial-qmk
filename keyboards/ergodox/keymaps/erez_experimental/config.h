#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 300

#undef LEADER_TIMEOUT
#define LEADER_TIMEOUT 300
 
/* ws2812 RGB LED */
#define RGB_DI_PIN D7
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 15     // Number of LEDs
#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 255
#define RGBLIGHT_VAL_STEP 12

#define RGB_MIDI
#define RGBW_BB_TWI

#endif
