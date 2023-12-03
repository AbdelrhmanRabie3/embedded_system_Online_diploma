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
struct sDistance
{
	float feet;
	float inch;
};
int main(void) {
	struct sDistance d1,d2,sum;
		printf("Enter information of 1st distance: \n");
		printf("Enter feet: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d1.feet);
		printf("Enter inch: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d1.inch);
		printf("Enter information of 2nd distance: \n");
		printf("Enter feet: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d2.feet);
		printf("Enter inch: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d2.inch);
		sum.feet=d1.feet+d2.feet;
		sum.inch=d1.inch+d2.inch;
		while(sum.inch>12)
		{
			sum.feet++;
			sum.inch-=12;
		}
		printf("sum of distances = %.0f' -%.1f ",sum.feet,sum.inch);
	return EXIT_SUCCESS;
}
