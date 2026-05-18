
#ifndef GEAR_CI_H
#define GEAR_CI_H

/***************************************************************************
* HEADER-FILES (Only those that are needed in this file)
****************************************************************************/
/* System-headerfiles */
#include  "../../../pkg/cdef/core/cdef.h"                                    /* General definitions and types */
#include  <stdio.h>
/* Foreign headerfiles */

/***************************************************************************
* EXPORT CONFIGURATION CONSTANTS
*
* In this section define
* - constants and macros to configure your export interface. These constants
*   are public for other modules
****************************************************************************/

#define GEAR__u8GetDrvModDisp()           ((uint8)0) /* fill with shift lever position interface*/
/*
*Description: Get shift lever position information from CAN input
*
*Value:0~7
*/

#define GEAR__u8GetDisplayGear()             ((uint8)0)/* fill with shift target gear information interface*/
/*
*Description: Get shift target gear information from CAN input
*
*Value:0~15
*/

#define GEAR__u8GetFlashingSignal()         ((uint8)0)/*fill with  flash signal from CAN input interface*/
/*
*Description: Get TCU_Gear_flashing  signal from CAN input
*
*Value:0~1
*/

#define GEAR__u8GetShiftRecommend()       ((uint8)0)/*fill with gear shift display information from CAN input interface*/
/*
*Description: Get gear shift display information from CAN input
*
*Value:0~3
*/
#define GEAR__u8GetTgtgear_Up()             ((uint8)0)/*fill with Tgtgear_Up shift display information from CAN input interface*/
/*
*Description: Get Tgtgear_Up shift display information from CAN input
*
*Value:0~1
*/
#define GEAR__u8GetTgtgear_Down()           ((uint8)0)/*fill with Tgtgear_Down shift display information from CAN input interface*/
/*
*Description: Get Tgtgear_Down shift display information from CAN input
*
*Value:0~1
*/

typedef struct
{
    bool   GEAR_boGearValid;
    bool   GEAR_boGearFlashSts;
    uint8  GEAR_u8GearPosi;
}DPOOL_txGEAR_tstGearData;

DPOOL_txGEAR_tstGearData DPOOL_txGEAR_stGearData;

/*define struct for Gear Data*/

typedef struct
{
    uint8  GEAR_u8ShiftSymbolPosi;
}DPOOL_txGEAR_tstShiftSymbolData;

DPOOL_txGEAR_tstShiftSymbolData  DPOOL_txGEAR_stShiftSymbolData;

/*define struc for ShiftSymbalData*/

#define GEAR__nu8Transmission8AT ((uint8 )8)

/*define Transmission is 8AT.*/
#define GEAR__nu8Transmission6MT ((uint8 )2)
/*define Transmission is 6MT.*/

#define EEH_biGetCFG2_Transmission()  ((uint8 )8)

/*Get CFG2_Transmission value from EEPROM */
/*default value is 0x08. */

/*-00001000: Transmission is 8AT */

/*-00000010: Transmission is 6MT */

#define Flg_ShiftRecommend_M_tmout() ((bool)False)
/*Can signal ShiftRecommend is timeout*/
/*False: no timeout*/
/*True: timeout */

#define Flg_Tgtgear_Down_tmout()     ((bool)False)
/*Can signal Tgtgear_Down is timeout*/
/*False: no timeout*/
/*True: timeout */

#define Flg_Tgtgear_Up_tmout()       ((bool)False)
/*Can signal Tgtgear_Up is timeout*/
/*False: no timeout*/
/*True: timeout */

/*
* End of Check if information is already included
*/
#endif                                  /* ifndef GEAR_CI_H */

/***************************************************************************
* EOF: GEAR1CI.H
****************************************************************************/

