# include <stdio.h>

int main()
{
	// \0: string terminator (needs to be included while computing the memory to be set aside when declaring string)
	char name[12] = "Ross Taylor";
	printf("%s is an NZ player\n", name);

	// accessing the array element and changing it
	name[3] = 'e';
	printf("%s is an NZ player\n", name);

	// alternate method of declaring an array
	char food[] = "bacon";
	printf("food array: %s\n", food);

	// modifying the array
	strcpy(food, "tuna");
	printf("updated food array is: %s \n", food);

	return 0;
}