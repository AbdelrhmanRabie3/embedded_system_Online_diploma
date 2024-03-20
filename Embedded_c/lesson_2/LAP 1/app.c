#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:Abdelrhman";
unsigned char const string_buffer2[100]="learn-in-depth:Abdelrhman";
int x;
void main (void)
{
	UART_Send_String(string_buffer);
}
