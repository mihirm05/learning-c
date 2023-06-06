#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE* fPointer;
	errno_t error_code;

	// opening the file
	// as this is an append operation, no new file will be created
	fopen_s(&fPointer, "text.txt", "a");

	fprintf(fPointer, "\nThis is the first appended string");
	fprintf(fPointer, "\nThis is the second appended string");

	fclose(fPointer);
}