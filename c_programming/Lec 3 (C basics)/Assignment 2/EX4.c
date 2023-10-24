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
	int num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive",num);
	}
	else if(num<0)
	{
		printf("%d is negative",num);
	}
	else
	{
		printf("you entered zero");
	}
	return EXIT_SUCCESS;
}
