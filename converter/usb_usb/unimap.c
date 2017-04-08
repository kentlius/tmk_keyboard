/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#include "unimap_trans.h"

#define AC_ESC_ ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC)
#define AC_LOWR ACTION_LAYER_MOMENTARY(1)
#define AC_RAIS ACTION_LAYER_MODS(1, MOD_LSFT)
#define AC_SPFN ACTION_LAYER_TAP_KEY(2, KC_SPC)
#define AC_SWEJ ACTION_MODS_KEY(MOD_LALT, KC_GRV)
#define AC_AF4_ ACTION_MODS_KEY(MOD_LALT, KC_F4)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [0] = UNIMAP(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,
    TAB, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   ENT, EQL,      BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   RGUI,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,
    LSFT,NUBS,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        RALT,RSFT,          UP,           P1,  P2,  P3,  PEQL,
    LALT,LGUI,ESC_,LOWR,          SPFN,          RAIS,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    [1] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,QUOT,COMM,DOT, SLSH,SCLN,GRV, MINS, EQL,LBRC,RBRC,BSLS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,      TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [2] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SWEJ,HOME,UP,  END, TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC,LEFT,DOWN,RGHT,DEL,TRNS,      TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,AF4_,TAB, ESC, ENT, TRNS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
};

const action_t PROGMEM fn_actions[] = {
};

