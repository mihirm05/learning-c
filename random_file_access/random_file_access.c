#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fPointer;

	// w+: open the file for writing first and then reading
	fopen_s(&fPointer, "text.txt", "w+");
	fputs("The dog ate 3 pumpkins today", fPointer);

	// brings the file pointer to a particular location
	// 7: how many spaces should the pointer move
	// SEEK_SET: start at the beginning of the file
	fseek(fPointer, 13, SEEK_SET);
	fputs(" apples on Friday", fPointer);

	// SEEK_END: start at the ending of the file and ensure that the number is negative
	fseek(fPointer, -6, SEEK_END);
	fputs("Thursday", fPointer);

	fclose(fPointer);

	return 0;
}