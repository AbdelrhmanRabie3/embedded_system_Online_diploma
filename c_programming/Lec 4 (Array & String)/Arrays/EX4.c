#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[50];
	int counter;
	int n;
	int num;
	int loc;
	printf("Enter number of elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
		for(counter=0;counter<n;counter++)
		{
			fflush(stdin);	fflush(stdout);
			scanf("%d",&arr[counter]);
		}
	printf("Enter the element to be inserted: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	printf("Enter the location: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&loc);
	for(counter=n;counter>=loc;counter--)
	{
		arr[counter]=arr[counter-1];
	}
	for(counter=0;counter<=n;counter++)
			{if (loc-1==counter)
			{
				arr[counter]=num;


			}
				printf("%d ",arr[counter]);
			}
	return EXIT_SUCCESS;
}
