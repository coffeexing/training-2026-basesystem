#include  <stdio.h>
#include  "../../../pkg/cdef/core/cdef.h"
#include "../../test/wrn_test.h"


typedef enum
{
    BLINK_nenOff = 1,
    BLINK_nenPermOn,
    BLINK_nenWave1Hz_50Duty,
    BLINK_nenWave2Hz_50Duty,
    BLINK_nenNumberOfFreq
} BLINK_tenFreq;

#define WRN__nenOff         BLINK_nenOff
#define WRN__nenOn          BLINK_nenPermOn
#define WRN__nen1Hz         BLINK_nenWave1Hz_50Duty



#define SYN__u8ESPFailSts()          (uint8)TEST_u8ESPFailSts
#define SYN__u8ESPActiveInfoLamp()   (uint8)TEST_u8ESPActiveInfoLamp