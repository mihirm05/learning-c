#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
	int variable = 3;
	int* pVariable = &variable;

	printf("variable: %d\n", variable);
	printf("*pVariable: %d\n", *pVariable);

	// dereferencing a pointer: can be used to access or manipulate data contained in the memory location pointed to by a pointer
	*pVariable = 5;
	printf("*pVariable: %d\n", *pVariable);
	printf("variable: %d\n", variable);
	return 0;
}