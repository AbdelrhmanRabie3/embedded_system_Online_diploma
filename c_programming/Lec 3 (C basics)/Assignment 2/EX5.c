/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);
	if(( 65 <= character && character<= 90)||( 97 <= character  && character<= 122))
	{
		printf("%c is an alphabet",character);
	}
	else
	{
		printf("%c is not an alphabet",character);
	}
	return EXIT_SUCCESS;
}
