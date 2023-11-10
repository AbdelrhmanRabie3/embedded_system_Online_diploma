/*
 ============================================================================
 Name        : Mid_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse(int n);
int main(void) {
	int num;
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	reverse(num);
	return EXIT_SUCCESS;
}
void reverse(int n)
{
	int rev[20];
	int counter=0;
	int i;
	while(n!=0)
	{
		rev[counter]=n%10;
		n/=10;
		counter++;
	}
	for(i=0;i<counter;i++ )
	{
		printf("%d",rev[i]);
	}
}
