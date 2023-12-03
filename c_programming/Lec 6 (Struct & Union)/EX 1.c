
#include <stdio.h>
#include <stdlib.h>
struct sInformation
{
	char name[100];
	int roll_number;
	float marks;
};
int main(void) {
	struct sInformation s;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdin);		fflush(stdout);
	gets(s.name);
	printf("Enter roll number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&s.roll_number);
	printf("Enter marks: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&s.marks);
	printf("Displaying information\n");
	printf("name: %s\n",s.name);
	printf("Roll: %d\n",s.roll_number);
	printf("marks: %.2f",s.marks);
	return EXIT_SUCCESS;
}
