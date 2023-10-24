/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1;
	float num2;
	float mult=0;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	mult=num1*num2;
	printf("product: %f",mult);
	return EXIT_SUCCESS;
}
