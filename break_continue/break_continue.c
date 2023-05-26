#include <stdio.h>
#include <stdlib.h>


int main()
{
	// break
	int counter;
	int desiredIterations;
	int maxIterations = 10;

	printf("Enter a amount of desired iterations (up to %d): ", maxIterations);
	scanf_s("%d", &desiredIterations);

	for (counter = 1; counter <= maxIterations; counter++) 
	{
		printf("iteration number: %d \n", counter);
		if (counter == desiredIterations)
		{
			printf("desired iterations executed\nbreaking loop\n");
			break; 
		}
	}
	if (counter > maxIterations)
	{
		printf("maximum iterations executed\nexiting loop normally\n");
	}


	// continue
	int initializer;
	int seed = 5;
	int value = 1;

	for (initializer = 1; initializer <= 10; )
	{
		value++;
		if (value % seed != 0)
		{
			continue;
		}
		printf("%d x %d = %d \n", seed, initializer, value);
		initializer++;
	}
}