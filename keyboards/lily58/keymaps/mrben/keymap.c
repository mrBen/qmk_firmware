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
        XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,      XXXXXXX,      XXXXXXX,                   XXXXXXX, XXXXXXX,      XXXXXXX,      XXXXXXX,     XXXXXXX,      XXXXXXX,
        XXXXXXX, BP_B,         BP_EACU,     BP_P,         BP_O,         BP_EGRV,                   BP_DCIR, BP_V,         BP_D,         BP_L,        BP_J,         BP_Z,
        XXXXXXX, LGUI_T(BP_A), ALT_T(BP_U), LCTL_T(BP_I), LSFT_T(BP_E), BP_COMM,                   BP_C,    RSFT_T(BP_T), RCTL_T(BP_S), ALT_T(BP_R), RGUI_T(BP_N), BP_M,
        XXXXXXX, BP_AGRV,      BP_Y,        BP_X,         BP_DOT,       BP_K,    XXXXXXX, XXXXXXX, BP_QUOT, BP_Q,         BP_G,         BP_H,        BP_F,         BP_W,
                                             XXXXXXX, KC_ESC, LT(_LOWER, KC_SPC), KC_TAB, KC_ENT, LT(_RAISE, KC_BSPC), ALGR_T(KC_DEL), XXXXXXX
    ),

    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |   @  |   +  |   -  |    / |   *  |   =  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |   %  |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  |      | ESC  |      |  / Tab  /        \Enter \  |BackSP|Delete|     |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_LOWER] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   BP_AT,   BP_PLUS, BP_MINS, BP_SLSH, BP_ASTR, BP_EQL,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, BP_PERC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* RAISE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   "  |   «  |   »  |   (  |   )  |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   $  |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  |      | ESC  |Space |  / Tab  /        \Enter \  |      |Delete|      |
     *                  |      |      |      | /      /          \      \ |      |      |      |
     *                  `--------------------''------'            '------''--------------------'
     */
    [_RAISE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, BP_DQUO, BP_LDAQ, BP_RDAQ, BP_LPRN, BP_RPRN,                   _______, _______, _______, _______, _______, _______,
        _______, BP_DLR,  _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
     * `-----------------------------------------/      /      \      \-----------------------------------------'
     *                  |      | ESC  |Space |  / Tab  /        \Enter \  |BackSP|Delete|      |
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
