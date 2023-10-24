/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,counter;
	int sum=0;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(counter=1;counter<=num;counter++)
	{
		sum+=counter;
	}
	printf("sum= %d", sum);
	return EXIT_SUCCESS;
}
