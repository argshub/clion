#include <stdio.h>

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = y / x; 			// integer divission
	o = m / n;          // real number or floating point divission
	printf("integer divission: %d\n", z);
	printf("floating point divission: %f\n", o);
	return 0;
}