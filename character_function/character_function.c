#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


int main()
{
	// int and char can be interchangeably initialised
	int var_int = '4';
	char var_char = 'a';
	
	if (isalpha(var_int))
	{
		printf("%d is an alphabet\n", var_int);
		printf("%c is an alphabet\n", var_int);
	}
	else if (isdigit(var_int))
	{
		printf("%d is a digit\n", var_int);
		printf("%c is a digit\n", var_int);
	}	

	if (isalpha(var_char))
	{
		printf("%d is an alphabet\n", var_char);
		printf("%c is an alphabet\n", var_char);
	}
	else if (isdigit(var_char))
	{
		printf("%d is a digit\n", var_char);
		printf("%c is a digit\n", var_char);
	}
}