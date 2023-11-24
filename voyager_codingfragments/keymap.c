#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

#include "../secrets.h"

enum custom_keycodes { RGB_SLD = ML_SAFE_RANGE, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, C_PASS, C_PASS_A, C_ZOOM };

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, CAPS_WORD, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLASH, MT(MOD_LSFT, KC_BSPACE), MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LGUI, KC_D), MT(MOD_LSFT, KC_F), KC_G, KC_H, MT(MOD_RSFT, KC_J), MT(MOD_LGUI, KC_K), MT(MOD_LALT, KC_L), MT(MOD_LCTL, KC_SCOLON), MT(MOD_RSFT, KC_QUOTE), MO(6), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MO(7), LT(4, KC_TAB), LT(1, KC_ENTER), LT(3, KC_SPACE), LT(2, KC_BSPACE)),
    [1] = LAYOUT_voyager(KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRAVE, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_MINUS, KC_7, KC_8, KC_9, KC_SLASH, KC_F12, KC_TRANSPARENT, TD(DANCE_0), TD(DANCE_1), TD(DANCE_2), TD(DANCE_3), KC_RPRN, KC_PLUS, KC_4, KC_5, KC_6, KC_ASTR, KC_BSPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET, KC_RBRACKET, KC_LCBR, KC_RCBR, KC_DOT, KC_1, KC_2, KC_3, KC_EQUAL, KC_ENTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0),
    [2] = LAYOUT_voyager(RGB_TOG, TOGGLE_LAYER_COLOR, RGB_MOD, RGB_SLD, RGB_VAD, RGB_VAI, LCTL(KC_UP), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_4), RESET, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_TRANSPARENT, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LCTL, KC_MEDIA_PREV_TRACK), MT(MOD_LALT, KC_MEDIA_NEXT_TRACK), MT(MOD_LGUI, KC_MEDIA_STOP), MT(MOD_LSFT, KC_MEDIA_PLAY_PAUSE), KC_TRANSPARENT, KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, LGUI(KC_TAB), LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), LGUI(LSFT(KC_TAB)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [5] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT, KC_A, KC_S, KC_D, KC_F, KC_TRANSPARENT, KC_TRANSPARENT, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [6] = LAYOUT_voyager(KC_TRANSPARENT, TO(0), TO(5), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [7] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},

    [1] = {{56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}, {56, 218, 204}},

    [2] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {118, 244, 245}, {118, 244, 245}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 245, 245}, {0, 0, 0}, {169, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 245, 245}, {169, 255, 255}, {169, 255, 255}, {169, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {118, 244, 245}, {0, 245, 245}, {169, 255, 255}, {0, 245, 245}, {0, 0, 0}, {0, 0, 0}, {118, 244, 245}, {169, 255, 255}, {169, 255, 255}, {169, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [5] = {{0, 0, 0}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {0, 0, 0}, {0, 0, 0}, {179, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {179, 255, 255}, {179, 255, 255}, {179, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {118, 244, 245}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0, 255, 255);
            }
            return false;
        case HSV_74_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(74, 255, 255);
            }
            return false;
        case HSV_169_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(169, 255, 255);
            }
            return false;
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
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[5];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_CIRC);
        tap_code16(KC_CIRC);
        tap_code16(KC_CIRC);
    }
    if (state->count > 3) {
        tap_code16(KC_CIRC);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_CIRC);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            register_code16(KC_CIRC);
            register_code16(KC_CIRC);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_CIRC);
            register_code16(KC_CIRC);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_CIRC);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_CIRC);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_CIRC);
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_AMPR);
        tap_code16(KC_AMPR);
        tap_code16(KC_AMPR);
    }
    if (state->count > 3) {
        tap_code16(KC_AMPR);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(KC_AMPR);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_AMPR);
            register_code16(KC_AMPR);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_AMPR);
            register_code16(KC_AMPR);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(KC_AMPR);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_AMPR);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_AMPR);
            break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
    }
    if (state->count > 3) {
        tap_code16(KC_ASTR);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            register_code16(KC_ASTR);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LGUI);
            break;
        case DOUBLE_TAP:
            register_code16(KC_ASTR);
            register_code16(KC_ASTR);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ASTR);
            register_code16(KC_ASTR);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ASTR);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LGUI);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ASTR);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ASTR);
            break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if (state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            register_code16(KC_LPRN);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LSHIFT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_LPRN);
            register_code16(KC_LPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_LPRN);
            register_code16(KC_LPRN);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            unregister_code16(KC_LPRN);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LSHIFT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_LPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_LPRN);
            break;
    }
    dance_state[3].step = 0;
}
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            layer_move(0);
            break;
        case DOUBLE_TAP:
            layer_move(5);
            break;
        case DOUBLE_SINGLE_TAP:
            layer_move(0);
            break;
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {}
    dance_state[4].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset), [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset), [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset), [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset), [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
};
