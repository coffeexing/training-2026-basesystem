#include  "../../../pkg/cdef/core/cdef.h"

#define Flg_PitchAngSign_tmout()    ((bool)False)
/*CAN signal PitchAngSign is timeout */
/*False: no timeout*/
/*True: timeout*/

#define Flg_PitchAng_tmout          ((bool)False)
/*CAN signal PitchAng is timeout */
/*False: no timeout*/
/*True: timeout*/

#define SYN__u8PitchAngleSign()    ((uint8)0)
/*Get can signal PitchAngle sign*/


#define SYN__u8PitchAng()          ((uint8)0)
/*Get can signal PitchAngle*/

#define Flg_PitchAngSign_fv()    ((bool)False)
/*check if get the first PitchAngSign can frame signal*/

#define Flg_PitchAng_fv()        ((bool)False)

/*check if get the first PitchAng can frame signal*/

typedef struct 
{
    uint8  DIF_u8SlopeDirectionValue;   //0: Horizontal vehicle icon; 1:Uphill vehicle icon; 2: Downhill vehicle icon
    uint8  DIF_u8SlopeAngleValue;	   // 0--90
    uint8  DIF_u8SlopeUnit;		   // 0:None; 1: degree, other value: reserved
}DIF_tstSlopeDpoolData;

DIF_tstSlopeDpoolData DIF_stSlopeDpoolData;

/*define DPOOL struct for slope*/

