#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char a = 'a';
	char b = 'B';
	char c = '3';

	printf("toupper(%c) = %c \n", a, toupper(a));
	printf("tolower(%c) = %c \n", b, tolower(b));
	printf("toupper(%c) = %c \n", c, toupper(c));
	printf("tolower(%c) = %c \n", c, tolower(c));

	// strcat(): appends one string to another string
	char string_variable[100] = "This is a string";
	strcat_s(string_variable, sizeof string_variable, ". ");
	printf("%s \n", string_variable);
	strcat_s(string_variable, sizeof string_variable, "This is how strcat() works.");
	printf("%s \n", string_variable);

	// strcpy(): replaces one string with another string
	strcpy_s(string_variable, sizeof string_variable, "This is the replaced string.");
	printf("%s \n", string_variable);

	return 0;
}
