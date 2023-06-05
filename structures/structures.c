#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

int main()
{
	struct user user1;
	struct user user2;

	// use the . operator to access the structure members
	user1.userID = 1;
	user2.userID = 2;

	// can also use puts() and gets() to populate the structure member
	puts("Enter the first name of user1:");
	gets(user1.firstName);

	puts("Enter the first name of user2:");
	gets(user2.firstName);

	printf("user1 id is %d\n", user1.userID);
	printf("user1 first name is %s\n", user1.firstName);

	printf("user2 id is %d\n", user2.userID);
	printf("user2 first name is %s\n", user2.firstName);

	return 0;
}