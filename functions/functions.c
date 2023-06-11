#include <stdlib.h>
#include <stdio.h>

// prototyping all the defined functions 
void additionalFunction();

// not defined within a particular function hence all of them can use this
int globalVariable = 24;

// main serves as the start point of our code
int main()
{
	// since defined in main, only main can use it
	int localVariable1 = 25;

	printf("globalVariable: %d\n", globalVariable);
	printf("localVariable1: %d\n", localVariable1);
	// can not access localVariable2 from this function
	// printf("localVariable2: %d\n", localVariable2);

	additionalFunction();

	return 0;
}

void additionalFunction()
{
	int localVariable2 = 26;
	printf("globalVariable: %d\n", globalVariable);
	// can not access localVariable1 from this function
	// printf("localVariable1: %d\n", localVariable1);
	printf("localVariable2: %d\n", localVariable2);
	return;
}