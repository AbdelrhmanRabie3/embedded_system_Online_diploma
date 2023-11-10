/*
 ============================================================================
 Name        : Quiz_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int last_occ(int a[],int len,int n);
int main(void) {
	int arr[10];
	int num;
	int counter;
	int check;
	printf("Enter number of elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("Enter array");
	for(counter=0;counter<num;counter++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[counter]);
	}
	printf("Enter the number to check: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&check);
	if(last_occ(arr,num,check)==-1)
	{
		printf("not found\n");
	}
	else
	{
	printf("number %d last occurrence in index %d ",check,last_occ(arr,num,check));
	}

	return EXIT_SUCCESS;
}

int last_occ(int a[],int len,int n)
{
	int counter;
	int last=0;
	for(counter=0;counter<len;counter++)
	{
		if(n!=a[counter])
		{
			continue;

		}
		else
		{
			last=counter;
		}
	}
	if(last==0)
	{
		return -1;
	}
	else
	{
		return last;
	}

}
