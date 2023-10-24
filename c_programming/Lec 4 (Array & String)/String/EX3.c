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
#include <string.h>
int main(void) {
	char string[500];
	char reverse[500];
	int counter;
	int counter2=0;
	printf("Enter a string: ");
	fflush(stdin);	fflush(stdout);
	gets(string);
	for(counter=strlen(string)-1;counter>=0;counter--)
	{
		reverse[counter2]=string[counter];
		counter2++;
	}
	printf("reverse string is : %s",reverse);

	return EXIT_SUCCESS;
}
