/***************************************************************************
*================= Copyright (c) 2017, 2020 Continental AG =================
****************************************************************************
* Title        : cdef1c1.c
*
* Description  : This code file allows to implement a few necessities, which
*                are only needed once in a system (instead of once per
*                cdef.
*
* Environment  : See cdef_chips.txt
*
* Responsible  : Jan Rademacher, BBU 3698
*
* Guidelines   : SMK
*
* Template name: SWMODxC1.C, Revision 1.1
*
****************************************************************************/

/***************************************************************************
* HEADER-FILES (Only those that are needed in this file)
****************************************************************************/
/* System-headerfiles */

/* own API header */
#include  "cdef.h" 

/* Foreign headerfiles */

/***************************************************************************
* SANITY CHECKS AND MISCONFIGURATION WARNINGS
*
* In this section trigger warnings if something is wrong
*  or seems to be configured inefficiently.
****************************************************************************/

/* ___________________________________________________________________________________________
 *                              check general assumptions 
 * 
 * Only "exotic" hardware (e.g. 4bit CPUs) should produce an error here 
 */    

 #ifdef _CPU_64BIT_
#error This version of CDEF is not designed for 64bit CPUs.
/* Assumptions on e.g. sizeof(unsigned int) will probably not be applicable. */
#endif

#if CHAR_BIT != 8
#error __FILE__ : not 8 bits per byte. Check <limits.h>
#endif

  CDEF__STATIC_ASSERT((sizeof(  CDEF_tBool)   == 1 ), stBOOL_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(  CDEF_tUint8)  == 1 ), stUINT8_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(  CDEF_tUint16) == 2 ), stUINT16_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(  CDEF_tUint32) == 4 ), stUINT32_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(   CDEF_tInt8)  == 1 ), stINT8_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(   CDEF_tInt16) == 2 ), stINT16_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(   CDEF_tInt32) == 4 ), stINT32_SIZE_CHECK);

#ifndef   _CPU_16BIT_
  CDEF__STATIC_ASSERT((sizeof( CDEF_tUint64)  == 8 ), stUINT64_SIZE_CHECK);
  CDEF__STATIC_ASSERT((sizeof(  CDEF_tInt64)  == 8 ), stINT64_SIZE_CHECK);
#endif /* _CPU_16BIT_ */


#ifdef CDEF_FLOAT_SUPPORT
  CDEF__STATIC_ASSERT((sizeof(CDEF_tFloat32)  == 4 ), stFloat32_SIZE_CHECK);
  
#ifndef   _CPU_16BIT_
  CDEF__STATIC_ASSERT((sizeof(CDEF_tFloat64)  == 8 ), stFloat64_SIZE_CHECK);
#endif /* _CPU_16BIT_ */
#endif /* CDEF_FLOAT_SUPPORT */

#ifdef QAC_Analysis
#pragma PRQA_MESSAGES_OFF 1251, 1252, 1253, 1254, 1255, 280, 2940
/* the way constants are defined in compiler header (e.g. limits.h) is unpredictable,
 * they are used only within the static assertions, while the CDEF_* symbol is QAC-clean.
 * 1254, 1251, 1252 the used suffixes cannot be changed
 * 280 warns that the lowest negative number in a signed int (i.e. -max-1)
 *     is only representable in complement-2 representation, true,
 *     but the compiler headers indicate that it's OK.
 *     By the way, in order to avoid this warning in other code,
 *     consider using <symbol>+1, sacrificing the last representable value.
 * QAC 2940: "only representable in 2 complement", referring to a definition
 *           from a compiler header, which is aware of the details of the compiler.
 *           The defined symbol is only used in static assertion, which verify the
 *           assumptions made in related code "the QAC clean implementation chosen by
 *           CDEF results in the definitely correct same value as the QAC-hated but
 *           guaranteed compiler implementation". If the assumption fails, the static
 *           assertion triggers and prevents building, hence code based on wrong
 *           assumption cannot get into binary.
 */
#endif
#if       defined    UINT8_MAX
CDEF__STATIC_ASSERT((UINT8_MAX == CDEF_nu8Max ), CDEF_u8MaxCheck);
#elif     defined    UCHAR_MAX
CDEF__STATIC_ASSERT((UCHAR_MAX == CDEF_nu8Max ), CDEF_u8MaxCheck);
#else  /* defineds */
#error No source for CDEF_nu8Max found!
#endif /* defineds */

#if       defined    UINT16_MAX
CDEF__STATIC_ASSERT((UINT16_MAX == CDEF_nu16Max ), CDEF_u16MaxCheck);
#elif     defined     USHRT_MAX
CDEF__STATIC_ASSERT(( USHRT_MAX == CDEF_nu16Max ), CDEF_u16MaxCheck);
#else  /* defineds */
#error No source for CDEF_nu16Max found!
#endif /* defineds */

#if       defined    UINT32_MAX
CDEF__STATIC_ASSERT((UINT32_MAX == CDEF_nu32Max ), CDEF_u32MaxCheck);
#elif     defined     ULONG_MAX
CDEF__STATIC_ASSERT(( ULONG_MAX == CDEF_nu32Max ), CDEF_u32MaxCheck);
#else  /* defineds */
#error No source for CDEF_nu32Max found!
#endif /* defineds */

