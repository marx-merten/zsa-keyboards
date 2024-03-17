#include QMK_KEYBOARD_H

#include "../secrets.h"

// Merged Source, please follow the following steps to merge your keymap with the latest version:
// 0. add include codingfragments.h to your keymap.c
// 1. Coppy the content of your keymap from codingfragment_custom.c into the keymapp
// 2. Move/Merge the keycode enum into the codingfragment.h file
// 3. change the function process_record_user to process_record_user_generated
// 4. make sure rules.mk includes codingfragments_custom.c
//     SRC = matrix.c codingfragments_custom.c

//

//                      Starting of your keymap.c file
// =============================================================================

// Critical changes to keymapp
// ---------------------------------------
//   [5] = LAYOUT_voyager(
//     RESET,          LGUI(LCTL(KC_KP_1)),LGUI(LCTL(KC_KP_2)),LGUI(LCTL(KC_KP_3)),LGUI(LCTL(KC_KP_4)),LGUI(LCTL(KC_KP_5)),                                LGUI(LCTL(KC_KP_6)),LGUI(LCTL(KC_KP_7)),LGUI(LCTL(KC_KP_8)),LGUI(LCTL(KC_KP_9)),LGUI(LCTL(KC_KP_0)),LGUI(LCTL(KC_KP_PLUS)),
//     KC_TRANSPARENT, C_PASS ,      C_PASS_A,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
//     KC_CAPSLOCK,    CAPS_WORD,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT,
//     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
//                                                     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT


enum custom_keycodes { RGB_SLD = ML_SAFE_RANGE, ST_MACRO_0, MAC_LOCK, C_PASS, C_PASS_A, C_ZOOM };

bool process_record_user_generated(uint16_t keycode, keyrecord_t *record);