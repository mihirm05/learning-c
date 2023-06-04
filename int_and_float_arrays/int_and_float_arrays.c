#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	// int and float arrays do not have the null characted at the end like the string and character array does
	// standard initialization
	int i;
	int integer_array[5] = {6, 7, 8, 9, 10 };

	for (i = 0; i < 5; i++)
	{
		printf("Element %d: %d \n", i, integer_array[i]);
	}

	// custom input initialization
	int counter;
	int number_of_steps[5];
	int total_steps = 0;
	int average_steps;

	for (counter = 0; counter < 5; counter++)
	{
		printf("How many steps did you walk on day %d? \n", counter + 1);
		scanf_s("%d", &number_of_steps[counter]);
		total_steps += number_of_steps[counter];
	}
	average_steps = total_steps / 5;

	printf("\nYou walked %d steps in total, thats an average of %d steps per day \n", total_steps, average_steps);
}