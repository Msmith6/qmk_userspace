#pragma once

#define LAYOUT_wrapper_ortho_3x10(...) LAYOUT_ortho_3x10(__VA_ARGS__)
#define LAYOUT_wrapper_bigbar(...) LAYOUT_bigbar(__VA_ARGS__)
#define LAYOUT_wrapper_g4m3r(...) LAYOUT(__VA_ARGS__)

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _MISC 3
#define _GAME 4
#define _GAME_EXTRA 5

#define COL_BLCK LCTL(LSFT(KC_LBRC)) // collapse code block (VS Code)
#define EXP_BLCK LCTL(LSFT(KC_RBRC)) // expand code block (VS Code)
#define CPY_UP LALT(LSFT(KC_UP)) // copies line up (VS Code)
#define CPY_DOWN LALT(LSFT(KC_DOWN)) // copies line down (VS Code)
#define MV_LEFT LCTL(KC_LBRC) // move left (VS Code)
#define MV_RGHT LCTL(KC_RBRC) // move right (VS Code)
#define MV_UP LALT(KC_UP) // move up (VS Code)
#define MV_DOWN LALT(KC_DOWN) // move down (VS Code)
#define DEL_LINE LCTL(LSFT(KC_K)) // delete line (VS Code)
#define LWR_J LT(_LOWER, KC_J)
#define LWR_F LT(_LOWER, KC_F)
#define LWR_MIN LT(_LOWER, KC_MINS)
#define LWR_6 LT(_LOWER, KC_6)
#define RSE_5 LT(_RAISE, KC_5)
#define RSE_K LT(_RAISE, KC_K)
#define RSE_D LT(_RAISE, KC_D)
#define RSE_DWN LT(_RAISE, KC_DOWN)
#define SFT_TAB LSFT_T(KC_TAB)
#define MISC_G LT(_MISC, KC_G)
#define MISC_H LT(_MISC, KC_H)

#define BASE_ROW1               KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P
#define BASE_ROW2               LCTL_T(KC_A), LALT_T(KC_S), RSE_D, LWR_F,MISC_G,MISC_H, LWR_J, RSE_K, KC_L, RCTL_T(KC_SCLN)
#define BASE_ROW3_30PERCENT     LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_N, KC_M,KC_COMM, RSFT_T(KC_DOT)
#define BASE_ROW3_REGULAR       LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH)

#define LOWER_ROW1              KC_ESC, KC_7, KC_8, KC_9, XXXXXXX, KC_GRV, KC_QUOT, KC_LPRN, KC_RPRN, KC_BSLASH
#define LOWER_ROW2              LCTL_T(KC_0), KC_4, RSE_5, LWR_6, XXXXXXX, XXXXXXX, LWR_MIN, KC_EQL, KC_LBRC, KC_RBRC
#define LOWER_ROW3_30PERCENT    _______, KC_1, KC_2, KC_3, XXXXXXX, _______, KC_BSPC, KC_SLSH, _______, _______
#define LOWER_ROW3_REGULAR      _______, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX, KC_BSPC, KC_COMM, KC_DOT, _______

#define RAISE_ROW1              KC_ESC, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
#define RAISE_ROW2              KC_LCTL, KC_LALT, _______, SFT_TAB, XXXXXXX, XXXXXXX, KC_LEFT, RSE_DWN,   KC_UP, KC_RGHT
#define RAISE_ROW3              _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_BSPC,  KC_DEL, XXXXXXX, KC_ENT

#define MISC_ROW1               KC_F9, KC_F10, KC_F11, KC_F12, KC_RCTL, RESET, COL_BLCK, CPY_DOWN, CPY_UP, EXP_BLCK
#define MISC_ROW2               KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, MV_LEFT, MV_DOWN, MV_UP, MV_RGHT
#define MISC_ROW3               KC_F1, KC_F2, KC_F3, KC_F4, KC_RALT, XXXXXXX, DEL_LINE, XXXXXXX, XXXXXXX, _______

#define THE30_BASE BASE_ROW1, BASE_ROW2, BASE_ROW3_30PERCENT
#define THE30_LOWER LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_30PERCENT
#define THE30_RAISE RAISE_ROW1, RAISE_ROW2, RAISE_ROW3
#define THE30_MISC MISC_ROW1, MISC_ROW2, MISC_ROW3

#define JetvanLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, KC_ENT, \
KC_LSFT, row3, KC_RSFT, \
XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX

#define Jetvan_BASE  JetvanLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3_REGULAR)
#define Jetvan_LOWER JetvanLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_REGULAR)
#define Jetvan_RAISE JetvanLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Jetvan_MISC  JetvanLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define PegasusLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, KC_ENT, \
KC_LSFT, row3, KC_RSFT, \
XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX

#define Pegasus_BASE  PegasusLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3_REGULAR)
#define Pegasus_LOWER PegasusLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_REGULAR)
#define Pegasus_RAISE PegasusLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Pegasus_MISC  PegasusLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define G4M3RAlpha_BASE \
KC_1, KC_2, KC_3, KC_4, KC_5, \
BASE_ROW1, \
BASE_ROW2, \
LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_SPC, KC_B, KC_N, RSFT_T(KC_M)

#define G4M3RAlpha_LOWER \
KC_1, KC_2, KC_3, KC_4, KC_5, \
LOWER_ROW1, \
LOWER_ROW2, \
_______, KC_1, KC_2, KC_3, KC_BSPC, KC_COMM, KC_DOT, RSFT_T(KC_SLSH)

#define G4M3RAlpha_RAISE \
KC_1, KC_2, KC_3, KC_4, KC_5, \
RAISE_ROW1, \
RAISE_ROW2, \
_______, XXXXXXX, XXXXXXX, KC_LGUI, KC_BSPC, KC_DEL, XXXXXXX, CHAT_ENT

#define G4M3RAlpha_MISC \
KC_1, KC_2, KC_3, KC_4, TO(_GAME), \
MISC_ROW1, \
MISC_ROW2, \
KC_F1, KC_F2, KC_F3, KC_F4, DEL_LINE, KC_RALT, XXXXXXX, _______

#define G4M3RAlpha_GAME \
KC_1, KC_2, KC_3, KC_4, KC_5, \
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, LT(_GAME, KC_O), \
KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, \
KC_LSFT, KC_Z, KC_X, LT(_GAME_EXTRA, KC_C), KC_SPC, KC_V, KC_B, CHAT_ENT

#define G4M3RAlpha_GAME_EXTRA \
ALT_1, ALT_2, ALT_3, ALT_4, ALT_5, \
_______, _______, _______, _______,  KC_T, KC_PSCR, LALT(KC_F10), LALT(KC_F9), KC_O, KC_P, \
_______, _______, _______, _______, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, \
KC_LALT, _______, KC_C, _______, _______, KC_B, KC_N, KC_M
