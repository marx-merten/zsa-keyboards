
#include QMK_KEYBOARD_H
#include "codingfragments.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case C_PASS:
            if (record->event.pressed) {
                SEND_STRING(MAIN_PASS);
            }
            break;

        case C_PASS_A:
            if (record->event.pressed) {
                SEND_STRING(MAIN_PASS_A);
            }
            break;
        case C_ZOOM:
            if (record->event.pressed) {
                SEND_STRING("/zoom join me");
            }
            break;
    }
    return process_record_user_generated(keycode, record);
}

// clang-format off
// const uint16_t PROGMEM keymaps_cf[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT_voyager(
//     KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
//     CAPS_WORD,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
//     LT(3,KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),LT(2,KC_G),                                     KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LCTL, KC_SCOLON),LT(7,KC_QUOTE),
//     KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
//                                                     MT(MOD_LSFT, KC_TAB),LT(1,KC_ENTER),                                 LT(2,KC_SPACE), MT(MOD_LCTL, KC_BSPACE)
//   ),
//   [4] = LAYOUT_voyager(
//     RESET,          LGUI(LCTL(KC_KP_1)),LGUI(LCTL(KC_KP_2)),LGUI(LCTL(KC_KP_3)),LGUI(LCTL(KC_KP_4)),LGUI(LCTL(KC_KP_5)),                                LGUI(LCTL(KC_KP_6)),LGUI(LCTL(KC_KP_7)),LGUI(LCTL(KC_KP_8)),LGUI(LCTL(KC_KP_9)),LGUI(LCTL(KC_KP_0)),LGUI(LCTL(KC_KP_PLUS)),
//     KC_TRANSPARENT, C_PASS_A ,           C_PASS,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
//     KC_CAPSLOCK,    CAPS_WORD,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT,
//     KC_TRANSPARENT, C_ZOOM, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
//                                                     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
//   ),

// clang-format on
