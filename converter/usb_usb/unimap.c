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
  ESC_CTL
};

#define AC_NONE KC_NO
#define AC_OSFT ACTION_MODS_ONESHOT(MOD_LSFT)
#define AC_CESC ACTION_FUNCTION(ESC_CTL)
#define AC_DVRK ACTION_DEFAULT_LAYER_SET(L_BASE)
#define AC_LOWR ACTION_LAYER_MOMENTARY(L_LOWER)
#define AC_GAME ACTION_DEFAULT_LAYER_SET(L_GAME_L)
#define AC_GAMR ACTION_LAYER_MOMENTARY(L_GAME_R)
#define AC_CRSR ACTION_LAYER_MOMENTARY(L_CURSOR)
#define AC_ABSP ACTION_LAYER_TAP_KEY(L_ADJUST, KC_BSPC)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [L_BASE] = UNIMAP(
              NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,
    NONE,     NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,          PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,
    TAB, NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,RGUI,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   ABSP,NONE,     NONE,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    SPC ,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   ENT,      NONE,ENT,                         P4,  P5,  P6,  PCMM,
    LALT,NONE,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        OSFT,RALT,          UP,           P1,  P2,  P3,  PEQL,
    OSFT,NONE,CESC,LOWR,          LGUI,          CRSR,SPC ,NONE,NONE,NONE,NONE,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    [L_LOWER] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,QUOT,COMM,DOT, SCLN,GRV, MINS,SLSH, EQL,LBRC,RBRC,BSLS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,        TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [L_GAME_L] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P7,  P8,  P9,  PSLS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,Q,   W,   E,   R,   T,   BSPC,P4,  P5,  P6,  PAST,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    SPC, A,   S,   D,   F,   G,   ENT, P1,  P2,  P3,  PMNS,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,NONE,Z,   X,   C,   V,   B,   ESC, P0,PCMM,PDOT,  PPLS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    LSFT,TRNS,TRNS,GAMR,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [L_GAME_R] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,P,   O,   I,   U,   Y,   TRNS,PSCR,SLCK,PAUS,MUTE,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,SCLN,L,   K,   J,   H,   TRNS,INS, HOME,PGUP,VOLU,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,SLSH,DOT, COMM,M,   N,   TRNS,DEL, END, PGDN,VOLD,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [L_CURSOR] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P7,  P8,  P9,  PSLS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,INS ,HOME,UP,  END, PGUP,INS, P4,  P5,  P6,  PAST,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,DEL ,LEFT,DOWN,RGHT,BSPC,DEL, P1,  P2,  P3,  PMNS,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,ENT ,PSCR,SLCK,PAUS,PGDN,ESC, P0,PCMM,PDOT,  PPLS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [L_ADJUST] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DVRK,GAME,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    )
};

#define KEYEQ(keya, keyb)       ((keya).row == (keyb).row && (keya).col == (keyb).col)
keyevent_t last_keyevent;
bool did_tap_same_key = false;
bool have_auto_reseale_key = false;
uint16_t auto_release_keycode;

void hook_matrix_change(keyevent_t event)
{
  did_tap_same_key = last_keyevent.pressed && !event.pressed &&
    KEYEQ(last_keyevent.key, event.key);
  last_keyevent = event;
}

void hook_keyboard_loop(void)
{
  if (have_auto_reseale_key)
  {
    unregister_code(auto_release_keycode);
    have_auto_reseale_key = false;
  }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch (id)
  {
    case ESC_CTL:
      if (record->event.pressed)
      {
        register_code(KC_LCTL);
      } else {
        unregister_code(KC_LCTL);
        if (did_tap_same_key)
        {
          have_auto_reseale_key = true;
          auto_release_keycode = KC_ESC;
          register_code(auto_release_keycode);
        }
      }
      break;
  }
}

