/*
 ============================================================================
 Name        : Quiz_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int CLR_BIT(int n,int bit);
int main(void) {
	int num,bitNumber;
	printf("Enter number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("Enter bit position: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&bitNumber);
	printf("result =%d",CLR_BIT(num,bitNumber));
	return EXIT_SUCCESS;
}
int CLR_BIT(int n,int bit)
{
	n&=~(1<<bit);
	return n;
}
