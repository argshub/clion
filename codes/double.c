#include <stdio.h>
int main(void) {
	double dbl;  // double declaration
	printf("size of double: %d\n", sizeof dbl);
	dbl = 22.0 / 7.0;
	printf("%f", dbl);
	return 0;
}