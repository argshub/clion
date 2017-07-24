#include <stdio.h>

struct user {          // structure aggregate data type
	int id;
	int accountNumber;
};

int main(void) {
	struct user newUser;
	
	newUser.id = 1234;
	newUser.accountNumber = 67891;
	
	printf("id number: %d\n", newUser.id);
	printf("account number: %d\n", newUser.accountNumber);
	return 0;
}