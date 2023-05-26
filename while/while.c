#include<stdio.h>

int main()
{
	printf("Example 1 \n");
	int counter = 1;
	int number = 5;
	while (counter <= 10)
	{
		printf("%d x %d = %d \n", number, counter, number * counter);
		counter++;
	}
	printf("Example 2\n");

	float amount = 0.01;
	int day = 1;

	while (day <= 31) {
		printf("Day:%d Amount:%f \n", day, amount);
		amount *= 2;
		day++;
	}
}