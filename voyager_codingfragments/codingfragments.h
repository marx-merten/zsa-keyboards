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

enum custom_keycodes { RGB_SLD = ML_SAFE_RANGE, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, MAC_LOCK, C_PASS, C_PASS_A, C_ZOOM };

bool process_record_user_generated(uint16_t keycode, keyrecord_t *record);