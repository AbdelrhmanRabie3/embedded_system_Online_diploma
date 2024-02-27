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
	int arr[15];
	int num;
	int counter;
	int *ptr;
	printf("Input the number of elements to store in the array (max15):");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("Input %d number of elements in the array:\n",num);
	for(counter=0;counter<num;counter++)
	{
		printf("element -%d : ",counter+1);
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[counter]);
	}
	ptr=arr+num-1;
	printf("The elements of array in reverse order is:\n");
	for(counter=num;counter>0;counter--)
		{
			printf("element -%d : %d\n",counter,*ptr);
			ptr--;
		}
	return EXIT_SUCCESS;
}
