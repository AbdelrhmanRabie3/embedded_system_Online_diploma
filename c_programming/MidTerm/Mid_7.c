/*
 ============================================================================
 Name        : Mid_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fun(int n);
int main(void) {

	printf("%d",fun(1));

	return EXIT_SUCCESS;
}
int fun(int n)
{
	if (n==100)
		{
		return 1;
		}
	else
	{
		return (n+fun(++n));

	}
}
