/* Copyright 2019 Taylor Glaeser
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _1,
    _2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_A,
        KC_S,
        KC_D,
        KC_F,
        LT(_1, KC_SPC),

        LT(_2, KC_ENTER),
        KC_J,
        KC_K,
        KC_L,
        KC_SCLN
    ),

    [_1] = LAYOUT(
        KC_Q,
        KC_W,
        KC_E,
        KC_R,
        KC_TRNS,

        KC_TRNS,
        KC_U,
        KC_I,
        KC_O,
        KC_P
    ),

    [_2] = LAYOUT(
        KC_Z,
        KC_X,
        KC_C,
        KC_V,
        KC_TRNS,

        KC_TRNS,
        KC_M,
        KC_COMMA,
        KC_DOT,
        KC_SLSH
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}


/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
