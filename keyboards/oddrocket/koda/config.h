#pragma once

#undef MATRIX_ROWS
#undef MATRIX_COLS
/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

#define MATRIX_ROW_PINS { D3, D2, D1, D4 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }

// /* USB Device descriptor parameter */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x6060
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    Penk
// #define PRODUCT         penkesu
// #define DESCRIPTION     48 key ortholinear with kailh choc keycaps


// #define UNUSED_PINS

// /* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// /* Set 0 if debouncing isn't needed */
// #define DEBOUNCING_DELAY 5

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// /* key combination for command */
// #define IS_COMMAND() ( \
//     keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
// )

// /* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS

// //enable combined mouse mode
// #define MK_COMBINED
