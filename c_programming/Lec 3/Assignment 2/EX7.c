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
	int num;
	int counter,fact=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>0)
	{
		for(counter=num;counter>1;counter--)
		{
			fact*=counter;
		}
		printf("Factorial = %d",fact);
	}
	else
	{
		printf("Error!!! Factorial of negative number dosen't exist");
	}
	return EXIT_SUCCESS;
}
