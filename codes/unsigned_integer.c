#include <stdio.h>

int main(void) {
	int x = 3147483649;   // it will cause error
	unsigned int y = 3147483649;
	printf("signed value: %i\n", x);
	printf("unsigned value: %u\n", y);
	return 0;
}