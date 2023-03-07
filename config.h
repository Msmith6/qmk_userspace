#pragma once

#define TAPPING_TERM 200
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define TAPPING_FORCE_HOLD_PER_KEY

#define MY_SAFE_RANGE 65518
#define ALT_1 MY_SAFE_RANGE - 1
#define ALT_2 MY_SAFE_RANGE - 2
#define ALT_3 MY_SAFE_RANGE - 3
#define ALT_4 MY_SAFE_RANGE - 4
#define ALT_5 MY_SAFE_RANGE - 5
#define CHAT_ENT MY_SAFE_RANGE - 6

#if defined(KEYBOARD_tdlab_hifinger75)
    #define RGBLIGHT_EFFECT_KNIGHT
#endif

#include "wrappers.h"
