#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int variable = 3;

	printf("Address \t\t Variable \t\t Value\n");

	// pointer is a special type of variable capable of holding memory address
	// declaring a pointer variable
	int * pVariable = &variable;

	// now pVariable and &variable can be use interchangeably
	// pVariable will be stored in a completely different memory address
	printf("%p \t %s \t\t %d\n", pVariable, "variable", variable);
	printf("%p \t %s \t\t %p\n", &pVariable, "pVariable", pVariable);

	return 0;
}