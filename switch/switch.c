#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define YES 1
#define NO 0


int main()
{
	// strings can not be used in the switch statement arguments (int and chars are allowed)
	char day = 'A';
	char decision = 0;

	switch (day)
	{
		case 'A':
			printf("75<Grade<100\n");
			break;
		case 'B':
			printf("50<Grade<75\n");
			break;
		default:
			printf("Not a valid grade\n");
			break;
	}

	switch (decision)
	{
		case 0:
			printf("No\n");
			break;
		case 1:
			printf("Yes\n");
			break;
		default:
			printf("No decision\n");
			break;
	}
}