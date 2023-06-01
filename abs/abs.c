#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int value1, value2, difference;
	printf("Enter value1:\n");
	scanf_s("%d", &value1);

	printf("Enter value2:\n");
	scanf_s("%d", &value2);

	difference = value1 - value2;
	printf("value1 - value2: \n %d \n", difference);
	printf("abs(value1 - value2):\n %d \n", abs(difference));

	return 0;
}	