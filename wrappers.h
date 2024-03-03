#pragma once

#define LAYOUT_wrapper_ortho_3x10(...) LAYOUT_ortho_3x10(__VA_ARGS__)
#define LAYOUT_wrapper_bigbar(...) LAYOUT_bigbar(__VA_ARGS__)
#define LAYOUT_wrapper_g4m3r(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_vault35(...) LAYOUT_full_space(__VA_ARGS__)
#define LAYOUT_wrapper_pegasus(...) LAYOUT_default(__VA_ARGS__)
#define LAYOUT_wrapper_plop(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_hifinger75(...) LAYOUT_big_space_enter(__VA_ARGS__)
#define LAYOUT_wrapper_lesovoz(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_ribbon(...) LAYOUT_big_bar(__VA_ARGS__)
#define LAYOUT_wrapper_qaz(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_apricot(...) LAYOUT_wkl_big_bar(__VA_ARGS__)
#define LAYOUT_wrapper_cisne(...) LAYOUT_big_enter(__VA_ARGS__)
#define LAYOUT_wrapper_pochi(...) LAYOUT_basic(__VA_ARGS__)
#define LAYOUT_wrapper_equinox(...) LAYOUT_big(__VA_ARGS__)

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
#define BASE_ROW3               LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH)
#define BASE_ROW3_30PERCENT     LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_N, KC_M,KC_COMM, RSFT_T(KC_DOT)
#define BASE_ROW3_QAZ           LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,KC_COMM, RSFT_T(KC_DOT)

#define LOWER_ROW1              KC_ESC, KC_7, KC_8, KC_9, XXXXXXX, KC_GRV, KC_QUOT, KC_LPRN, KC_RPRN, KC_BSLS
#define LOWER_ROW2              LCTL_T(KC_0), KC_4, RSE_5, LWR_6, XXXXXXX, XXXXXXX, LWR_MIN, KC_EQL, KC_LBRC, KC_RBRC
#define LOWER_ROW3              _______, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX, KC_BSPC, KC_COMM, KC_DOT, _______
#define LOWER_ROW3_30PERCENT    _______, KC_1, KC_2, KC_3, XXXXXXX, _______, KC_BSPC, KC_SLSH, _______, _______
#define LOWER_ROW3_QAZ          _______, KC_1, KC_2, KC_3, XXXXXXX, _______, KC_BSPC, KC_SLSH, _______

#define RAISE_ROW1              KC_ESC, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
#define RAISE_ROW2              KC_LCTL, KC_LALT, _______, SFT_TAB, XXXXXXX, XXXXXXX, KC_LEFT, RSE_DWN,   KC_UP, KC_RGHT
#define RAISE_ROW3              _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_BSPC,  KC_DEL, XXXXXXX, CHAT_ENT
#define RAISE_ROW3_QAZ          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_BSPC,  KC_DEL, KC_ENT

#define MISC_ROW1               KC_F9, KC_F10, KC_F11, KC_F12, KC_RCTL, QK_BOOT, COL_BLCK, CPY_DOWN, CPY_UP, EXP_BLCK
#define MISC_ROW2               KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, MV_LEFT, MV_DOWN, MV_UP, MV_RGHT
#define MISC_ROW3               KC_F1, KC_F2, KC_F3, KC_F4, KC_RALT, KC_PSCR, DEL_LINE, XXXXXXX, XXXXXXX, _______
#define MISC_ROW3_QAZ           KC_F1, KC_F2, KC_F3, KC_F4, KC_RALT, KC_PSCR, DEL_LINE, XXXXXXX, _______

#define THE30_BASE BASE_ROW1, BASE_ROW2, BASE_ROW3_30PERCENT
#define THE30_LOWER LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_30PERCENT
#define THE30_RAISE RAISE_ROW1, RAISE_ROW2, RAISE_ROW3
#define THE30_MISC MISC_ROW1, MISC_ROW2, MISC_ROW3

#define JetvanLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, KC_ENT, \
KC_LSFT, row3, KC_RSFT, \
XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX

#define Jetvan_BASE  JetvanLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Jetvan_LOWER JetvanLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Jetvan_RAISE JetvanLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Jetvan_MISC  JetvanLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define PegasusLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, KC_ENT, \
KC_LSFT, row3, KC_RSFT, \
XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX

#define Pegasus_BASE  PegasusLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Pegasus_LOWER PegasusLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
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
KC_ESC, _______, _______, _______, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, \
KC_LALT, _______, KC_C, _______, _______, KC_B, KC_N, KC_M

#define Vault35Layout(row1, row2, row3) \
row1, MO(4), \
row2, \
row3, \
KC_1, KC_SPC, KC_2

