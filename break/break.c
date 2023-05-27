#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main()
{
	int counter = 1;
	int maxIterations = 10;
	int desiredIterations;

	printf("Enter the desired iterations: ");
	scanf_s("%d", &desiredIterations);

	for (; counter <= maxIterations; counter++)
	{
		printf("Iteration id: %d\n", counter);
		if (counter == desiredIterations)
		{
			printf("Desired iterations reached");
			break;
		}
		else if (counter == maxIterations)
		{
			printf("Maximum iterations reached");
		}
	}
}