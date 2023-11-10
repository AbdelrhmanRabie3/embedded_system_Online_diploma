/*
 ============================================================================
 Name        : Miid_8.c
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
 	reverse(arr,num);
	return EXIT_SUCCESS;
}
void reverse(int a[],int len)
{
	int rev[20];
	int counter;
	int revCounter=len-1;
	for(counter=0;counter<len;counter++)
	{
		rev[counter]=a[revCounter];
		revCounter--;
	}
	for(counter=0;counter<len;counter++)
		{
			printf("%d ",rev[counter]);
		}
}
