#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char string[20];
	char* pString = string;

	fgets(pString, 20, stdin);
	puts(pString);

	return 0;
}