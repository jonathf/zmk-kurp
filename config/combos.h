/*
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
 0    1    2    3    4    5  6    7    8    9   10   11
                                   INS  DEL
12   13   14   15   16   17 18   19   20   21   22   23
       LALT ESC  TAB              ENTER BKSP RALT
24   25   26   27   28   29 30   31   32   33   34   35
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
               36   37   38 39   40   41
*/
#include "helper.h"

ZMK_COMBO(_BKSP, &kp BKSP, 20 21, 0)
ZMK_COMBO(_DEL, &kp DEL, 8 9, 0)
ZMK_COMBO(_ENTER, &kp ENTER, 19 20, 0)
ZMK_COMBO(_ESC, &kp ESC, 14 15, 0)
ZMK_COMBO(_INS, &kp INS, 7 8, 0)
ZMK_COMBO(_TAB, &kp TAB, 15 16, 0)
