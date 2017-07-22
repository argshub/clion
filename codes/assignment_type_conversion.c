#include <stdio.h>

int main(void) {
	int x = 97.02;   // floating type assign to integer type
	char ch = 97;    // integer assignment to character type
	float flt = 10;  // integer assignment to float type
	printf("integer, x: %d\n", x);
	printf("character, ch: %c\n", ch);
	printf("floating point, flt: %f\n", flt);
	return 0;
}