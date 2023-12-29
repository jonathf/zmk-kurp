// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
#pragma once

#define _0_PIPE &kp PIPE
#define _1_PIPE &kp LA(N7)

#define _0_PARA &kp LA(S)
#define _1_PARA &kp LS(NON_US_BSLH)
ZMK_UNICODE_SINGLE(__2_PARA, N0, N0, A, N7)
#define _2_PARA &__2_PARA

#define _0_LDANG &kp LA(LBKT)
#define _1_LDANG &kp LS(LA(V))
ZMK_UNICODE_SINGLE(__2_LDANG, N0, N0, A, B)
#define _2_LDANG &__2_LDANG

#define _0_RDANG &kp LA(RBKT)
#define _1_RDANG &kp LS(LA(B))
ZMK_UNICODE_SINGLE(__2_RDANG, N0, N0, B, B)
#define _2_RDANG &__2_RDANG

#define _0_QMARK &kp QMARK
#define _1_QMARK &kp UNDER

#define _HOME &kp HOME
#define _PG_DN &kp PG_DN
#define _PG_UP &kp PG_UP
#define _END &kp END
#define _PSCRN &kp PSCRN

#define _0_HASH &kp HASH
#define _1_HASH &kp LS(N3)
#define _0_SQT &kp SQT
#define _1_SQT &kp NON_US_BSLH
#define _0_LT &kp LT
#define _1_LT &kp GRAVE
#define _0_GT &kp GT
#define _1_GT &kp LS(GRAVE)
#define _0_AMPS &kp AMPS
#define _1_AMPS &kp LS(N6)

#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGHT &kp RIGHT

// nop backspace
// nop percent

#define _0_EURO &hold_tap RALT LA(N5)
#define _1_EURO &hold_tap RALT LA(N4)
ZMK_UNICODE_SINGLE(__2_EURO, N2, N0, A, C)
#define _2_EURO &__2_EURO

#define _0_TILDE &hold_tap LALT TILDE
// #define _1_TILDE &hold_tap LALT LA(RBRC)
// ZMK_MOD_NODEAD(_tilde, LA(RBRC))
// #define _1_TILDE &_tilde LALT 0
#define _1_TILDE &hold_tap LALT LC(RBRC)


#define _0_GRAVE &hold_tap LCTRL GRAVE
// #define _1_GRAVE &kp LS(EQUAL)
ZMK_MOD_NODEAD(_grave, LS(EQUAL))
#define _1_GRAVE &_grave LCTRL 0

#define _0_HASH2 &hold_tap LSHIFT NON_US_HASH
ZMK_MOD_NODEAD(_acute, EQUAL)
#define _1_ACUTE &_acute LSHIFT 0
ZMK_UNICODE_SINGLE(__2_ACUTE, N0, N0, B, N4)
#define _2_ACUTE &__2_ACUTE

#define _0_BSLH2 &hold_tap LGUI NON_US_BSLH

#define _LGUI &kp LGUI
#define _LSHIFT &kp LSHIFT
#define _LCTRL &kp LCTRL
#define _LALT &kp LALT
#define _RALT &kp RALT
