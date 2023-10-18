
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1;
	float num2;
	float temp;
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping, value of a = %0.2f\n", num1);
	printf("After swapping, value of b = %0.2f", num2);
	return EXIT_SUCCESS;
}
