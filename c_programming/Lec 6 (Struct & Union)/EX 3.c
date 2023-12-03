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

struct sComplex
{
	float real;
	float imag;
};
struct sComplex add(struct sComplex ,struct sComplex);
int main(void) {
	struct sComplex n1,n2,sum;
	printf("for 1st complex number: \n");
			printf("Enter real an imaginary respectively : ");
			fflush(stdin);		fflush(stdout);
			scanf("%f",&n1.real);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&n1.imag);
			printf("for 2nd complex number: \n");
			printf("Enter real an imaginary respectively : ");
			fflush(stdin);		fflush(stdout);
			scanf("%f",&n2.real);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&n2.imag);
			sum=add(n1,n2);
			printf("sum= %.1f %.1fi",sum.real,sum.imag);
	return EXIT_SUCCESS;
}
struct sComplex add(struct sComplex num1,struct sComplex num2)
{
	struct sComplex sum;
	sum.real=num1.real+num2.real;
	sum.imag=num1.imag+num2.imag;
	return sum;
}
