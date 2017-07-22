#include <stdio.h>

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = x + y; 			// integer addition
	o = m + n;          // real number or floating point addition
	printf("integer addition: %d\n", z);
	printf("floating point addition: %f\n", o);
	return 0;
}