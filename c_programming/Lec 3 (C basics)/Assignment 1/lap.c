/*
 ============================================================================
 Name        : lap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rowCounter;
	int colCounter;
	for(rowCounter=0;rowCounter<=9;rowCounter++)
	{
		for(colCounter=rowCounter;colCounter<=9;colCounter++)
		{
			printf("%d ",colCounter);

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
