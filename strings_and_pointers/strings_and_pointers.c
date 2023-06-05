#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	// string1 will be a constant hence cannot be changed
	char string1[] = "s1";
	// string2 will be a pointer variable hence can be changed
	char* string2 = "s2";

	printf("string1: ");
	puts(string1);
	printf("\nstring2: ");
	puts(string2);

	string2 = "s3";
	printf("\nstring2: ");
	puts(string2);
}