/************************************************************************
*
* Device     : RX/RX600/RX64M
*
* File Name  : vecttbl.c
*
* Abstract   : Initialize of Vector Table.
*
* History    : 0.10 (2013-05-30)  [Hardware Manual Revision : 0.40]
*            : 0.50 (2014-01-22)  [Hardware Manual Revision : 0.50]
*            : 0.80 (2014-02-20)  [Hardware Manual Revision : 0.80]
*            : 1.00 (2014-10-20)  [Hardware Manual Revision : 1.00]
*
* NOTE       : THIS IS A TYPICAL EXAMPLE.
*
* Copyright (C) 2013(2014) Renesas Electronics Corporation.
*
************************************************************************/

#include "vect.h"

#pragma section C EXCEPTVECT
void (*const Except_Vectors[])(void) = {
//;0xffffff80  Reserved
    Dummy,
//;0xffffff84  Reserved
    Dummy,
//;0xffffff88  Reserved
    Dummy,
//;0xffffff8c  Reserved
    Dummy,
//;0xffffff90  Reserved
    Dummy,
//;0xffffff94  Reserved
    Dummy,
//;0xffffff98  Reserved
    Dummy,
//;0xffffff9c  Reserved
    Dummy,
//;0xffffffa0  Reserved
    Dummy,
//;0xffffffa4  Reserved
    Dummy,
//;0xffffffa8  Reserved
    Dummy,
//;0xffffffac  Reserved
    Dummy,
//;0xffffffb0  Reserved
    Dummy,
//;0xffffffb4  Reserved
    Dummy,
//;0xffffffb8  Reserved
    Dummy,
//;0xffffffbc  Reserved
    Dummy,
//;0xffffffc0  Reserved
    Dummy,
//;0xffffffc4  Reserved
    Dummy,
//;0xffffffc8  Reserved
    Dummy,
//;0xffffffcc  Reserved
    Dummy,
//;0xffffffd0  Exception(Supervisor Instruction)
    Excep_SuperVisorInst,
//;0xffffffd4  Exception(Access Instruction)
    Excep_AccessInst,
//;0xffffffd8  Reserved
    Dummy,
//;0xffffffdc  Exception(Undefined Instruction)
    Excep_UndefinedInst,
//;0xffffffe0  Reserved
    Dummy,
//;0xffffffe4  Exception(Floating Point)
    Excep_FloatingPoint,
//;0xffffffe8  Reserved
    Dummy,
//;0xffffffec  Reserved
    Dummy,
//;0xfffffff0  Reserved
    Dummy,
//;0xfffffff4  Reserved
    Dummy,
//;0xfffffff8  NMI
    NonMaskableInterrupt,
};

#pragma section C RESETVECT
void (*const Reset_Vectors[])(void) = {
//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
    /*(void*)*/ PowerON_Reset_PC                                                                                                                 
//;<<VECTOR DATA END (POWER ON RESET)>>
};


#pragma address __SPCCreg=0x00120040          // SPCC register
const unsigned long __SPCCreg = 0xffffffff;

#pragma address __TMEFreg=0x00120048          // TMEF register
const unsigned long __TMEFreg = 0xffffffff;

#pragma address __OSISreg=0x00120050          // OSIC register (ID codes)
const unsigned long __OSISreg[4] = {
        0xffffffff,
        0xffffffff,
        0xffffffff,
        0xffffffff,
};

#pragma address __TMINFreg=0x00120060         // TMINF register
const unsigned long __TMINFreg = 0xffffffff;

#pragma address __MDEreg=0x00120064           // MDE register (Single Chip Mode)
#ifdef __BIG
    const unsigned long __MDEreg = 0xfffffff8;    // big
#else
    const unsigned long __MDEreg = 0xffffffff;    // little
#endif

#pragma address __OFS0reg=0x00120068              // OFS0 register
const unsigned long __OFS0reg = 0xffffffff;

#pragma address __OFS1reg=0x0012006c              // OFS1 register
const unsigned long __OFS1reg = 0xffffffff;
