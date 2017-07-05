/*
Copyright 2011,2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


/* 
 * IBM Terminal keyboard 6110345(122keys)/1392595(102keys)
 * http://geekhack.org/showthread.php?10737-What-Can-I-Do-With-a-Terminal-Model-M
 * http://www.seasip.info/VintagePC/ibm_1391406.html
 *
 * Keymap array:
 *     8 bytes
 *   +---------+
 *  0|         |
 *  :|         | 0x00-0x87
 *  ;|         |
 * 17|         |
 *   +---------+
 */

/* All keys */
#define KEYMAP_ALL( \
				  K74,K75,K76,K77,K78,K79,K7A,K7B,K7C,K7D,K7E,K7F,                                         \
                  K68,K69,K6A,K6B,K6C,K6D,K6E,K6F,K70,K71,K72,K73,                                         \
                                                                                                           \
    K48,K49,  K3D,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D,K2E,K2F,K30,K3E,  K52,K53,K54,  K64,K65,K66,K67, \
    K46,K47,  K3C,K18,K19,K1A,K1B,K1C,K1D,K1E,K1F,K20,K21,K22,K23,    K3B,  K4F,K50,K51,  K5D,K5E,K5F,K63, \
    K44,K45,  K3A,K0C,K0D,K0E,K0F,K10,K11,K12,K13,K14,K15,K16,K17,              K4E,      K5A,K5B,K5C,     \
    K42,K43,  K38,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,        K39,  K4B,K4C,K4D,  K57,K58,K59,K60, \
    K40,K41,  K31,    K32,        K33,K34,K35,                K36,    K37,      K4A,      K55,K56          \
) { \
    { KC_NO,    KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07 }, \
    { KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17 }, \
    { KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27 }, \
    { KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37 }, \
    { KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_NO    }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47 }, \
    { KC_##K48, KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F }, \
    { KC_##K50, KC_##K51, KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_##K57 }, \
    { KC_##K58, KC_##K59, KC_##K5A, KC_##K5B, KC_##K5C, KC_##K5D, KC_##K5E, KC_##K5F }, \
    { KC_##K60, KC_NO,    KC_NO,    KC_##K63, KC_##K64, KC_##K65, KC_##K66, KC_##K67 }, \
    { KC_##K68, KC_##K69, KC_##K6A, KC_##K6B, KC_##K6C, KC_##K6D, KC_##K6E, KC_##K6F }, \
    { KC_##K70, KC_##K71, KC_##K72, KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_##K77 }, \
    { KC_##K78, KC_##K79, KC_##K7A, KC_##K7B, KC_##K7C, KC_##K7D, KC_##K7E, KC_##K7F }, \
}

#define KEYMAP_IBM( \
				  K74,K75,K76,K77,K78,K79,K7A,K7B,K7C,K7D,K7E,K7F,                                         \
                  K68,K69,K6A,K6B,K6C,K6D,K6E,K6F,K70,K71,K72,K73,                                         \
                                                                                                           \
    K48,K49,  K3D,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D,K2E,K2F,K30,K3E,  K52,K53,K54,  K64,K65,K66,K67, \
    K46,K47,  K3C,K18,K19,K1A,K1B,K1C,K1D,K1E,K1F,K20,K21,K22,K23,    K3B,  K4F,K50,K51,  K5D,K5E,K5F,K63, \
    K44,K45,  K3A,K0C,K0D,K0E,K0F,K10,K11,K12,K13,K14,K15,K16,K17,              K4E,      K5A,K5B,K5C,     \
    K42,K43,  K38,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,        K39,  K4B,K4C,K4D,  K57,K58,K59,K60, \
    K40,K41,  K31,    K32,        K33,K34,K35,                K36,    K37,      K4A,      K55,K56          \
) \
KEYMAP_ALL( \
				  K74,K75,K76,K77,K78,K79,K7A,K7B,K7C,K7D,K7E,K7F,                                         \
                  K68,K69,K6A,K6B,K6C,K6D,K6E,K6F,K70,K71,K72,K73,                                         \
                                                                                                           \
    K48,K49,  K3D,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D,K2E,K2F,K30,K3E,  K52,K53,K54,  K64,K65,K66,K67, \
    K46,K47,  K3C,K18,K19,K1A,K1B,K1C,K1D,K1E,K1F,K20,K21,K22,K23,    K3B,  K4F,K50,K51,  K5D,K5E,K5F,K63, \
    K44,K45,  K3A,K0C,K0D,K0E,K0F,K10,K11,K12,K13,K14,K15,K16,K17,              K4E,      K5A,K5B,K5C,     \
    K42,K43,  K38,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,        K39,  K4B,K4C,K4D,  K57,K58,K59,K60, \
    K40,K41,  K31,    K32,        K33,K34,K35,                K36,    K37,      K4A,      K55,K56          \
)

/* US layout */
#define KEYMAP( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,K5D, KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA  \
) \
KEYMAP_ALL( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,K5D, KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA, \
                                                                                            \
    SYSTEM_POWER, SYSTEM_SLEEP, SYSTEM_WAKE,                                                \
    AUDIO_MUTE, AUDIO_VOL_UP, AUDIO_VOL_DOWN,                                               \
    MEDIA_NEXT_TRACK, MEDIA_PREV_TRACK, MEDIA_STOP, MEDIA_PLAY_PAUSE, MEDIA_SELECT,         \
    MAIL, CALCULATOR, MY_COMPUTER,                                                          \
    WWW_SEARCH, WWW_HOME, WWW_BACK, WWW_FORWARD,                                            \
    WWW_STOP, WWW_REFRESH, WWW_FAVORITES                                                    \
)

/* ISO layout */
#define KEYMAP_ISO( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,     KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,K5D,K5A,               K6B,K73,K74,K79, \
    K12,K61,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,    K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA  \
) \
KEYMAP_ALL( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,K5D, KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA, \
                                                                                            \
    SYSTEM_POWER, SYSTEM_SLEEP, SYSTEM_WAKE,                                                \
    AUDIO_MUTE, AUDIO_VOL_UP, AUDIO_VOL_DOWN,                                               \
    MEDIA_NEXT_TRACK, MEDIA_PREV_TRACK, MEDIA_STOP, MEDIA_PLAY_PAUSE, MEDIA_SELECT,         \
    MAIL, CALCULATOR, MY_COMPUTER,                                                          \
    WWW_SEARCH, WWW_HOME, WWW_BACK, WWW_FORWARD,                                            \
    WWW_STOP, WWW_REFRESH, WWW_FAVORITES                                                    \
)

/* JIS layout */
#define KEYMAP_JIS( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,         KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K6A,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,         KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,K5D,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,K51,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,    K67,K29,K64,K13,            K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA  \
) \
KEYMAP_ALL( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,K5D, KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA, \
                                                                                            \
    SYSTEM_POWER, SYSTEM_SLEEP, SYSTEM_WAKE,                                                \
    AUDIO_MUTE, AUDIO_VOL_UP, AUDIO_VOL_DOWN,                                               \
    MEDIA_NEXT_TRACK, MEDIA_PREV_TRACK, MEDIA_STOP, MEDIA_PLAY_PAUSE, MEDIA_SELECT,         \
    MAIL, CALCULATOR, MY_COMPUTER,                                                          \
    WWW_SEARCH, WWW_HOME, WWW_BACK, WWW_FORWARD,                                            \
    WWW_STOP, WWW_REFRESH, WWW_FAVORITES                                                    \
)

#endif
