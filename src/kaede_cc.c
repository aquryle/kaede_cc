/***********************************************************************/
/*                                                                     */
/*  FILE        : Main.c                                   */
/*  DATE        :Tue, Oct 31, 2006                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

#include "common.h"
#include "uart.h"
#include "pin.h"



void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

void main(void)
{
	uint16 num = 8;
	uint8 *buf = "hello!\r\n";

	set_clock();
	uart_create(0);
	uart_start();

	SCI7_Serial_Send(buf, num);

	while (1);
	return;
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
