

/*
* Check if information is already included
*/
#ifndef GEAR_CT_H
#define GEAR_CT_H


/***************************************************************************
* HEADER-FILES (Only those that are needed in this file)
****************************************************************************/
/* System-headerfiles */
#include  "../../../pkg/cdef/core/cdef.h"                       /* General definitions and types */

/* Inclusion of additional headers should be avoided as much as */
/* possible to reduce dependencies */

/* EasyCASE ) */
/* EasyCASE ( 4
   TYPE DEFINITIONS */
/***************************************************************************
* GLOBAL TYPE DEFINITIONS
*
* In this section define
* - types which are public for other modules and can be used standalone, i.e. 
*   without including the C1 header
****************************************************************************/

 /**
 * Description: The Gear Shift list.
 */
typedef enum 
{
   GEAR_nGearBlank       = 0,
   GEAR_nGearP           = 1,
   GEAR_nGearR           = 2,
   GEAR_nGearN           = 3,
   GEAR_nGearD1          = 4,
   GEAR_nGearD2          = 5,
   GEAR_nGearD3          = 6,
   GEAR_nGearD4          = 7,
   GEAR_nGearD5          = 8,
   GEAR_nGearD6          = 9,
   GEAR_nGearD7          = 10,
   GEAR_nGearD8          = 11,
   GEAR_nGearFlashingP   = 12,
   GEAR_nGearFlashingR   = 13,
   GEAR_nGearFlashingN   = 14,
   GEAR_nGearFlashingD1  = 15,
   GEAR_nGearFlashingD2  = 16,
   GEAR_nGearFlashingD3  = 17,
   GEAR_nGearFlashingD4  = 18,
   GEAR_nGearFlashingD5  = 19,
   GEAR_nGearFlashingD6  = 20,
   GEAR_nGearFlashingD7  = 21,
   GEAR_nGearFlashingD8  = 22,
   GEAR_nGear1           = 23,
   GEAR_nGear2           = 24,
   GEAR_nGear3           = 25,
   GEAR_nGear4           = 26,
   GEAR_nGear5           = 27,
   GEAR_nGear6           = 28,
   GEAR_nGear7           = 29,
   GEAR_nGear8           = 30   
}GEAR_tenGearState;

/*
*Description: Enumeration for Gear position.
*/
typedef GEAR_tenGearState GEAR_enGearState;

/**
*Description: The symbol type.
* 
*/
typedef enum
{
   GEAR__nenSymbolBlank = 0,  /* Blank symbol */
   GEAR__nenSymbolUp    = 1,  /* Up symbol */
   GEAR__nenSymbolDown  = 2   /* Down symbol */
}GEAR_tenSymbolType;

/*
*
*  Description:  Enumeration for gear symbol
*               
*/ 
typedef GEAR_tenSymbolType GEAR_enSymbolType;

/**
*Description: Enum for ShiftLeverPos.
* 
*/
typedef enum
{
   GEAR__nenShiftLeverPosP, 
   GEAR__nenShiftLeverPosR,
   GEAR__nenShiftLeverPosN,
   GEAR__nenShiftLeverPosD,    
   GEAR__nenShiftLeverPosM,
   GEAR__nenShiftLeverPosInvalid
}GEAR_tenShiftLeverPos;

/**
*Description: Enum for TargetGear.
* 
*/
typedef enum
{
   GEAR__nenTargetGearN = 0, 
   GEAR__nenTargetGear1 = 1,
   GEAR__nenTargetGear2 = 2,
   GEAR__nenTargetGear3 = 3,
   GEAR__nenTargetGear4 = 4,
   GEAR__nenTargetGear5 = 5,
   GEAR__nenTargetGear6 = 6,
   GEAR__nenTargetGear7 = 7,
   GEAR__nenTargetGear8 = 8,
   GEAR__nenTargetGearR = 0xB,
   GEAR__nenTargetGearP = 0xD,
   GEAR__nenTargetGearInvalid = 0xF
}GEAR_tenTargetGear;

/* EasyCASE ) */
/* EasyCASE ( 6
   EOF */
/*
* End of Check if information is already included
*/
#endif                                  /* ifndef GEAR_CT_H */


/***************************************************************************
* EOF: SWMODxCT.H
****************************************************************************/
/* EasyCASE ) */
/* EasyCASE ) */