#ifndef   _CPU_16BIT_
#if       defined        UINT64_MAX
CDEF__STATIC_ASSERT((    UINT64_MAX == CDEF_nu64Max ), CDEF_u64MaxCheck);
#elif     defined        ULLONG_MAX
CDEF__STATIC_ASSERT((    ULLONG_MAX == CDEF_nu64Max ), CDEF_u64MaxCheck);
#elif     defined    ULONG_LONG_MAX
CDEF__STATIC_ASSERT((ULONG_LONG_MAX == CDEF_nu64Max ), CDEF_u64MaxCheck);
#else  /* defineds */
#error No source for CDEF_nu64Max found!
#endif /* defineds */
#endif /* _CPU_16BIT_ */

#if       defined     INT8_MAX
CDEF__STATIC_ASSERT(( INT8_MAX    == CDEF_ni8Max ), CDEF_i8MaxCheck);
#elif     defined    SCHAR_MAX
CDEF__STATIC_ASSERT((SCHAR_MAX    == CDEF_ni8Max ), CDEF_i8MaxCheck);
#else  /* defineds */
#error No source for CDEF_ni8Max found!
#endif /* defineds */

#if       defined    INT16_MAX
CDEF__STATIC_ASSERT((INT16_MAX    == CDEF_ni16Max ), CDEF_i16MaxCheck);
#elif     defined     SHRT_MAX
CDEF__STATIC_ASSERT(( SHRT_MAX    == CDEF_ni16Max ), CDEF_i16MaxCheck);
#else  /* defineds */
#error No source for CDEF_ni16Max found!
#endif /* defineds */

#if       defined    INT32_MIN
/* <@QAC: 2940> <RelLineCount: 1> <SWQE: 2017-02-15, Sabine Neumann-EXT> <Comment: Harmless, see comment above> */
CDEF__STATIC_ASSERT((INT32_MIN    == CDEF_ni32Min ), CDEF_i32MinCheck);
#elif     defined     LONG_MIN
/* <@QAC: 2940> <RelLineCount: 1> <SWQE: 2017-02-15, Sabine Neumann-EXT> <Comment: Harmless, see comment above> */
CDEF__STATIC_ASSERT(( LONG_MIN    == CDEF_ni32Min ), CDEF_i32MinCheck);
#else  /* defineds */
#error No source for CDEF_ni32Min found!
#endif /* defineds */

#if       defined    INT32_MAX
CDEF__STATIC_ASSERT((INT32_MAX    == CDEF_ni32Max ), CDEF_i32MaxCheck);
#elif     defined     LONG_MAX
CDEF__STATIC_ASSERT(( LONG_MAX    == CDEF_ni32Max ), CDEF_i32MaxCheck);
#else  /* defineds */
#error No source for CDEF_ni32Max found!
#endif /* defineds */

#ifndef   _CPU_16BIT_
#if       defined        INT64_MIN
/* <@QAC: 2940> <RelLineCount: 1> <SWQE: 2017-02-15, Sabine Neumann-EXT> <Comment: Harmless, see comment above> */
CDEF__STATIC_ASSERT((    INT64_MIN == CDEF_ni64Min ), CDEF_i64MinCheck);
#elif     defined        LLONG_MIN
/* <@QAC: 2940> <RelLineCount: 1> <SWQE: 2017-02-15, Sabine Neumann-EXT> <Comment: Harmless, see comment above> */
CDEF__STATIC_ASSERT((    LLONG_MIN == CDEF_ni64Min ), CDEF_i64MinCheck);
#elif     defined    LONG_LONG_MIN
/* <@QAC: 2940> <RelLineCount: 1> <SWQE: 2017-02-15, Sabine Neumann-EXT> <Comment: Harmless, see comment above> */
CDEF__STATIC_ASSERT((LONG_LONG_MIN == CDEF_ni64Min ), CDEF_i64MinCheck);
#else  /* defineds */
#error No source for CDEF_ni64Min found!
#endif /* defineds */

#if       defined        INT64_MAX
CDEF__STATIC_ASSERT((    INT64_MAX == CDEF_ni64Max ), CDEF_i64MaxCheck);
#elif     defined        LLONG_MAX
CDEF__STATIC_ASSERT((    LLONG_MAX == CDEF_ni64Max ), CDEF_i64MaxCheck);
#elif     defined    LONG_LONG_MAX
CDEF__STATIC_ASSERT((LONG_LONG_MAX == CDEF_ni64Max ), CDEF_i64MaxCheck);
#else  /* defineds */
#error No source for CDEF_ni64Max found!
#endif /* defineds */
#endif /* _CPU_16BIT_ */

#ifdef QAC_Analysis
#pragma PRQA_MESSAGES_ON 1251, 1252, 1253, 1254, 1255, 280, 2940
#endif

/* check plausibility of non-static symbols */
CDEF__STATIC_ASSERT((CDEF_True), CDEF_TrueCheck);
CDEF__STATIC_ASSERT((!CDEF_False), CDEF_FalseCheck);

/* check plausibility of static symbols */
#if (CDEF_Yes == CDEF_No)
#error Something is seriously wrong here.
#endif
#if (CDEF_On == CDEF_Off)
#error Something is seriously wrong here.
#endif
#if (CDEF_Ok == CDEF_NotOk)
#error Something is seriously wrong here.
#endif

/***************************************************************************
* EOF: cdef1c1.c
****************************************************************************/
