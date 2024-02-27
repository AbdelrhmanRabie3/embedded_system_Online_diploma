/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Employee
{
	char *Employee_name;
	int Employee_id;
};
int main(void) {
	struct Employee st1;
	struct Employee st2;
	struct Employee st3;
	struct Employee *arr[3];
	arr[0]=&st1;
	arr[1]=&st2;
	arr[2]=&st3;
	struct Employee (*(*ptr)[3])=arr;
	st1.Employee_name="mohamed";
	st1.Employee_id=1000;
	st2.Employee_name="Ahmed";
	st2.Employee_id=1001;
	st3.Employee_name="Alex";
	st3.Employee_id=1002;
	printf("Employee1 name: %s\n",***ptr);
	printf("Employee1 name: %d\n",(**(*ptr)).Employee_id);
	printf("Employee2 name: %s\n",**(*ptr+1));
	printf("Employee2 name: %d\n",(**(*ptr+1)).Employee_id);
	printf("Employee3 name: %s\n",**(*ptr+2));
	printf("Employee3 name: %d\n",(**(*ptr+2)).Employee_id);
	return EXIT_SUCCESS;
}
