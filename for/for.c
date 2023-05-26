#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	printf("Example 1\n");
	// int counter = 0;
	int limit;
	int variable;

	printf("Enter the value to print the corresponding table: \n");
	scanf_s("%d", &variable);

	printf("Enter the value of limit to print the table: \n");
	scanf_s("%d", &limit);
	
	// the conditions in the for loop can be written in this manner as well
	int counter = 1;
	for (; counter <= limit; )
	{
		printf("%d x %d = %d \n", variable, counter, variable * counter);
		counter++;
	}

	printf("Example 2\n");

	int rows;
	int columns;
	int cell_content = 1;

	printf("Enter the number of rows: \n");
	scanf_s("%d", &rows);

	printf("Enter the number of columns: \n");
	scanf_s("%d", &columns);


	for (int row_iterator = 1 ; row_iterator <= rows; row_iterator++)
	{
		for (int col_iterator = 1 ; col_iterator <= columns; col_iterator++)
		{
			printf("%d ", cell_content);
			cell_content++;
		}
		printf("\n");
	}
}