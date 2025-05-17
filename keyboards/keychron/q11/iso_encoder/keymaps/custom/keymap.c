/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers{
    ONE,
    TWO,
    THREE,
    FOUR,
};

enum custom_keycodes {
    JUMP_L = SAFE_RANGE,
    JUMP_R,
    C_CARET,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ONE] = LAYOUT_92_iso(
        KC_MUTE,  KC_ESC,   KC_F1,      KC_F2,      KC_F3,      KC_F4,    KC_F5,            KC_F6,      /*|SPLIT|*/     KC_F7,      KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        _______,  KC_GRV,   KC_1,       KC_2,       KC_3,       KC_4,     KC_5,             KC_6,       /*|SPLIT|*/     KC_7,       KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   KC_Q,       KC_W,       KC_E,       KC_R,     KC_T,             KC_Y,       /*|SPLIT|*/     KC_U,       KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        _______,  KC_ESC,   KC_A,       KC_S,       KC_D,       KC_F,     KC_G,             KC_H,       /*|SPLIT|*/     KC_J,       KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
        _______,  KC_LSFT,  KC_NUBS,    KC_Z,       KC_X,       KC_C,     KC_V,             KC_B,       /*|SPLIT|*/     KC_N,       KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,    KC_LALT,    MO(TWO),              KC_SPC,                       /*|SPLIT|*/                 KC_SPC,             KC_RALT,  MO(TWO),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [TWO] = LAYOUT_92_iso(
        RM_TOGG,  _______,  KC_BRID,    KC_BRIU,    KC_MCTL,    KC_LPAD,  RM_VALD,          RM_VALU,    /*|SPLIT|*/     KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,   _______, C(KC_0),
        _______,  _______,  _______,    _______,    _______,    _______,  _______,          _______,    /*|SPLIT|*/     C(KC_INS),  _______,  _______,  _______,  S(KC_INS),  _______,  _______,            KC_PSCR,
        _______,  _______,  RALT(KC_7), KC_CIRC,    S(KC_NUHS), KC_ASTR,  RALT(KC_0),       _______,    /*|SPLIT|*/     _______,    _______,  _______,  _______,  _______,    _______,                      _______,
        _______,  _______,  KC_GT,      RALT(KC_4), KC_PERC,    C_CARET,  KC_INT1,          _______,    /*|SPLIT|*/     JUMP_L,     _______,  _______,  JUMP_R,   _______,    _______,  _______,            _______,
        _______,  _______,  _______,    RALT(KC_0), KC_EXLM,    KC_HASH,  RALT(KC_NUBS),    _______,    /*|SPLIT|*/     _______,    _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,    _______,    _______,              KC_ASTR,                      /*|SPLIT|*/                 KC_LPRN,            _______,  _______,    _______,  _______,  _______,  _______),

    [THREE] = LAYOUT_92_iso(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        _______,  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        _______,  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
        _______,  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,  KC_LALT,  MO(FOUR),           KC_SPC,                        KC_SPC,             KC_RALT,  MO(FOUR),   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [FOUR] = LAYOUT_92_iso(
        RM_TOGG,  _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,   RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  RM_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,   _______,  _______,  _______,  _______,  _______,  _______,    _______,                      _______,
        _______,  _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [ONE]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [TWO]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(C(KC_MS_WH_DOWN), C(KC_MS_WH_UP)) },
    [THREE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FOUR]  = { ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(RM_VALD, RM_VALU) }
};
#endif // ENCODER_MAP_ENABLE

// CUSTOM FUNCTIONS
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {  // Use get_highest_layer() instead of biton32()
        case ONE:
            rgblight_sethsv(HSV_BLUE);    // Red for layer ONE
            break;
        case TWO:
            rgblight_sethsv(HSV_RED);  // Green for layer TWO
            break;
        case THREE:
            rgblight_sethsv(HSV_PURPLE);   // Blue for layer THREE
            break;
        case FOUR:
            rgblight_sethsv(HSV_ORANGE); // Purple for layer FOUR
            break;
        default: // Default layer (usually layer 0)
            rgblight_sethsv(HSV_WHITE);  // White for default layer
            break;
    }
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JUMP_L:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    // Press Ctrl
                    register_code(KC_LCTL);
                    // Tap Left Arrow
                    register_code(KC_LEFT);
                    unregister_code(KC_LEFT);
                    // Release Ctrl
                    unregister_code(KC_LCTL);
                } else {
                    // Keypress Home
                    tap_code(KC_HOME);
                }
            }
            return false;

        case JUMP_R:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    // Hold Ctrl
                    register_code(KC_LCTL);
                    // Tap Left Arrow
                    register_code(KC_RIGHT);
                    unregister_code(KC_RIGHT);
                    // Release Ctrl
                    unregister_code(KC_LCTL);
                } else {
                    // Keypress End
                    tap_code(KC_END);
                }
            }
            return false;

        case C_CARET:
            if (record->event.pressed) {
                    // Hold Shift
                    register_code(KC_LSFT);
                    // Tap Left Bracket (^)
                    tap_code(KC_RBRC);
                    // Release Shift
                    unregister_code(KC_LSFT);
                    // Tap Space
                    tap_code(KC_SPC);
            }
            return false;
    }
    return true;
}
