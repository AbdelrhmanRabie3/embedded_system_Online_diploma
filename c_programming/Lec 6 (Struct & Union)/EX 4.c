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
struct sInformation
{
	char name[100];
	int number;
	int marks;
};
int main(void) {
	struct sInformation students[10];
	int counter;
	printf("Enter information of students: \n");
	for(counter=0;counter<10;counter++)
	{
		printf("\n");
		students[counter].number=counter+1;
	printf("for roll number %d\n",counter+1);
	printf("Enter name: ");
	fflush(stdin);		fflush(stdout);
	gets(students[counter].name);
	printf("Enter marks: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&students[counter].marks);
	}
	printf("Displaying information\n");
	for(counter=0;counter<10;counter++)
	{
		printf("\n");
		printf("for roll number %d\n",students[counter].number);
		printf("name: %s\n",students[counter].name);
		printf("marks: %d\n",students[counter].marks);
	}
	return EXIT_SUCCESS;
}
