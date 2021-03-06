#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( 
  ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC,
  LCTL, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, ENT,
  LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT,
  LGUI, TAB,  RSFT, LALT, FN2,     SPC,     FN1,  LEFT, DOWN, UP,   RGHT),
[1] = KEYMAP( /* RAISE */
  GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    DEL,
  TRNS, F1,   F2,   F3,   F4,   F5,   F6,   4,    5,    6,    TRNS, TRNS,
  TRNS, F7,   F8,   F9,   F10,  F11,  F12,  1,    2,    3,    TRNS, PGUP,
  MPRV, MNXT, TRNS, MUTE, TRNS,    TRNS,    FN1,  TRNS, TRNS, TRNS, PGDN),
[2] = KEYMAP( /* LOWER */
  FN22, FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, MINS,
  TRNS, TRNS, TRNS, PAUSE, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, EQL,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
  MPLY, MSTP, VOLU, VOLD, FN2,     TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [2] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay 

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),

    [29] = ACTION_MODS_KEY(MOD_LSFT | MOD_RSFT, KC_PAUSE),
};
