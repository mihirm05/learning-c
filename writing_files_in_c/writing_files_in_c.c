#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Starting writing to the file\n");
	// create a file pointer
	FILE* fPointer;

	//Declaring a variable of type errno_t to store the return value of fopen_s
	errno_t error_code;

	// r: read (read an already existing file)
	// w: write (if the file does not exist, create one) and can possibly overwrite
	// a: append
	fopen_s(&fPointer, "text.txt", "w");
	fprintf(fPointer, "this is the first string\n");
	fprintf(fPointer, "this is the second string\n");
	fprintf(fPointer, "this is the third string\n");

	// close the connection to the file
	fclose(fPointer);

	printf("Finished writing to the file\n");

}