#include<stdio.h>

int main()
{
	float grade = 0.0;
	float scoreEntered = 0.0;
	float numberOfTests = 0.0;
	float averageGrade = 0.0;

	printf("Press 0 to exit\n\n");

	do {
		printf("Tests: %.0f Average: %.2f\n", numberOfTests, averageGrade);
		printf("Enter test score: ");
		scanf_s("%f", &scoreEntered);
		grade += scoreEntered;
		numberOfTests++;
		averageGrade = grade / numberOfTests;
	} while (scoreEntered != 0);

}