#include <stdio.h>

int main(void) {
	int x;
	x = (10 + 2) * 3 - (4 + 5 * 3);  // operator precedence *, /, +, -
	printf("value of x: %d", x);
	return 0;
}