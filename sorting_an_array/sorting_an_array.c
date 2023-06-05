#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int sorted;
	int length = 5;
	int list[5];

	printf("Original list: \n");
	for (int i1 = 0; i1 < length; i1++)
	{
		list[i1] = (rand() % 20) + 1;

		printf("%d ", list[i1]);
	}

	printf("\n");

	// pseudo infinite loop
	while (1)
	{
		// flag to indicate if the list is sorted (0) or not (1)
		sorted = 0;

		// parse through the list till the second last element
		for (int i2 = 0; i2 < length - 1; i2++)
		{
			int temp;
			// if the subsequent element is smaller than the preceding element, then swap the elements
			if (list[i2] > list[i2 + 1])
			{
				temp = list[i2];
				list[i2] = list[i2 + 1];
				list[i2 + 1] = temp;
				// set the sorted flag to 1 to indicate that the list is still unsorted (to enter the next iteration of while)
				sorted = 1;
			}
		}

		// if the list is sorted (0) then break the infinite while loop
		if (sorted == 0)
		{
			break;
		}
	}
	printf("\nSorted list: \n");
	for (int i3 = 0; i3 < length; i3++)
	{
		printf("%d ", list[i3]);
	}
	return 0;
}