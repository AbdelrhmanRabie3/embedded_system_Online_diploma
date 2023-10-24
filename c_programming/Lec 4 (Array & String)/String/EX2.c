

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char string[500];
int counter;
int len=0;
printf("Enter a string: ");
fflush(stdin);	fflush(stdout);
gets(string);
for(counter=0;string[counter]!=0;counter++)
{
	len++;
}
printf("Length of string: %d", len);
	return EXIT_SUCCESS;
}
