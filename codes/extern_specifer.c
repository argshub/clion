#include <stdio.h>

int sumOfTwo() {
	extern int first, last;
	return first + last;
}

int main(void) {
	printf("sum of two: %d\n", sumOfTwo());
	return 0;
}

int first = 200, last = 300;