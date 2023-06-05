#include <stdlib.h>
#include <stdio.h>

int main()
{
	int counter, limit;
	int total = 0;
	float average = 0.0;
	int* pointsArray;

	printf("How many numbers do you want to average?\n");
	scanf_s("%d", &limit);

	// heap: memory that the program can use to store variable amount of data
	// allocate memory to store "limit" integers in the heap where (int*) = int typecast pointer
	pointsArray = (int*)malloc(limit * sizeof(int));

	printf("Enter the integers: \n");

	for (counter = 0; counter < limit; counter++)
	{
		scanf_s("%d", &pointsArray[counter]);
		total += pointsArray[counter];
	}

	// typecast the total and the limit to compute the average
	average = (float)total / (float)limit;
	
	printf("Average of entered integers is: %.2f\n", average);

	// return the memory to the heap
	free(pointsArray);
}