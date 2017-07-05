/*
 * JIS layout Japanese keyboard
 */
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: JIS LAYOUT
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| JY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Ret | |Del|End|PgD| |  7|  8|  9|   |
     * |------------------------------------------------------`    | `-----------' |-----------|  +|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  \|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * |Ctrl |Gui |Alt |MHEN| Space  |HENK|KANA|Alt |Gui |Menu|Ctrl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP_IBM(
                     F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
                     F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,

    PSCR,ESC,   ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, NO,  BSPC,  INS, HOME,PGUP,  NLCK,PSLS,PAST,PMNS,
    SLCK,INT4,  TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     NO,    DEL, END, PGDN,  P7,  P8,  P9,  PPLS,
    PAUS,INT5,  LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     BSLS,ENT,        UP,         P4,  P5,  P6,  PCMM,
    APP, INT6,  LSFT,LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     NO,  RSFT,  LEFT,INT2,RGHT,  P1,  P2,  P3,  PENT,
    RGUI,LGUI,  LCTL,     LALT,               SPC,                          LGUI,     GRV,        DOWN,       NO,  P0,  PDOT,NO
    ),
};

const action_t PROGMEM fn_actions[] = {
};
