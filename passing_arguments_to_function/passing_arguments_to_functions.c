#include <stdio.h>
#include <stdlib.h>

float convertKmsToMiles(float kms, float factor);

int main()
{
	float kms, miles, factor = 1.6;

	printf("Enter the distance in kms:\n");
	scanf_s("%f", &kms);

	miles = convertKmsToMiles(kms, factor);

	printf("Equivalent distance in miles: \n%.2f", miles);
}


float convertKmsToMiles(float kms, float factor)
{
	return kms / factor;
}