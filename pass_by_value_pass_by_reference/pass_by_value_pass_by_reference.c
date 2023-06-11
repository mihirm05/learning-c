#include <stdio.h>
#include <stdlib.h>

// prototyping the functions
void passByValue(int i);
void passByReference(int *i);

int main()
{
	// initializing the variable
	int variable = 3;
	printf("variable: %d\n", variable);

	// pass by value
	passByValue(variable);
	printf("pass by value: %d\n", variable);

	// pass by reference
	passByReference(&variable);
	printf("pass by reference: %d\n", variable);
}

void passByValue(int value)
// the value of the variable is passed
{
	value = 4;
	return;
}

void passByReference(int *value)
// the address/reference of the variable is passed
// value is a pointer
{
	// dereferencing the pointer and setting the variable it points to to 5
	*value = 5;
	return;
}