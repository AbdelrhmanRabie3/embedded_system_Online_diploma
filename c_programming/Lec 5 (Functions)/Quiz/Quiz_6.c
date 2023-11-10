/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int GIT_BIT(int num);
int main(void) {
	int n;
	printf("Enter number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("%d",GIT_BIT(n));
	return EXIT_SUCCESS;
}
int GIT_BIT(int num)
{

	return ((num>>4)&1);
}
