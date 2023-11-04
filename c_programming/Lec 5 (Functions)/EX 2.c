/*
 ============================================================================
 Name        : EX.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int n1);
int main(void) {
	int num;
	printf("Enter an positive integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("factorial of %d = %d",num ,fact(num));
	return EXIT_SUCCESS;
}
int fact(int n1)
{	if(n1!=1)
	return n1*fact(n1-1);
}
