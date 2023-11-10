/*
 ============================================================================
 Name        : Quiz_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse(int a[],int len);
int main(void) {
	int arr[20];
	int n;
	int counter;
	printf("Enter number of elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("Enter array");
	for(counter=0;counter<n;counter++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[counter]);
	}
	printf("array = ");
	for(counter=0;counter<n;counter++)
			{
				printf("%d,",arr[counter]);
			}
	printf("\n");
	reverse(arr,n);
	return EXIT_SUCCESS;
}
void reverse(int a[],int len)
{
	int rev[20];
	int counter;
	for(counter=0;counter<len;counter++)
		{
			rev[counter]=a[len-1-counter];
		}
		printf("Reversed array = ");
	for(counter=0;counter<len;counter++)
		{
			printf("%d,",rev[counter]);
		}
}
