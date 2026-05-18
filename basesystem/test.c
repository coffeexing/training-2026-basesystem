#include  "../../pkg/cdef/core/cdef.h"
static WRN_u8Counter = 0;
static bool boWRN;
void TEST_wrn_T1_1_case(void)
{

    WRN_u8Counter++;
    if (WRN_u8Counter >= 255)
    {
        WRN_u8Counter = 0;
    }
    else
    {
        switch (WRN_u8Counter % 10)
        {
        case 1:

            break;


        case 2:

            break;

        case 3:

            break;

        }

    }



}