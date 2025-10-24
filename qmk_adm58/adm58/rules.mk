# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes 
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

# Enable VIAL specific features
VIAL_ENABLE = yes
VIAL_INSECURE = yes 

# Link Time Optimization (saves space)
LTO_ENABLE = yes

# Tells QMK the layout name we'll use in keymap.c and info.json
LAYOUTS = LAYOUT
