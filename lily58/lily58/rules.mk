# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = no       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output

ENCODER_ENABLE = yes       # ENables the use of one or more encoders
LTO_ENABLE = yes 		   # significantly reduce the compiled size, but disable the legacy TMK Macros and Functions features

OLED_DRIVER = ssd1306    # OLED display
SERIAL_DRIVER = vendor
RGB_MATRIX_ENABLE = yes