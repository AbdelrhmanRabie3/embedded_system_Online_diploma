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
	int arr[50];
	int counter;
	int n;
	int num;
	printf("Enter number of elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	for(counter=0;counter<n;counter++)
		{
			fflush(stdin);	fflush(stdout);
			scanf("%d",&arr[counter]);
		}
	printf("Enter elements to be searched: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	for(counter=0;counter<n;counter++)
	{
		if(arr[counter]==num)
		{
			printf("Number found at the location = %d",counter+1);
			break;
		}

	}
	return EXIT_SUCCESS;
}
