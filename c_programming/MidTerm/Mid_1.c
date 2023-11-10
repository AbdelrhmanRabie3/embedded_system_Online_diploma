/*
 ============================================================================
 Name        : Mid_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum_digits(int n);
int main(void) {
	int num;
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("%d",sum_digits(num));
	return EXIT_SUCCESS;
}
int sum_digits(int n)
{
	int res=0;
	int new_num;
	while(n!=0)
		{
		new_num=n%10;
		res+=new_num;
		n/=10;

		}
	return res;
}
