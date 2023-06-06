#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Start reading from the file\n");

	// create a file pointer
	FILE* fPointer;

	// declaring a variable of type errno_t to store the return value of fopen_s
	errno_t error_code;

	fopen_s(&fPointer, "text.txt", "r");

	// declaring an array to store the lines read from the file
	char singleLine[150];

	// condition to check the end of file
	while (!feof(fPointer))
	{
		// read the single line from the file
		fgets(singleLine, 150, fPointer);

		// print the read line on the console (this will include a "\n" character and print with an added space)
		puts(singleLine);
	}
	fclose(fPointer);
	printf("Finished reading");
	return 0;
}