#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    // Left side
    KC_ESC,         KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_TAB,         KC_Q, KC_W, KC_E, KC_R, KC_T,
    KC_LEFT_CTRL,   KC_A, KC_S, KC_D, KC_F, KC_G,
    KC_LEFT_SHIFT,  KC_Z, KC_Z, KC_X, KC_C, KC_V,
    KC_LEFT_CTRL,   KC_LEFT_GUI, KC_LEFT_ALT, KC_SPACE, KC_SPACE, KC_SPACE,
    // Right side
    KC_0, KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_0, KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_0, KC_1, KC_2, KC_3, KC_4, KC_5
  )
};