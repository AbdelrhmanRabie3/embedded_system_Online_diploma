/*
 ============================================================================
 Name        : Quiz_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int n);
int main(void) {
	int num;
	printf("Enter number : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("%d ==> %d",num,power(num));
	return EXIT_SUCCESS;
}
int power(int n)
{ int result;
	if(n%3==0)
	{
		result=0;
	}
	else
	{
		result=1;
	}
	return result;
}
