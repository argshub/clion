#include <stdio.h>

int main(void) {
	short int x = 65535; //  provide error
	unsigned short int y = 65535;
	printf("signed short: %d\n", x);
	printf("unsigned short: %u\n", y);
	return 0;
}