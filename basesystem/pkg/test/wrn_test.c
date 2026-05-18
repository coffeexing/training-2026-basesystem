#include "wrn_test.h"


uint8 TEST_u8ESPFailSts = 0;
uint8 TEST_u8ESPActiveInfoLamp = 0;

void TEST_wrn_T1_case(uint8 TEST__wrn_caseID)
{
    switch (TEST__wrn_caseID)
        {
        case 0://test case T1.1
            TEST_u8ESPFailSts = 0;
            TEST_u8ESPActiveInfoLamp = 0;
            break;
        case 1://test case T1.2
            TEST_u8ESPFailSts = 0;
            TEST_u8ESPActiveInfoLamp = 1;
            break;

        case 2://test case T1.3
            TEST_u8ESPFailSts = 1;
            TEST_u8ESPActiveInfoLamp = 0;
            break;
        case 3://test case T1.4
            TEST_u8ESPFailSts = 1;
            TEST_u8ESPActiveInfoLamp = 1;
            break;
        default:
            TEST_u8ESPFailSts = 0;
            TEST_u8ESPActiveInfoLamp = 0;
            break;
        }

   }
