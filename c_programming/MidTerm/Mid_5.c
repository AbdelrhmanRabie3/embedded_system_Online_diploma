/*
 ============================================================================
 Name        : Mid_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count(int n);
int main(void) {
	int num;
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("%d",count(num));
	return EXIT_SUCCESS;
}
int count(int n)
{	int ones_counter=0;
	while(n!=0)
	{
		if(n%2==1)
		{
			ones_counter++;
		}
		n/=2;
	}
return ones_counter;
}
