#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char string[1000];
	char character;
	int freq=0;
	int counter;
	printf("Enter a string: ");
	fflush(stdin);	fflush(stdout);
	gets(string);
	printf("Enter a character to find a frequency: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&character);
	for(counter=0;counter<strlen(string);counter++)
	{
		if (string[counter]==character)
		{
			freq++;
		}
	}
	printf("Frequency of %c = %d",character,freq);
	return EXIT_SUCCESS;
}
