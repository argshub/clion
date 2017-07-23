#include <stdio.h>

int main(void) {
	int x = 10, y = 21;
	y %= x;				// the statement is equal to y = y % x
	printf("integer remainder: %d\n", y);
	return 0;
}