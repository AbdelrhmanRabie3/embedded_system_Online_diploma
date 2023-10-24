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
	float arr[100];
	int counter;
	int n;
	float sum=0;
	printf("Enter number of data: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	for(counter=0;counter<n;counter++)
	{
		printf("Enter number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%f",&arr[counter]);
		sum+=arr[counter];
	}
	printf("Average = %.2f",sum/n);
	return EXIT_SUCCESS;
}
