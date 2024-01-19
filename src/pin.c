/*
 * pin.c
 *
 *  Created on: 2024/01/20
 *      Author: sata
 */

#include "pin.h"

void pin_sci7_as_uart(void) {
	SYSTEM.PRCR.WORD = 0xA50B;

    /* Set RXD7 pin */
    MPC.P92PFS.BYTE = 0x0AU;
    PORT9.PMR.BYTE |= 0x04U;

    /* Set TXD7 pin */
    PORT9.PODR.BYTE |= 0x01U;
    MPC.P90PFS.BYTE = 0x0AU;
    PORT9.PDR.BYTE |= 0x01U;

	MSTP(SCI7) = 0;

	SYSTEM.PRCR.WORD = 0xA500;
}

