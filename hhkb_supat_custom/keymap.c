#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_60_tsangan_hhkb(
        KC_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TT(_FUNC),
        KC_NO,          KC_LALT, KC_LGUI,                            KC_SPC,                                      KC_RGUI, KC_RALT, KC_NO
    ),
    [_FUNC] = LAYOUT_60_tsangan_hhkb(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______,   KC_TRNS,
        TG(_SETTING),   KC_VOLU, KC_VOLD, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          _______,
        _______,          _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, _______, _______,
        XXXXXXX, _______, _______,                            _______,                                     _______, _______, XXXXXXX
    ),
    [_VIM] = LAYOUT_60_tsangan_hhkb(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        XXXXXXX, _______, _______,                            _______,                                     _______, _______, XXXXXXX
    ),
    [_SETTING] = LAYOUT_60_tsangan_hhkb(
        RESET,   DEBUG,   NK_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EEP_RST,
        _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, _______, _______, RGB_SAI, _______, _______,
        _______, RGB_RMOD, RGB_MOD, RGB_TOG, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI,          _______,
        _______,          _______, _______, _______, _______, _______, RGB_VAI, RGB_VAD, RGB_SPD, RGB_SPI, RGB_SAD, _______, _______,
        XXXXXXX, _______, _______,                            _______,                                     _______, _______, XXXXXXX
    ),
};

void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(28, 0xFF, 0x93, 0x00);
    }

    int layer = get_highest_layer(layer_state);

    if (layer == _FUNC) {
        rgb_matrix_set_color(42, 0x00, 0xFD, 0xFF);

        /*
        rgb_matrix_set_color(17, 0x00, 0xFD, 0xFF);
        rgb_matrix_set_color(30, 0x00, 0xFD, 0xFF);
        rgb_matrix_set_color(31, 0x00, 0xFD, 0xFF);
        rgb_matrix_set_color(44, 0x00, 0xFD, 0xFF);

        rgb_matrix_set_color(32, 0xFF, 0xFD, 0x00);
        rgb_matrix_set_color(33, 0xFF, 0xFD, 0x00);
        rgb_matrix_set_color(45, 0xFF, 0xFD, 0x00);
        rgb_matrix_set_color(46, 0xFF, 0xFD, 0x00);

        rgb_matrix_set_color(34, 0xFF, 0x93, 0x00);
        rgb_matrix_set_color(35, 0xFF, 0x93, 0x00);
        rgb_matrix_set_color(47, 0xFF, 0x93, 0x00);
        rgb_matrix_set_color(48, 0xFF, 0x93, 0x00);

        rgb_matrix_set_color(18, 0xD7, 0x83, 0xFF);
        rgb_matrix_set_color(19, 0xD7, 0x83, 0xFF);
        rgb_matrix_set_color(20, 0xD7, 0x83, 0xFF);

        rgb_matrix_set_color(1, 0xFF, 0x00, 0x00);

        rgb_matrix_set_color(2, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(3, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(4, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(5, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(6, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(7, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(8, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(9, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(10, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(11, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(12, 0x00, 0xF9, 0x00);
        rgb_matrix_set_color(13, 0x00, 0xF9, 0x00);

        rgb_matrix_set_color(38, 0x04, 0x33, 0xFF);
        rgb_matrix_set_color(39, 0x04, 0x33, 0xFF);
        rgb_matrix_set_color(40, 0x04, 0x33, 0xFF);
        */

    } else if (layer == _SETTING) {
        rgb_matrix_set_color(14, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(41, 0xFF, 0xFB, 0x00);
    } else {
        return;
    }
}