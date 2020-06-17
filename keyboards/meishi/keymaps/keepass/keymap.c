/* Copyright 2017 Biacco42
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT( /* Base */
  LCA(KC_K),  LCA(KC_A),  C(KC_V), C(G(KC_R)) \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}


void keyboard_pre_init_user(void) {
  // Set our LED pins as output
  setPinOutput(D5);
  setPinOutput(B0);
  writePin(D5, 1);
}

bool led_update_user(led_t led_state) {
    writePin(B0, led_state.scroll_lock);
    return false;
}
