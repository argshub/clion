#include <stdio.h>

int main(void) {
	double x;
	long double y;
	printf("size of double: %d byte\n", sizeof x);
	printf("size of long double: %u byte\n", sizeof y);
	return 0;
}