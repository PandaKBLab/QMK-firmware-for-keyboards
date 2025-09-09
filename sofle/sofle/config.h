#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS {  5,  6,  7,  8,  9 }
#define MATRIX_COL_PINS { 27, 26, 22, 20, 23, 21 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* 
encoder support was moved to info.json since it seems to be deprecated way to define encoders
*/
// #define ENCODERS_A_PINS { GP28 }
// #define ENCODERS_B_PINS { GP29 }
// #define ENCODERS_A_PINS_RIGHT { GP29 }
// #define ENCODERS_B_PINS_RIGHT { GP28 }
// #define ENCODER_RESOLUTION 4
// #define NUM_ENCODERS 2

#define TAP_CODE_DELAY 10

//#define MASTER_LEFT
#define SPLIT_HAND_PIN GP4
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
#define USB_VBUS_PIN 19
#define USE_SERIAL
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN   GP1


/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#ifdef OLED_ENABLE
// settings for the oled keyboard demo with Adafruit 0.91" OLED display on the Stemma QT port
    #define OLED_DISPLAY_128X32
    #define I2C_DRIVER I2CD1
    #define I2C1_SDA_PIN GP2
    #define I2C1_SCL_PIN GP3
    #define OLED_BRIGHTNESS 180
    #define OLED_TIMEOUT 60000
    #define OLED_FONT_H "lib/glcdfont.c"
    // #define WPM_ESTIMATED_WORD_SIZE 5
    #define SPLIT_LAYER_STATE_ENABLE
    #define SPLIT_LED_STATE_ENABLE
    #define SPLIT_MODS_ENABLE
    #define SPLIT_WPM_ENABLE
    #define SPLIT_OLED_ENABLE
#endif

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_LED_COUNT       72 // Number of LEDs
    #define RGBLED_NUM RGB_MATRIX_LED_COUNT
    #define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT
    #define RGB_MATRIX_SPLIT { 36, 36 }
    #define WS2812_DI_PIN            GP0
    #define WS2812_PIO_USE_PIO1

    #define SPLIT_TRANSPORT_MIRROR
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_SLEEP 
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

    #define ENABLE_RGB_MATRIX_ALPHAS_MODS         // Static dual hue, speed is hue for secondary hue
    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN    // Static gradient top to bottom, speed controls how much gradient changes
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right, speed controls how much gradient changes
    #define ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
    #define ENABLE_RGB_MATRIX_BAND_SAT        // Single hue band fading saturation scrolling left to right
    #define ENABLE_RGB_MATRIX_BAND_VAL        // Single hue band fading brightness scrolling left to right
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT   // Single hue 3 blade spinning pinwheel fades saturation
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL   // Single hue 3 blade spinning pinwheel fades brightness
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT     // Single hue spinning spiral fades saturation
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
    #define ENABLE_RGB_MATRIX_CYCLE_ALL           // Full keyboard solid hue cycling through full gradient
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Full gradient scrolling left to right
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN       // Full gradient scrolling top to bottom
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN        // Full gradient scrolling out to in
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL   // Full dual gradients scrolling out to in
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradient Chevron shapped scrolling left to right
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL      // Full gradient spinning pinwheel around center of keyboard
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL        // Full gradient spinning spiral around center of keyboard
    #define ENABLE_RGB_MATRIX_DUAL_BEACON         // Full gradient spinning around center of keyboard
    #define ENABLE_RGB_MATRIX_RAINBOW_BEACON      // Full tighter gradient spinning around center of keyboard
    #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS   // Full dual gradients spinning two halfs of keyboard
    #define ENABLE_RGB_MATRIX_RAINDROPS           // Randomly changes a single key's hue
    #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // Randomly changes a single key's hue and saturation
    #define ENABLE_RGB_MATRIX_HUE_BREATHING       // Hue shifts up a slight ammount at the same time, then shifts back
    #define ENABLE_RGB_MATRIX_HUE_PENDULUM        // Hue shifts up a slight ammount in a wave to the right, then back to the left
    #define ENABLE_RGB_MATRIX_HUE_WAVE            // Hue shifts up a slight ammount and then back down in a wave to the right
    #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL      // Single hue fractal filled keys pulsing horizontally out to edges
    #define ENABLE_RGB_MATRIX_PIXEL_FLOW          // Pulsing RGB flow along LED wiring with random hues
    #define ENABLE_RGB_MATRIX_PIXEL_RAIN          // Randomly light keys with random hues
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP      // How hot is your WPM!
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN        // That famous computer simulation
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys hit to hue & value then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE      // Static single hue, pulses keys hit to shifted hue then fades to current hue
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SPLASH              // Full gradient & value pulse away from a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_MULTISPLASH         // Full gradient & value pulse away from multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH        // Hue & value pulse away from a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH   // Hue & value pulse away from multiple key hits then fades value out
#endif
