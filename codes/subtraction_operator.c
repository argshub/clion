#include <stdio.h>

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = y - x; 			// integer subtraction
	o = m - n;          // real number or floating point subtraction
	printf("integer subtraction: %d\n", z);
	printf("floating point subtraction: %f\n", o);
	return 0;
}