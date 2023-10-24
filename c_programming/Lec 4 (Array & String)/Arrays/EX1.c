
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[2][2];
    float b[2][2];
    int rowcounter;
    int colcounter;
    printf("Enter elements of 1st matrix \n");
    for(rowcounter=0;rowcounter<2;rowcounter++)
    {
    	for(colcounter=0;colcounter<2;colcounter++)
    	{ 	printf("Enter a%d%d ",rowcounter+1,colcounter+1);
    		fflush(stdin);	fflush(stdout);
    		scanf("%f",&a[rowcounter][colcounter]);
    	}
    }
    printf("Enter elements of 2nd matrix \n");
    for(rowcounter=0;rowcounter<2;rowcounter++)
    {
    	for(colcounter=0;colcounter<2;colcounter++)
    	{ 	printf("Enter b%d%d ",rowcounter+1,colcounter+1);
    		fflush(stdin);	fflush(stdout);
    		scanf("%f",&b[rowcounter][colcounter]);
    	}
    }
    printf("sum of matrix\n" );
    for(rowcounter=0;rowcounter<2;rowcounter++)
        {
        	for(colcounter=0;colcounter<2;colcounter++)
        	{
        		printf("%.1f	",a[rowcounter][colcounter]+b[rowcounter][colcounter]);
        	}
        	printf("\n");
        }
	return EXIT_SUCCESS;
}
