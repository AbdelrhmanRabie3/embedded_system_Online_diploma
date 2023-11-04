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
int power(int n1,int n2);
int main(void) {
	int base_num,power_num;
		printf("Enter base number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&base_num);
		printf("Enter power number(positive integer): ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&power_num);
		printf("%d^%d = %d",base_num,power_num,power(base_num,power_num));
	return EXIT_SUCCESS;
}
int power(int n1,int n2)
{	if(n2!=0)
	return (n1*power(n1,n2-1));
else
{
	return 1;
}
}
