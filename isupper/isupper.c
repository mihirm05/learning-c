#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	char var;
	printf("Enter a character:\n");
	scanf_s("%c", &var);

	if (isalpha(var))
	{
		if (isupper(var))
		{
			printf("%c is uppercase\n", var);
		}
		else
		{
			printf("%c is lowercase\n", var);
		}
	}
	else
	{
		printf("Not a valid input");
	}
}