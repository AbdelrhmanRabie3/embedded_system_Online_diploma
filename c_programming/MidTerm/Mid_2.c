/*
 ============================================================================
 Name        : Mid_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float sqrRoot(int n);
int main(void) {
	int num;
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("%.3f",sqrRoot(num));
	return EXIT_SUCCESS;
}
float sqrRoot(int n)
{
	float root;
	root =sqrt(n);
	return root;
}
