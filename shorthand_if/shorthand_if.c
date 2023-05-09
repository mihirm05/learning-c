#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number1;
	int number2;

	printf("Enter number1: \n ");
	scanf_s("%d", &number1);

	printf("Enter number2: \n ");
	scanf_s("%d", &number2);

	(number1 < number2) ? printf("%d smaller than %d \n", number1, number2) : printf("%d greater than %d \n", number1, number2);

	// in line use of shorthand if
	int friends = 1;
	printf("I have %d friend%s", friends, (friends != 1) ? "s" : "");
}