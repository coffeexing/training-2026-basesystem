

/***************************************************************************
* HEADER-FILES (Only those that are needed in this file)
****************************************************************************/
/* System-headerfiles */


/* Own headerfiles */
#include  "gear1c1.h"                          
#include  "../adapt/gear1ct.h"                               
#include  "../adapt/gear1ci.h"                                  

/***************************************************************************
* GLOBAL DEFINITIONS
*
* In this section define
* - all global ROM-constants of your module
* - all global variables of your module
****************************************************************************/
DPOOL_txGEAR_tstGearData DPOOL_txGEAR_stGearData = { False, False, 0 };
DPOOL_txGEAR_tstShiftSymbolData  DPOOL_txGEAR_stShiftSymbolData = { 0 };



void GEAR_vMain( void )
{
    printf("Gear Main\n");
}

void GEAR_vInit( void )
{
    printf("Gear Init\n");
}



/***************************************************************************
* EOF: GEAR1C1.C
****************************************************************************/
