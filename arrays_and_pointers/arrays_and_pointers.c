#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	printf("Elements \t Address \t\t Value\n");

	for (int i = 0; i < 5; i++)
	{
		printf("array[%d] \t %p \t %d \n", i, &array[i], array[i]);
	}

	// print out the address of the first array element
	// array name is the pointer to the first element
	printf("\narray \t\t %p \n", array);

	printf("*array \t\t %d\n", *array);
	printf("*(array+3) \t %d\n", *(array + 3));
	return 0;
}