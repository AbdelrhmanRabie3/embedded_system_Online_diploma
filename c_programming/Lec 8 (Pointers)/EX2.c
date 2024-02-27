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
	char Alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr=Alphabet;
	int counter;
	for(counter=0;counter<26;counter++)
	{
		printf("%c  ",*ptr);
		ptr++;
	}
	return EXIT_SUCCESS;
}
