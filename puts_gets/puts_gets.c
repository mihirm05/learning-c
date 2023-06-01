#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char country[100];
	char capital[100];
	char mapping[100] = "";

	// puts() acts like printf() and adds a new line at the end
	puts("Enter a country:");
	// gets() acts like scanf_s() and can handle spaces in the input
	gets(country);

	puts("Capital of that country:");
	gets(capital);

	strcat_s(mapping, sizeof mapping, capital);
	strcat_s(mapping, sizeof mapping, " is the capital of ");
	strcat_s(mapping, sizeof mapping, country);
	printf("%s\n", mapping);	
	puts(mapping);

	return 0;
}