// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QW 0
#define _RS 1
#define _LW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QW] = LAYOUT_split_3x6_4(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
                          KC_LCTL, KC_LALT, MO(_RS), KC_SPC,            KC_SPC,  MO(_LW), KC_LGUI,  KC_RALT  ),

[_RS] = LAYOUT_split_3x6_4(
        KC_NO,  KC_1,    KC_2,    KC_3,    KC_F1,   KC_F2,              KC_F7,   KC_F8,  KC_F9,   KC_F10,    KC_F11,   KC_DEL,
        KC_NO,  KC_4,    KC_5,    KC_6,    KC_F3,   KC_F4,              KC_LEFT, KC_DOWN,KC_UP,   KC_RIGHT,  KC_F12,    KC_NO,
        KC_NO,  KC_7,    KC_8,    KC_9,    KC_F5,   KC_F6,              KC_NO,  KC_NO,  KC_NO,    KC_NO,     KC_NO,    KC_NO,
                         KC_0,    KC_NO,   KC_NO,   KC_NO,              KC_NO,  KC_NO,  KC_NO,    KC_NO  ),    

[_LW] = LAYOUT_split_3x6_4(
        KC_TILD,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,            KC_CIRC,KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_NO,
        KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,             KC_NO,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
        RGB_TOG,RGB_MOD, RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD,           KC_NO,  KC_UNDS,  KC_PPLS,  KC_NO,    KC_NO,    KC_NO,
                         RGB_VAI,  RGB_VAD, KC_NO,   KC_NO,             KC_NO,  KC_NO,    KC_NO,    QK_BOOT  ),    
    
};