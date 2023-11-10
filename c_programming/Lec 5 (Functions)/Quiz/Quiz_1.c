/*
 ============================================================================
 Name        : Quiz_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char USER_NAME[100]="ABDELRHMAN";
int main(void) {
char check[100];
printf("Enter user name: ");
fflush(stdin);	fflush(stdout);
gets(check);
if(strcmp(check,USER_NAME)==0)
{
	printf("correct user name");
}
else
{
	printf("wrong!");
}
	return EXIT_SUCCESS;
}
