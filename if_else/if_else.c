#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	char gender;

	printf("Enter your age: \n");
	scanf_s("%d", &age);

	printf("Enter your gender: (m/f) \n");
	scanf_s(" %c", &gender);

	if (age>=18)
	{
		printf("You are an adult\n");

		if (gender == 'm')
		{
			printf("You are a male");
		}
		else if (gender == 'f')
		{
			printf("You are a female");
		}
	}
	else
	{
		printf("You are not an adult\n");
	}
	
}

