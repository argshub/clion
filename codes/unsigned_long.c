#include <stdio.h>

int main(void) {
	long int x = 3147483647; //  provide error
	unsigned long int y = 3147483647;
	printf("signed long: %d\n", x);
	printf("unsigned long: %u\n", y);
	return 0;
}