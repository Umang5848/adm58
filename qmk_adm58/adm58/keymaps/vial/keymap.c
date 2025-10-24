#include QMK_KEYBOARD_H

// Define the name of the layout as declared in rules.mk and info.json
#define LAYOUT_adm58 LAYOUT

// Define the keymap layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( // Default Layer (Base)
        KC_VOLU, KC_VOLD, KC_MUTE, KC_MPLY, KC_NO, // Row 1: Volume/Media controls
        KC_ESC,  KC_A,    KC_B,    KC_C,    KC_TRNS  // Row 2: Basic keys 
    )
};

// Define the encoder actions
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // The first (and only) encoder
        if (clockwise) {
            tap_code(KC_VOLU); // Rotate Clockwise: Volume Up
        } else {
            tap_code(KC_VOLD); // Rotate Counter-Clockwise: Volume Down
        }
    }
}
