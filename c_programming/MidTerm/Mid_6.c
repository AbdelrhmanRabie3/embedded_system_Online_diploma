/*
 ============================================================================
 Name        : Mid_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int find_uniqe(int n[],int len);
int main(void) {
	int arr[20];
	int num;
	int counter;
	printf("Enter number of elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	for(counter=0;counter<num;counter++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[counter]);
	}
	printf("%d",find_uniqe(arr,num));
	return EXIT_SUCCESS;
}
int find_uniqe(int n[],int len)
{
	int counter;
	int res=0;
	for(counter=0;counter<len;counter++)
	{
		res^=n[counter];
	}
	return res;
}
