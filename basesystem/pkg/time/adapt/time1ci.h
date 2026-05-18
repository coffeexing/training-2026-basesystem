#include  "../../../pkg/cdef/core/cdef.h"                                    /* General definitions and types */

#define Flg_TimeSet_Hour_fv ((bool)False)

/* define TimeSet_Hour signal timeout.*/
/*  rang: True/False   */
/*  False: no timeout  */
/*  True: timeout      */

#define Flg_TimeSet_Minutes_fv ((bool)False)

/* define TimeSet_Minutes signal timeout.*/
/*  rang: True/False   */
/*  False: no timeout  */
/*  True: timeout      */

#define  Flg_TimeMod_fv         ((bool)False)

/* define TimeMods signal timeout.*/
/*  rang: True/False   */
/*  False: no timeout  */
/*  True: timeout      */

#define TimeSet_Hour_ReadSval    ((uint16)0)
/*Readout Can signal for Timeset_Hour */
/*rang: 0-65535*/

#define TimeSet_Minutes_ReadSval    ((uint16)0)
/*Readout Can signal for Timeset_Minutes */
/*rang: 0-65535*/

#define TimeMod_ReadSval            ((uint16)0)
/*Readout Can signal for TimeMod */
/*rang: 0-1*/
/* 0: 24 hour format*/
/* 1: 12 hour format*/

typedef struct 
{
    uint16  DIF_u16Hour;       //  clock Hour
    uint16  DIF_u16Min;        //  clock Minutes
    uint16  DIF_u16Mode;       //  0---> 24 hour format; 1--->12 hour format
}DPOOL_txDIF_tstClkDpoolData;

DPOOL_txDIF_tstClkDpoolData DPOOL_txDIF_stClkDpoolData;
/* define struct used in DPOOL*/



