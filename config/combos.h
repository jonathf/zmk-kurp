/*
  ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
  0    1    2    3    4  5    6    7    8    9
                               INS  DEL
 10   11   12   13   14 15   16   17   18   19
        ESC  TAB              ENTER BKSP
 20   21   22   23   24 25   26   27   28   29
  ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
           30   31   32 33   34   35
*/
#include "helper.h"

ZMK_COMBO(_BKSP,  &kp BKSP,   17 18, 0)
ZMK_COMBO(_DEL,   &kp DEL,     7  8, 0)
ZMK_COMBO(_ENTER, &kp ENTER,  16 27, 0)
ZMK_COMBO(_ESC,   &kp ESC,    11 12, 0)
ZMK_COMBO(_INS,   &kp INS,     6  7, 0)
ZMK_COMBO(_TAB,   &kp TAB,    12 13, 0)
