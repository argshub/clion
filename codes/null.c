#include <stdio.h>

int main(void) {
	int x = 10; 				// variable declaration
	int *pointer1, *pointer2;  // pointer declaration by preceding asterisk(*) 
	pointer1 = &x; 				// pointer1 reference to the address of x
	printf("pointer1 value: %d\n", *pointer1);
	
	pointer2 = NULL;            // poniter2 has no referent
	if(pointer2 == NULL) printf("%s", "NULL Pointer");
	return 0;
}