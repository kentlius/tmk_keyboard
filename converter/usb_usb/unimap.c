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

enum keymap_layers{
  L_BASE,
  L_GAME_L,
  L_GAME_R,
  L_LOWER,
  L_RAISE,
  L_CURSOR,
  L_ADJUST
};

enum function_codes {
  LCTRL_ESC
}

#define LOWR ACTION_LAYER_MOMENTARY(L_LOWER)
#define CRSR ACTION_LAYER_TAP_KEY(L_CURSOR, KC_SPC)
#define CESC ACTION_FUNCTION(LCTRL_ESC, 0)
#define OSFT ACTION_MODS_ONESHOT(MOD_LSFT)

/*
#define R01C01 KC_TAB
#define R02C01 ESC_CTL
#define R03C01 OSM_SFT
#define R01C12 LT(L_ADJUST, KC_BSPC)
#define R02C12 ENT_CTL
#define R03C12 OSM_SFT
#define BOTTOMROW      {XXXXXXX, XXXXXXX, KC_LGUI, KC_LALT, OSL_LWR, LCR_SPC, LCR_SPC, OSL_LWR, KC_RALT, KC_RGUI, XXXXXXX, XXXXXXX}
#define BOTTOMROW_GAME {_______, _______, KC_LGUI, KC_LALT, GAME_R,  KC_SPC,  KC_LSFT, KC_KP_0, KC_PCMM, KC_PDOT, KC_PSLS, KC_NLCK}
*/

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [L_BASE] = UNIMAP(
              NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,
    NONE,     NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,          PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,
    TAB, NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,RGUI,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   BSPC,EQL,      NONE,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    CRSR,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   ENT,      NUHS,ENT,                         P4,  P5,  P6,  PCMM,
    LALT,NUBS,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        OSFT,RALT,          UP,           P1,  P2,  P3,  PEQL,
    OSFT,LGUI,CESC,LOWR,          LGUI,          LOWR,CRSR,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    [L_LOWER] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,QUOT,COMM,DOT, SLSH,SCLN,GRV, MINS, EQL,LBRC,RBRC,BSLS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,      TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [L_CURSOR] = UNIMAP(
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

