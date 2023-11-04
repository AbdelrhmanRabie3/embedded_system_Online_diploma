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
#include <string.h>
void reverse(char st[]);
int main(void) {
	char string[1000];
	printf("Enter a sentence: ");
	fflush(stdin);	fflush(stdout);
	gets(string);
	reverse(string);
	return EXIT_SUCCESS;
}
void reverse(char st[])
{
	if(*st!='\0')
	{
		reverse(st+1);
		printf("%c",*st);
	}

}
