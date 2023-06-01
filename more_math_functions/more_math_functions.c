#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
	//pow()
	int base, power;
	float base_to_the_power;

	printf("Enter the base:\n");
	scanf_s("%d", &base);
	printf("Enter the power:\n");
	scanf_s("%d", &power);

	base_to_the_power = pow(base, power);

	printf("pow(%d, %d): \n%.2f \n", base, power, base_to_the_power);

	//sqrt()
	int number;
	float number_sqrt;

	printf("Enter a number:\n");
	scanf_s("%d", &number);

	number_sqrt = sqrt(number);
	
	printf("sqrt(%d): \n%.2f\n", number, number_sqrt);

	//rand()
	int random_number;
	int limit = 10;

	printf("Generating %d random numbers:\n", limit);

	for (int i = 0; i < limit; i++)
	{
		printf("%d \n", rand());
	}

	printf("Generating %d random numbers (limited to values between 1 and 6): \n");

	for (int i = 0; i < limit; i++)
	{
		printf("%d \n", rand() % 6 + 1);
	}
	return 0;
}