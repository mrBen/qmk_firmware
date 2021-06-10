#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

enum layer_number {
    _BEPO = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BEPO
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   B  |   É  |   P  |   O  |   È  |                    |   ^  |   V  |   D  |   L  |   J  |   Z  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   A  |   U  |   I  |   E  |   ,  |-------.    ,-------|   C  |   T  |   S  |   R  |   N  |   M  |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |   À  |   Y  |   X  |   .  |   K  |-------|    |-------|   ’  |   Q  |   G  |   H  |   F  |   W  |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  |      | ESC  |Space |  / Tab  /        \Enter \  |BackSP|Delete|      |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_BEPO] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, BP_B,    BP_EACU, BP_P,    BP_O,    BP_EGRV,                   BP_DCIR, BP_V,    BP_D,    BP_L,    BP_J,    BP_Z,
        XXXXXXX, BP_A,    BP_U,    BP_I,    BP_E,    BP_COMM,                   BP_C,    BP_T,    BP_S,    BP_R,    BP_N,    BP_M,
        XXXXXXX, BP_AGRV, BP_Y,    BP_X,    BP_DOT,  BP_K,    XXXXXXX, XXXXXXX, BP_QUOT, BP_Q,    BP_G,    BP_H,    BP_F,    BP_W,
                                   XXXXXXX, KC_ESC,  KC_SPC,  KC_TAB,  KC_ENT,  KC_BSPC, KC_DEL,  XXXXXXX
    ),

    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  | LAlt | LGUI |LOWER |  /Space /        \Enter \  |RAISE |BackSP| RGUI |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_LOWER] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
        _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* RAISE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  | LAlt | LGUI |LOWER |  /Space /        \Enter \  |RAISE |BackSP| RGUI |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_RAISE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  | LAlt | LGUI |LOWER |  /Space /        \Enter \  |RAISE |BackSP| RGUI |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_ADJUST] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master())
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void        set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
    if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        oled_write_ln(read_layer_state(), false);
        oled_write_ln(read_keylog(), false);
        oled_write_ln(read_keylogs(), false);
        // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        // oled_write_ln(read_host_led_state(), false);
        // oled_write_ln(read_timelog(), false);
    } else {
        oled_write(read_logo(), false);
    }
}
#endif  // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
        set_keylog(keycode, record);
#endif
        // set_timelog();
    }
    return true;
}
