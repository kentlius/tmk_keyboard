#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|Esc|Bak|
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         SpaceFN       |Alt  |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,LBRC,RBRC,ESC, BSPC,  \
           TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,SLSH,EQL, BSLS,       \
           FN4, A,   O,   E,   U,   I,   D,   H,   T,   N,   S,MINS,ENT,             \
           FN2, SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,FN3, FN0,             \
                LGUI,LALT,          FN1,                FN5, RGUI),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Del|
     * |-----------------------------------------------------------|
     * |     |   |   |Esc|   |   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|`  |~  |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,TRNS,  \
           TRNS,INS, HOME,UP,  END, PGUP,TRNS,TRNS,MS_U,TRNS,BTN3,TRNS,TRNS,TRNS,       \
           TRNS,DEL, LEFT,DOWN,RGHT,BSPC,PGUP,MS_L,MS_D,MS_R,BTN1,TRNS,TRNS,            \
           TRNS,ENT, PSCR,SLCK,PAUS,PGDN,PGDN,TRNS,TRNS,TRNS,BTN2,TRNS,NO,              \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



/*
 * user defined action function
 */
// enum function_id {
// };

/*
 * Fn action definition
 */
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),
    [2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_LBRC),
    [3] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_RBRC),
    [4] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [5] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_BSPC),
};

