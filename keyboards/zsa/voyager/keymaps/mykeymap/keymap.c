#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_0_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    CSA_SLASH,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_EQUAL,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           CSA_DCRC,
    CSA_CCED,       MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RCTL, KC_SCLN),CSA_EGRV,
    LT(2, CSA_UGRV),KC_Z,           MT(MOD_RALT, KC_X),MT(MOD_RGUI, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RGUI, KC_COMMA),MT(MOD_RALT, KC_DOT),CSA_ECUT,       LT(2, CSA_AGRV),
                                                    LT(3, KC_SPACE),LT(5, KC_TAB),                                  LT(5, KC_BSPC), LT(3, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    CSA_CCED,       MT(MOD_LGUI, KC_A),KC_TRANSPARENT, MT(MOD_LCTL, KC_D),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LCTL, KC_K),KC_TRANSPARENT, MT(MOD_RGUI, KC_SCLN),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_C),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_COMMA),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    LT(4, KC_SPACE),LT(6, KC_TAB),                                  LT(6, KC_BSPC), LT(4, KC_ENTER)
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    CW_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_CAPS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
    CW_TOGG,        KC_EXLM,        KC_AT,          CSA_LESS,       CSA_GRTR,       KC_PERC,                                        CSA_QEST,       CSA_LCBR,       CSA_RCBR,       CSA_LBRC,       CSA_RBRC,       ST_MACRO_0,
    KC_CAPS,        KC_HASH,        KC_PLUS,        KC_ASTR,        KC_EQUAL,       KC_AMPR,                                        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_COLN,        KC_SCLN,        ST_MACRO_1,
    QK_LLCK,        KC_UNDS,        KC_MINUS,       CSA_SLASH,      CSA_BSLS,       CSA_PIPE,                                       CSA_APOS,       CSA_DQOT,       KC_COMMA,       KC_DOT,         CSA_DTLD,       QK_LLCK,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
    CW_TOGG,        KC_EXLM,        KC_AT,          CSA_LESS,       CSA_GRTR,       KC_PERC,                                        CSA_QEST,       CSA_LCBR,       CSA_RCBR,       CSA_LBRC,       CSA_RBRC,       ST_MACRO_2,
    KC_CAPS,        KC_HASH,        KC_PLUS,        KC_ASTR,        KC_EQUAL,       KC_AMPR,                                        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_COLN,        KC_SCLN,        ST_MACRO_3,
    QK_LLCK,        KC_UNDS,        KC_MINUS,       CSA_SLASH,      CSA_BSLS,       CSA_PIPE,                                       CSA_APOS,       CSA_DQOT,       KC_COMMA,       KC_DOT,         ST_MACRO_4,     QK_LLCK,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    UG_TOGG,        TOGGLE_LAYER_COLOR,UG_NEXT,KC_NO,          UG_VALD,        UG_VALU,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_JIGGLER_TOGGLE,
    HSV_0_0_255,    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          LGUI(LSFT(KC_5)),
    KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          KC_NO,          KC_NO,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    UG_TOGG,        TOGGLE_LAYER_COLOR,UG_NEXT,KC_NO,          UG_VALD,        UG_VALU,                                        KC_INSERT,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_JIGGLER_TOGGLE,
    HSV_0_0_255,    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_PSCR,
    KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          KC_NO,          KC_NO,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo1[] = { CSA_SLASH, KC_1, COMBO_END};
const uint16_t PROGMEM combo2[] = { CSA_CCED, MT(MOD_LCTL, KC_A), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_EQUAL, KC_Q, COMBO_END};
const uint16_t PROGMEM combo4[] = { CSA_CCED, MT(MOD_LGUI, KC_A), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(1)),
    COMBO(combo1, KC_ESCAPE),
    COMBO(combo2, KC_CAPS),
    COMBO(combo3, CW_TOGG),
    COMBO(combo4, KC_CAPS),
};


