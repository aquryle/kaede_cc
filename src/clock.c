/*
 * clock.c
 *
 *  Created on: 2024/01/20
 *      Author: sata
 */

#include "clock.h"

void set_clock() {
	SYSTEM.PRCR.WORD = 0xA50Bu;

	// port
	PORT3.PDR.BYTE = 0u;
	PORT3.PDR.BYTE - 0u;

	// main clock start
	SYSTEM.MOSCWTCR.BYTE = 0x0Fu;
	SYSTEM.MOSCCR.BYTE = 0x00u;
	while (0x00u != SYSTEM.MOSCCR.BYTE);
	while (1u != SYSTEM.OSCOVFSR.BIT.MOOVF);

	// PLL
	SYSTEM.PLLCR.BIT.STC = 0x13;	// *10
	SYSTEM.PLLCR.BIT.PLLSRCSEL = 0;	// PLL clock source: main clock
	SYSTEM.PLLCR.BIT.PLIDIV = 0;	// /1
	SYSTEM.PLLCR2.BIT.PLLEN = 0;	// PLL start
	while (1 != SYSTEM.OSCOVFSR.BIT.PLOVF);

	// division
	/*	main clock: 12MHz, PLL: *10
		FCLK: 60 MHz	ICLK: 120 MHz	BCLK: 120 MHz
		PCLKA: 60 MHz	PCLKB: 60 MHz
		PCLKC: 60 MHz	PCLKD: 60 MHz */
	SYSTEM.SCKCR.LONG = 0x10001111;
	while (SYSTEM.SCKCR.LONG != 0x10001111);
	SYSTEM.SCKCR2.WORD = 0x0031;	// UCLK: /4
	SYSTEM.BCKCR.BYTE  = 0x01;		// BCLK: /4

	// select clock source
	SYSTEM.SCKCR3.WORD = 0x0400;
	while (SYSTEM.SCKCR3.WORD != 0x0400);

	// LOCO stop
	SYSTEM.LOCOCR.BYTE = 0x01;

	SYSTEM.PRCR.WORD = 0xA500;
}


