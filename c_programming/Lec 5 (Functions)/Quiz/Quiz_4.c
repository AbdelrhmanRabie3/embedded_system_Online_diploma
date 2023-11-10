/*
 ============================================================================
 Name        : Quiz_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int convert(int a[]);
int main(void) {
	int ascii[10]={'0','1','2','3','4','5','6','7','8','9'};
	printf("converted integer is: %d",convert(ascii));
	return EXIT_SUCCESS;
}
int convert(int a[])
{
	int counter;
	int result=0;
	for(counter=0;counter<10;counter++)
	{
		result=result*10+(a[counter]-'0');
	}
	return result;
}
