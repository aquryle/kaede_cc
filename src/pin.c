/*
 * pin.c
 *
 *  Created on: 2024/01/20
 *      Author: sata
 */

#include "pin.h"

void setpin_sci7(void) {

	MPC.PWPR.BIT.B0WI = 0;
	MPC.PWPR.BIT.PFSWE = 1;

	/* Set RXD7 pin */
	MPC.P92PFS.BYTE = 0x0AU;
	PORT9.PMR.BYTE |= 0x04U;

	/* Set TXD7 pin */
	PORT9.PODR.BYTE |= 0x01U;
	MPC.P90PFS.BYTE = 0x0AU;
	PORT9.PDR.BYTE |= 0x01U;

	MPC.PWPR.BIT.PFSWE = 1;
	MPC.PWPR.BIT.B0WI = 0;
}

