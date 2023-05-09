#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool flag1 = true;
	bool flag2 = false;
	bool and_condition;
	bool or_condition;

	and_condition = flag1 && flag2;
	or_condition = flag1 || flag2;
	printf("&& of %d and %d results in %d \n", flag1, flag2, and_condition);
	printf("|| of %d and %d results in %d \n", flag1, flag2, or_condition);
}