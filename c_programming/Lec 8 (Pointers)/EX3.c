
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	char *start;
	char *end;
	char temp;
	int counter=0;
	printf("Input a string");
	fflush(stdin);	fflush(stdout);
	scanf("%s",str);
	while(str[counter]!='\0')
	{
		counter++;
	}
	start=str;
	end=str+counter-1;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("Reversed string is: %s",str);
	return EXIT_SUCCESS;
}
