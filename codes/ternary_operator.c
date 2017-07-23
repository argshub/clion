#include <stdio.h>

int main(void) {
	int x = 20, y;
	// if-else selection statement
	if(x > 9) y = 100;
	else y = 200;
	printf("value of y: %d\n", y);
	// ternary operator
	y = x > 9 ? 100 : 200;
	printf("value of y: %d\n", y);
	return 0;
}