/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10][10];
	int b[10][10];
	int n,m;
	int rowcounter;
	int colcounter;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);	fflush(stdout);
	scanf("%d",&m);
	printf("Enter elements of matrix:\n");
	for(rowcounter=0;rowcounter<n;rowcounter++)
	{
		for(colcounter=0;colcounter<m;colcounter++)
		{
			printf("Enter element  a%d%d ",rowcounter+1,colcounter+1);
			fflush(stdin);	fflush(stdout);
			scanf("%d",&a[rowcounter][colcounter]);
		}
	}
	printf("Entered matrix:\n");
	 for(rowcounter=0;rowcounter<n;rowcounter++)
	        {
	        	for(colcounter=0;colcounter<m;colcounter++)
	        	{
	        		printf("%d	",a[rowcounter][colcounter]);
	        		b[colcounter][rowcounter]=a[rowcounter][colcounter];
	        	}
	        	printf("\n");
	        }
	 printf("Transposed matrix\n");
	 for(rowcounter=0;rowcounter<m;rowcounter++)
	        {
	        	for(colcounter=0;colcounter<n;colcounter++)
	        	{
	        		printf("%d	",b[rowcounter][colcounter]);
	        	}
	        	printf("\n");
	        }
	return EXIT_SUCCESS;
}
