/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	int sum =0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num2);
	sum =num1 +num2;
	printf("sum : %d",sum);
	return EXIT_SUCCESS;
}
