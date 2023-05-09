#include<stdio.h>
#include<stdlib.h>


int main()
{
	int number1;
	int number2;

	printf("Enter number1:\n");
	scanf_s("%d", &number1);

	printf("Enter number2:\n");
	scanf_s("%d", &number2);

	printf("number1 is: %d \n", number1);
	printf("number2 is: %d \n", number2);

	printf("addition of %d and %d is: %d \n", number1, number2, number1 + number2);
	printf("subtraction of %d and %d is: %d \n", number1, number2, number1 - number2);
	printf("multiplication of %d and %d is: %d \n", number1, number2, number1 * number2);
	// ensuring the type of the division output is compatible
	printf("division of %d and %d is: %.3f \n", number1, number2, (float)number1 / (float)number2);

	printf("average of %d and %d is: %.3f \n", number1, number2, ((float)number1 + (float)number2) / 2);

}