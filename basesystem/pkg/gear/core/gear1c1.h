
#ifndef GEAR_C1_H
#define GEAR_C1_H

/***************************************************************************
* HEADER-FILES (Only those that are needed in this file)
****************************************************************************/
/* System-headerfiles */

/* Foreign headerfiles */

/* Own headerfiles */

/***************************************************************************
* EXPORT INTERFACE DEFINITIONS AND DECLARATIONS
*
* In this section
* - define helpful macros for easy data access and
*   for a comfortable function use, if necessary
* - define all global define-constants of your module
* - declare all system global ROM-constants
* - define all global type definitions of your module
* - declare all system global variables of your module
****************************************************************************/

/***************************************************************************
* EXPORT INTERFACE FUNCTION PROTOTYPES
*
* In this section declare
* - all system global function prototypes of your module
****************************************************************************/

/***************************************************************************
** Interface Description: Fucnton Called every 100ms to update gear position
*
* Implementation       : Current gear position is updated in Dpool. 
*
* Return Value         : none
* 
* Author               : Lei.Rao ID RD SW WHU
*
****************************************************************************/
void GEAR_vMain(void );

/***************************************************************************
* Interface Description: Function Called to initialize the GEAR module
*
* Implementation       : Initializing the internal variable
*
* Return Value         : none
* 
* Author               : Lei.Rao ID RD SW WHU
*
****************************************************************************/
void GEAR_vInit( void);

/***************************************************************************
* Interface Description: Function Called to initialize the GEAR module
*
* Implementation       : DeInitializing the internal variable
*
* Return Value         : none
* 
* Author               : Lei.Rao ID RD SW WHU
*
****************************************************************************/
#endif                                  /* ifndef GEAR_C1_H */

/***************************************************************************
* EOF: GEAR1C1.H
****************************************************************************/

