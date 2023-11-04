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
void prime(int num1,int num2);
int main(void) {
	int n1,n2;
	printf("Enter two numbers (intervals): ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n1);
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n2);
	prime(n1,n2);
	return EXIT_SUCCESS;
}
void prime(int num1,int num2)
{
	int i,j;
	int count;
	printf("prime numbers between %d and %d are: ",num1,num2);
	for(i=num1;i<=num2;i++)
	{count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}


	}
}
