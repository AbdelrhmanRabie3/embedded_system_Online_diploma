/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphabet;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&alphabet);
	if ((alphabet=='i') || (alphabet=='u') || (alphabet=='o') || (alphabet=='e') ||(alphabet=='a'))
	{
		printf("%c is vowel ",alphabet);
	}
	else
	{
		printf("%c is constant ",alphabet);
	}
	return EXIT_SUCCESS;
}
