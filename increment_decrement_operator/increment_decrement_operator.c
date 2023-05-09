#include <stdlib.h>
#include <stdio.h>


int main()
{
	int a = 5, b = 10, answer;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	// pre increment
	answer = ++a * b;
	printf("++a * b = %d\n", answer);

	a = 5, b = 10;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	// post increment
	answer = a++ * b;
	printf("a++ * b = %d\n", answer);
}