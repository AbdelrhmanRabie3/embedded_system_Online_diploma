/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	float calc,num1,num2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	switch(operator)
	{
	case'+':
	{
		calc=num1+num2;
		printf("%.1f + %.1f = %.1f",num1,num2,calc);
	}
	break;
	case'-':
	{
		calc=num1-num2;
		printf("%.1f - %.1f = %.1f",num1,num2,calc);
	}
	break;
	case'*':
	{
		calc=num1*num2;
		printf("%.1f * %.1f = %.1f",num1,num2,calc);
	}
	break;
	case'/':
	{
		calc=num1/num2;
		printf("%.1f / %.1f = %.1f",num1,num2,calc);
	}
	break;
	}
	return EXIT_SUCCESS;
}
