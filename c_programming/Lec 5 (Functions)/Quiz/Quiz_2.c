

#include <stdio.h>
#include <stdlib.h>
void swap_arr(int [],int[],int,int);
int main(void) {
	int arr1[20];
	int arr2[10];
	int len1,len2;
	int counter;
	printf("Enter length of arr1 ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&len1);
	printf("Enter length of arr2 ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&len2);
	printf("Enter arr1 elements ");
	for(counter=0;counter<len1;counter++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr1[counter]);
	}
	printf("Enter arr2 elements ");
	for(counter=0;counter<len2;counter++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr2[counter]);
	}
	printf("arr1 is: \n");
	for(counter=0;counter<len1;counter++)
	{
		printf("%d ",arr1[counter]);
	}
	printf("\n");
	printf("arr2 is: ");
	for(counter=0;counter<len2;counter++)
	{
		printf("%d ",arr2[counter]);
	}
	printf("\n");
	swap_arr(arr1,arr2,len1,len2);
	return EXIT_SUCCESS;
}

void swap_arr(int a[],int b[],int a_len ,int b_len)
{
	int temp[20];
	int len_temp;
	int counter;
	len_temp=a_len;
	a_len=b_len;
	b_len=len_temp;
	for (counter=0;counter<20;counter++)
	{
		temp[counter]=a[counter];
	}
	for (counter=0;counter<a_len;counter++)
	{
		a[counter]=b[counter];

	}
	for(counter=0;counter<b_len;counter++)
	{
		b[counter]=temp[counter];
	}
	printf("swapped arrays \n");
	printf("Array 1:\n");
	for(counter=0;counter<a_len;counter++)
	{
		printf("%d ",a[counter]);
	}
	printf("\n");
	printf("Array 2:\n");
	for(counter=0;counter<b_len;counter++)
	{
		printf("%d ",b[counter]);
	}
}
