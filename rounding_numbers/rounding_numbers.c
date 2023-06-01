#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	float var_1 = 9.5653;
	float var_2 = 3.4212;

	// floor()
	printf("floor(var_1): %.2f \n", floor(var_1));
	printf("floor(var_2): %.2f \n", floor(var_2));

	// ceil()
	printf("ceil(var_1): %.2f \n", ceil(var_1));
	printf("ceil(var_2): %.2f \n", ceil(var_2));

	return 0;
}