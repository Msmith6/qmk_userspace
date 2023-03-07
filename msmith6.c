#include QMK_KEYBOARD_H


layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _GAME:
#if defined(KEYBOARD_tdlab_hifinger75)
        rgblight_setrgb(152, 251, 152);
        rgblight_mode(RGBLIGHT_MODE_KNIGHT + 2);
#endif
        break;
    default:
#if defined(KEYBOARD_tdlab_hifinger75)
        rgblight_setrgb(RGB_SPRINGGREEN);
        rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
#endif
        break;
  }
  return state;
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RSE_D:
    case LWR_F:
      return true;
    default:
      return false;
  }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LSFT_T(KC_Z):
    case RSFT_T(KC_DOT):
    case RSFT_T(KC_SLSH):
      return true;
    default:
      return false;
  }
}

bool switch_back_to_game = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ALT_1:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(75) SS_TAP(X_1) SS_DELAY(75) SS_UP(X_LALT));
      }
      return false;
    case ALT_2:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(75) SS_TAP(X_2) SS_DELAY(75) SS_UP(X_LALT));
      }
      return false;
    case ALT_3:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(75) SS_TAP(X_3) SS_DELAY(75) SS_UP(X_LALT));
      }
      return false;
    case ALT_4:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(75) SS_TAP(X_4) SS_DELAY(75) SS_UP(X_LALT));
      }
      return false;
    case ALT_5:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(75) SS_TAP(X_5) SS_DELAY(75) SS_UP(X_LALT));
      }
      return false;
    case CHAT_ENT:
      if (record->event.pressed) {
        tap_code(KC_ENT);
        if (IS_LAYER_ON(_GAME) || switch_back_to_game) {
          switch_back_to_game = !switch_back_to_game;
          layer_invert(_GAME);
        }
      }
      return false;
    case KC_ESC:
      if (record->event.pressed) {
        tap_code(KC_ESC);
        if (switch_back_to_game) {
          switch_back_to_game = false;
          layer_on(_GAME);
        }
      }
      return false;
  }
  return true;
}