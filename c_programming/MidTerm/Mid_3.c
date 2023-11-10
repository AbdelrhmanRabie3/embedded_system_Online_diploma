
#include <stdio.h>
#include <stdlib.h>
void prime(int n1,int n2);
int main(void) {
	int num1,num2;
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num1);
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num2);
	prime(num1,num2);
	return EXIT_SUCCESS;
}
void prime(int n1,int n2)
{
	int counter1;
	int counter2;
	int res;
	for(counter1=n1;counter1<=n2;counter1++)
	{	res=0;
		for(counter2=1;counter2<=counter1;counter2++)
		{
			if(counter1%counter2==0)
			{
				res++;
			}
		}
		if(res==2)
		{
			printf("%d ",counter1);
		}

	}
}
