// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
// !"Å \`789  !"Å ``/()
// (Æ)= +456  (Æ)= ? %&
// %&å¨?0123  %&Å ?=!"
#pragma once

#define _0_EXCL &kp EXCL
#define _1_EXCL &kp LS(N1)
#define _0_AT &kp AT
#define _1_AT &kp BSLH
#define _0_LBRC &kp LBRC
#define _1_LBRC &kp LA(LS(N8))
#define _0_RBRC &kp RBRC
#define _1_RBRC &kp LA(LS(N9))
#define _0_EQUAL &kp EQUAL
#define _1_EQUAL &kp LS(N0)

#define _0_PLUS &kp PLUS
#define _1_PLUS &kp MINUS
#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9

#define _0_AA &kp LA(W)
#define _1_AA &kp LBKT
ZMK_UNICODE_PAIR(__2_AA, N0, N0, E, N5, N0, N0, C, N5)
#define _2_AA &__2_AA

#define _0_STAR &kp STAR
#define _1_STAR &kp LS(BSLH)
#define _0_DQT &kp DQT
#define _1_DQT &kp LS(N2)
#define _0_LPAR &kp LPAR
#define _1_LPAR &kp LS(N8)
#define _0_RPAR &kp RPAR
#define _1_RPAR &kp LS(N9)
#define _0_DOLLAR &kp DOLLAR
#define _1_DOLLAR &kp LS(N4)

#define _0_MINUS &kp MINUS
#define _1_MINUS &kp FSLH

#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6

#define _0_OE &kp LA(L)
#define _1_OE &kp SEMI
ZMK_UNICODE_PAIR(__2_OE, N0, N0, F, N8, N0, N0, D, N8)
#define _2_OE &__2_OE

#define _0_PRCNT &hold_tap RALT PRCNT
#define _1_PRCNT &hold_tap RALT LS(N5)

#define _0_CARET &hold_tap LALT CARET
// #define _1_CARET &hold_tap LALT LS(RBRC)
#define _1_CARET &hold_tap LALT LS(LA(RBRC))

#define _0_LBKT &hold_tap LCTRL LBKT
#define _1_LBKT &hold_tap LCTRL LA(N8)
#define _0_RBKT &hold_tap LSHIFT RBKT
#define _1_RBKT &hold_tap LSHIFT LA(N9)
#define _0_UNDER &hold_tap LGUI UNDER
#define _1_UNDER &hold_tap LGUI LS(FSLH)

#define _N0 &hold_tap LGUI N0
#define _N1 &hold_tap LSHIFT N1
#define _N2 &hold_tap LCTRL N2
#define _N3 &hold_tap LALT N3

#define _0_AE &hold_tap RALT LA(Z)
#define _1_AE &hold_tap RALT SQT
ZMK_UNICODE_PAIR(__2_AE, N0, N0, E, N6, N0, N0, C, N6)
#define _2_AE &__2_AE
