// HOST_OS: 0 iso, 2 macos unicode

#define _Q &kp Q
#define _W &kp W
#define _E &kp E
#define _R &kp R
#define _T &kp T
#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &kp O
#define _P &kp P

#define _A &kp A
#define _S &kp S
#define _D &kp D
#define _F &kp F
#define _G &kp G
#define _H &kp H
#define _J &kp J
#define _K &kp K
#define _L &kp L
#define _BKSP &kp BKSP

#define _Z &tt RALT Z
#define _X &tt LALT X
#define _C &tt LCTRL C
#define _V &tt LSHIFT V
#define _B &tt LGUI B
#define _N &tt LGUI N
#define _M &tt LSHIFT M

#define _0_SEMI SEMI
#define _2_SEMI LS(COMMA)
ZMK_MOD_PAIR(_COMMA_SEMI, COMMA, LCTRL, _0_SEMI)
#define _COMMA &_COMMA_SEMI

#define _0_COLON COLON
#define _2_COLON LS(DOT)
ZMK_MOD_PAIR(_DOT_COLON, DOT, LALT, _0_COLON)
#define _DOT &_DOT_COLON

#define _0_FSLH FSLH
#define _0_BSLH BSLH
#define _2_BSLH LS(BSLH)
ZMK_MOD_PAIR(_FSLH_BSLH, _0_FSLH, RALT, _2_BSLH)
#define _SLASH &_FSLH_BSLH
