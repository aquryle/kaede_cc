/*
 * uart.c
 *
 *  Created on: 2024/01/20
 *      Author: sata
 */


#include "uart.h"
#include "vect.h"


void uart_create(uint8 baud) {

	SYSTEM.PRCR.WORD = 0xA50B;
	setpin_sci7();
	MSTP(SCI7) = 0;
	SYSTEM.PRCR.WORD = 0xA500;


	IPR(SCI7,RXI7) = _IPR_LEVEL10;
	IPR(SCI7,TXI7) = _IPR_LEVEL10;

	SCI7.SCR.BYTE = 0x00u;	/* Clear the control register */
	SCI7.SCR.BYTE = 0x00u;	/* Set clock enable */

	/* Clear the SIMR1.IICM, SPMR.CKPH, and CKPOL bit, and set SPMR */
	SCI7.SIMR1.BIT.IICM = 0u;
	SCI7.SPMR.BYTE = 0x00u;

	/* Set control registers */
	SCI7.SMR.BYTE = 0x00u;
	SCI7.SMR.BIT.CKS = 2u;	// pclk / 16
	SCI7.SCMR.BYTE = 0xF2u;
	SCI7.SEMR.BYTE = 0x00u;

	/* Set bit rate */
	SCI7.BRR = 11u;	// 9600 bps
}


void uart_start() {
	IR(SCI7,TXI7) = 0u;
	IR(SCI7,RXI7) = 0u;

	IEN(SCI7,TXI7) = 1u;
	ICU.GENBL0.BIT.EN14 = 1u;	// TEI7 (Transmit Error Interrupt)
	IEN(SCI7,RXI7) = 1u;
	ICU.GENBL0.BIT.EN15 = 1u;	// ERI7 (Error Recieve Interrupt)
}

void Excep_SCI7_RXI7(void) {

}

void Excep_SCI7_TXI7(void) {
    if (0U < g_sci7_tx_count)
    {
        SCI7.TDR = *gp_sci7_tx_address;
        gp_sci7_tx_address++;
        g_sci7_tx_count--;
    }
    else
    {
        SCI7.SCR.BIT.TIE = 0U;
        SCI7.SCR.BIT.TEIE = 1U;
    }

}

void Excep_ICU_GROUPBL0(void) {
    /* Set TXD7 pin */
    PORT9.PMR.BYTE &= 0xFEU;

    SCI7.SCR.BIT.TIE = 0U;
    SCI7.SCR.BIT.TE = 0U;
    SCI7.SCR.BIT.TEIE = 0U;

    r_Config_SCI7_callback_transmitend();
}