bool capslock_active = false;
bool capsword_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {20,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {20,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capsword_active && (biton32(layer_state) >= 0 && biton32(layer_state) <= 4)) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 169, 255, 255 });
    rgb_matrix_set_color( 6, rgb.r, rgb.g, rgb.b );
  }
  if (capslock_active && (biton32(layer_state) >= 0 && biton32(layer_state) <= 4)) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 88, 255, 255 });
    rgb_matrix_set_color( 12, rgb.r, rgb.g, rgb.b );
  }
  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_LBRC))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_LBRC))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_RBRC))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
  }
  return true;
}

// ------------------------------------------------------------
// Activation OS Detection
//
// NOTE: Active Layer 1 si Windows
// ------------------------------------------------------------
os_variant_t detected_os = OS_UNSURE;
bool os_layer_applied = false; // évite d'activer le layer plusieurs fois


bool process_detected_host_os_user(os_variant_t os) {
    //  Ne pas changer les layers ici — juste enregistrer l'OS
    detected_os = os;

    return true;
}

void matrix_scan_user(void) {
    // matrix_scan_user est appelée en boucle mais le flag
    //   garantit qu'on ne togglera qu'une fois
    if (!os_layer_applied && detected_os != OS_UNSURE) {
        switch (detected_os) {
            case OS_WINDOWS:
                layer_on(1);
                break;
            default:
                break;
        }

        os_layer_applied = true; // empêche la répétition
    }
}

// ------------------------------------------------------------
// Activation CAPS WORD
//
// NOTES:
// - Activation via L-Shift + R-Shift.
// - Le callback pour ne pas ajuster le shift sur Tiret
// ------------------------------------------------------------
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case CSA_ECUT: // é
        case CSA_EGRV: // è
        case CSA_AGRV: // à
        case CSA_UGRV: // ù
        case CSA_CCED: // ç
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:  // _
        case KC_MINS:  // -
        case KC_EQUAL: // =
        case CSA_DCRC: // ^
        case CSA_SLASH: // /
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

void caps_word_set_user(bool active) {
    if (active) {
        // Do something when Caps Word activates.
        capsword_active = true;
    } else {
        // Do something when Caps Word deactivates.
        capsword_active = false;
    }
}


// ------------------------------------------------------------
// Activation Key Override
//
// NOTES:
// - Shift + Backspace => Delete
// ------------------------------------------------------------
const key_override_t shift_bspc_to_del_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&shift_bspc_to_del_key_override
};


// ------------------------------------------------------------
// Personnalisation Flow Tap
//
// NOTES:
// - Ajouter les touches accentuées: é, è, à, ù, ç, ^
// - Réduire délai sur touche F et H pour permettre le SHIFT
//   plus facilement (ex.: Shift(F)+, pour ' comme dans "l'"
// ------------------------------------------------------------
bool is_flow_tap_key(uint16_t keycode) {
    // if ((get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) != 0) {
    //     return false; // Disable Flow Tap on hotkeys.
    // }
    switch (get_tap_keycode(keycode)) {
        case CSA_ECUT: // é
        case CSA_EGRV: // è
        case CSA_AGRV: // à
        case CSA_UGRV: // ù
        case CSA_CCED: // ç
        case CSA_DCRC: // ^
        case KC_SPC:
        case KC_A ... KC_Z:
        case KC_DOT:
        case KC_COMM:
        case KC_SCLN:
        //case KC_SLSH: (couvert par CSA_ECUT)
            return true;
    }
    return false;
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record,
                           uint16_t prev_keycode) {
    if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
        switch (get_tap_keycode(keycode)) {
            case KC_F:
            case KC_J:
              // return FLOW_TAP_TERM - 50;  // Short timeout on these keys.
              return 0;

            default:
              return FLOW_TAP_TERM;  // Longer timeout otherwise.
        }
    }
    return 0;  // Disable Flow Tap.
}


//---------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (get_tap_keycode(keycode)) {
        case KC_SPACE:
        case KC_TAB:
        case KC_BSPC:
        case KC_ENTER:
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
}
