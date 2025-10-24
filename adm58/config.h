#pragma once

#include "quantum.h"

// --- Basic Device Info ---
#define VENDOR_ID               0xFEED 
#define PRODUCT_ID              0x0001 
#define DEVICE_VER              0x0001
#define MANUFACTURER            Umang
#define PRODUCT                 Umang_Macropad

// --- Matrix Definition (2 rows, 5 columns) ---
#define MATRIX_ROWS 2
#define MATRIX_COLS 5 

// --- QMK Pin Names for your Pico GPIOs ---
#define MATRIX_ROW_PINS { B1, B2 } 
#define MATRIX_COL_PINS { B3, B4, C0, C1, C2 } 

// --- Diode Direction ---
#define DIODE_DIRECTION COL2ROW 

// --- VIAL Configuration ---
#define VIAL_KEYBOARD_UID {0xA0, 0xB1, 0xC2, 0xD3, 0xE4, 0xF5, 0x00, 0x01} 
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 } 
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 } 

// --- Encoder Configuration ---
#define ENCODER_ENABLE          
#define ENCODERS_PAD_A { C4 }   
#define ENCODERS_PAD_B { C3 }   
#define ENCODER_RESOLUTION 2    
