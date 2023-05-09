#include <stdio.h>

int main()
{
	// single line comment
	/* this is a multi-line 
	comment */
	printf("hello world!\n");

	// elaborating the printf variations
	printf("The %s is the best place to live\n", "Earth");
	printf("The %s is the best %s to live in our %s \n", "Earth", "planet", "solar system");
	printf("Pi is %.2f\n", 3.141579);
	printf("Pi is %.3f\n", 3.141579);


	int age = 27;
	printf("I am %d years old\n", age);

	return 0;
}