#define Vault35_BASE  Vault35Layout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Vault35_LOWER Vault35Layout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Vault35_RAISE Vault35Layout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Vault35_MISC  Vault35Layout(MISC_ROW1, MISC_ROW2, MISC_ROW3)
#define Vault35_RGB \
RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_5, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, KC_SPC, XXXXXXX

#define PlopLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, \
KC_LSFT, row3, \
KC_1, KC_2, KC_3, KC_0, KC_SPC, KC_4, KC_5, MO(4)

#define Plop_BASE  PlopLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Plop_LOWER PlopLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Plop_RAISE PlopLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Plop_MISC  PlopLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)
#define Plop_RGB \
RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
_______, _______, _______, _______, _______, _______, _______, _______


#define HiFinger75Layout(row1, row2, row3) \
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_DEL, KC_NUM_LOCK, KC_PSLS, KC_PAST, KC_PMNS, \
KC_TAB, row1, KC_BSPC, KC_P7, KC_P8, KC_P9, \
KC_LCTL, row2, KC_P4, KC_P5, KC_P6, KC_PPLS,\
KC_LSFT, row3, KC_UP, KC_P1, KC_P2, KC_P3, \
KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, TO(_GAME), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT, KC_PENT

#define HiFinger75_BASE  HiFinger75Layout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define HiFinger75_LOWER HiFinger75Layout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define HiFinger75_RAISE HiFinger75Layout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define HiFinger75_MISC  HiFinger75Layout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define HiFinger75_GAME \
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_DEL, KC_NUM_LOCK, KC_PSLS, KC_PAST, KC_PMNS, \
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_P7, KC_P8, KC_P9, \
KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, CHAT_ENT, KC_P4, KC_P5, KC_P6, KC_PPLS,\
KC_LSFT, KC_Z, KC_X, LT(_GAME_EXTRA, KC_C), LT(_GAME_EXTRA, KC_V), KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_LSFT, KC_UP, KC_P1, KC_P2, KC_P3, \
KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, TG(_GAME), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT, KC_PENT

#define HiFinger75_GAME_EXTRA \
_______, ALT_1, ALT_2, ALT_3, ALT_4, ALT_5, _______, _______, KC_PSCR, LALT(KC_F9), LALT(KC_F10), _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______

#define LesovozLayout(row1, row2, row3) \
row1, \
row2, \
row3, \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX

#define Lesovoz_BASE  LesovozLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Lesovoz_LOWER LesovozLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Lesovoz_RAISE LesovozLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Lesovoz_MISC  LesovozLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define RibbonLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, \
KC_LSFT, row3, \
XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, MO(4)

#define Ribbon_BASE  RibbonLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Ribbon_LOWER RibbonLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Ribbon_RAISE RibbonLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Ribbon_MISC  RibbonLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)
#define Ribbon_RGB \
RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
_______, _______, _______, _______, _______


#define QAZLayout(row1, row2, row3) \
row1, \
row2, \
row3, \
XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX

#define QAZ_BASE  QAZLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3_QAZ)
#define QAZ_LOWER QAZLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_QAZ)
#define QAZ_RAISE QAZLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3_QAZ)
#define QAZ_MISC  QAZLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3_QAZ)

#define ApricotLayout(row1, row2, row3) \
row1, \
row2, \
row3, \
RGB_HUI, KC_SPC, RGB_VAI

#define Apricot_BASE  ApricotLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3_QAZ)
#define Apricot_LOWER ApricotLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3_QAZ)
#define Apricot_RAISE ApricotLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3_QAZ)
#define Apricot_MISC  ApricotLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3_QAZ)

#define CisneLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, \
KC_LSFT, row3, KC_RSFT, \
XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX

#define Cisne_BASE  CisneLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Cisne_LOWER CisneLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Cisne_RAISE CisneLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Cisne_MISC  CisneLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define PochiLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, \
KC_LSFT, row3, \
XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX

#define Pochi_BASE  PochiLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Pochi_LOWER PochiLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Pochi_RAISE PochiLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Pochi_MISC  PochiLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)

#define EquinoxLayout(row1, row2, row3) \
KC_ESC, row1, KC_BSPC, \
KC_TAB, row2, \
KC_LSFT, row3, \
XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX

#define Equinox_BASE  EquinoxLayout(BASE_ROW1, BASE_ROW2, BASE_ROW3)
#define Equinox_LOWER EquinoxLayout(LOWER_ROW1, LOWER_ROW2, LOWER_ROW3)
#define Equinox_RAISE EquinoxLayout(RAISE_ROW1, RAISE_ROW2, RAISE_ROW3)
#define Equinox_MISC  EquinoxLayout(MISC_ROW1, MISC_ROW2, MISC_ROW3)
