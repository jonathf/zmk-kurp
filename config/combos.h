/*
  ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
  0    1    2    3    4  5    6    7    8    9
         Q                     INS  DEL
 10   11   12   13   14 15   16   17   18   19
        ESC  TAB              ENTER BKSP
 20   21   22   23   24 25   26   27   28   29
         Z
  ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
           30   31   32 33   34   35
*/
ZMK_COMBO(_9_Q,  &kp Q,    1  2, 0)
ZMK_COMBO(_9_Z,  &kp Z,   20 21, 0)

ZMK_COMBO(_9_BKSP,  &kp BKSP,   17 18, 0)
ZMK_COMBO(_9_DEL,   &kp DEL,     7  8, 0)
ZMK_COMBO(_9_ENTER, &kp ENTER,  16 17, 0)
ZMK_COMBO(_9_ESC,   &kp ESC,    11 12, 0)
ZMK_COMBO(_9_INS,   &kp INS,     6  7, 0)
ZMK_COMBO(_9_TAB,   &kp TAB,    12 13, 0)
