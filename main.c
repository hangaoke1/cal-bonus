#include <stdio.h>
#include <stdlib.h>
#include "pub.h"

int main()
{
    /*
    char mctx[] = "013|-1|0|271#999:0#39.00/271#0:0#13.00;"
                  "014|-1|0|269#3#2.85";

    char tctx[] = "013#271#999:0#39.00;014#269#3#2.85;1;3|"
                  "013#271#0:0#13.00;014#269#3#2.85;1;7.18";
*/

    char mctx[] = "013|-1|0|354#3#8.00/354#1#4.00/354#0#2.00;"
                  "014|-1|0|354#3#8.00/354#1#4.00/354#0#2.00;"
                  "015|-1|0|354#3#8.00/354#1#4.00/354#0#2.00";

    char tctx[] = "013#354#3#8.00;014#354#3#8.00;1;128.00|"
                  "013#354#3#8.00;014#354#1#4.00;1;64.00|"
                  "013#354#3#8.00;014#354#0#2.00;1;32.00|"
                  "013#354#1#4.00;014#354#3#8.00;1;64.00|"
                  "013#354#1#4.00;014#354#1#4.00;1;32.00|"
                  "013#354#1#4.00;014#354#0#2.00;1;16.00|"
                  "013#354#0#2.00;014#354#3#8.00;1;32.00|"
                  "013#354#0#2.00;014#354#1#4.00;1;16.00|"
                  "013#354#0#2.00;014#354#0#2.00;1;8.00|"

                  "013#354#3#8.00;015#354#3#8.00;1;128.00|"
                  "013#354#3#8.00;015#354#1#4.00;1;64.00|"
                  "013#354#3#8.00;015#354#0#2.00;1;32.00|"
                  "013#354#1#4.00;015#354#3#8.00;1;64.00|"
                  "013#354#1#4.00;015#354#1#4.00;1;32.00|"
                  "013#354#1#4.00;015#354#0#2.00;1;16.00|"
                  "013#354#0#2.00;015#354#3#8.00;1;32.00|"
                  "013#354#0#2.00;015#354#1#4.00;1;16.00|"
                  "013#354#0#2.00;015#354#0#2.00;1;8.00|"

                  "014#354#3#8.00;015#354#3#8.00;1;128.00|"
                  "014#354#3#8.00;015#354#1#4.00;1;64.00|"
                  "014#354#3#8.00;015#354#0#2.00;1;32.00|"
                  "014#354#1#4.00;015#354#3#8.00;1;64.00|"
                  "014#354#1#4.00;015#354#1#4.00;1;32.00|"
                  "014#354#1#4.00;015#354#0#2.00;1;16.00|"
                  "014#354#0#2.00;015#354#3#8.00;1;32.00|"
                  "014#354#0#2.00;015#354#1#4.00;1;16.00|"
                  "014#354#0#2.00;015#354#0#2.00;1;8.00";

/*  //�淨ȫ��test
    char mctx[] = "013|1|0|354#3#4.40/272#33#7.00/272#13#9.00/272#03#38.00;"
                  "014|-1|0|354#1#3.35";

    char tctx[] = "013#354#3#4.40;014#354#1#3.35;1;29.48|"
                  "013#272#33#7.00;014#354#1#3.35;1;46.9|"
                  "013#272#13#9.00;014#354#1#3.35;1;60.3|"
                  "013#272#03#38.00;014#354#1#3.35;1;254.6";
*/
    char res[64*1024] = {'\0'};
    printf("ret=%d\n",api_prize_optimizer(mctx, tctx, 54, -1, res));
    printf("%s", res);
    return 0;
}


