#pragma once

enum layout {
    _QWERTY=0,
    _FUNC,
    _VIM,
    _SETTING
};

#ifdef TAPPING_TOGGLE
#undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 3

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

