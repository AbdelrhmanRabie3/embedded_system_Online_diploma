/*
 ============================================================================
 Name        : EX7.c
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
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping, value of a = %.2f\n", num1);
	printf("After swapping, value of b = %.2f", num2);
	return EXIT_SUCCESS;
}
