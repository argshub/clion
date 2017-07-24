#include <stdio.h>

struct user {          // structure aggregate data type
	int id;
	int accountNumber;
} newUser;

int main(void) {
	struct user *user2;
	user2 = &newUser;
	
	user2->id = 1234;
	user2->accountNumber = 67891;
	
	printf("id number: %d\n", user2->id);
	printf("account number: %d\n", user2->accountNumber);
	return 0;
}