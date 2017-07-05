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

    PSCR,ESC,   ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, GRV, BSPC,  INS, HOME,PGUP,  NLCK,PSLS,PAST,PMNS,
    SLCK,INT4,  TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,      ENT,  DEL, END, PGDN,  P7,  P8,  P9,  PPLS,
    PAUS,INT5,  LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,                      UP,         P4,  P5,  P6, 
    APP, INT6,  LSFT,LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,BSLS,     RSFT,  LEFT,INT2,RGHT,  P1,  P2,  P3,  PENT,
    RGUI,LGUI,  LALT,     LGUI,          SPC,SPC, SPC,                      LGUI,     RALT,       DOWN,       P0,  PDOT,
    ),
};
				  K74,K75,K76,K77,K78,K79,K7A,K7B,K7C,K7D,K7E,K7F,                                         \
                  K68,K69,K6A,K6B,K6C,K6D,K6E,K6F,K70,K71,K72,K73,                                         \
                                                                                                           \
    K48,K49,  K3D,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D,K2E,K2F,K30,K3E,  K52,K53,K54,  K64,K65,K66,K67, \
    K46,K47,  K3C,K18,K19,K1A,K1B,K1C,K1D,K1E,K1F,K20,K21,K22,K23,    K3B,  K4F,K50,K51,  K5D,K5E,K5F,K63, \
    K44,K45,  K3A,K0C,K0D,K0E,K0F,K10,K11,K12,K13,K14,K15,K16,K17,              K4E,      K5A,K5B,K5C,     \
    K42,K43,  K38,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,        K39,  K4B,K4C,K4D,  K57,K58,K59,K60, \
    K40,K41,  K31,    K32,        K33,K34,K35,                K36,    K37,      K4A,      K55,K56          \

const action_t PROGMEM fn_actions[] = {
};
