#include <stdio.h>
#include <stdlib.h>

int main()
{
	char firstName[20];
	char lastName[20];
	int age;

	printf("Enter the first name\n");
	scanf_s("%s", firstName, _countof(firstName));

	printf("Enter the second name\n");
	scanf_s("%s", lastName, _countof(lastName));

	printf("Enter the age\n");
	scanf_s("%d", &age);
	printf("%s %s %d \n", firstName, lastName, age);

}