#include <stdio.h>

int main(void) {
	int x = 20;      // variable declaration
	int *y;    		// pointer declaration
	y = &x;			// address of x
	printf("value of x: %d\n", x);
	printf("value of y: %d\n", *y);
	return 0;
}