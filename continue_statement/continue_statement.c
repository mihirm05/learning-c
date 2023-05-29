#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int num = 1;
	int upperLimit;

	printf("Enter the value of upper limit: \n");
	scanf_s("%d", &upperLimit);

	do
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			printf("%d is divisible by either 3 or by 5\n", num);
			num++;
			continue;
		}
		num++;
	} while (num < upperLimit);
}