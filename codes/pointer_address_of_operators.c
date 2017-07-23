#include <stdio.h>

int main(void) {
	int x = 20;      // variable declaration
	printf("address of x: %p\n", &x);
	int *y;    		// pointer declaration
	y = &x;			// address of x
	printf("address of y: %p\n", y);
	return 0;
}