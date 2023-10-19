#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float num1,num2,num3;
	printf("enter three numbers ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	fflush(stdin); fflush(stdout);
	scanf("%f",&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("Largest number = %.2f",num1);
		}
		else
		{
			printf("Largest number = %.2f",num3);
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("Largest number = %.2f",num2);
		}
		else
			printf("Largest number = %.2f",num3);
	}
	return EXIT_SUCCESS;
}
