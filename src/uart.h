/*
 * uart.h
 *
 *  Created on: 2024/01/20
 *      Author: sata
 */

#ifndef UART_H_
#define UART_H_

#include "common.h"
#include "pin.h"

extern void uart_create(uint8 baud);
extern void uart_start();
extern void Excep_SCI7_RXI7(void);
extern void Excep_SCI7_TXI7(void);

extern void Excep_TEI7(void);
extern void Excep_ERI7(void);

extern void SCI7_Serial_Send(uint8 *const tx_buf, uint16 tx_num);




#endif // UART_H_