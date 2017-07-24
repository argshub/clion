#include <stdio.h>

int main(void) {
	int x[10];        // integer array declaration
	
	x[0] = 100;
	x[1] = 200;
	x[2] = 300;
	
	printf("value of first index: %d\n", x[0]);
	printf("value of second index: %d\n", x[1]);
	printf("value of third index: %d\n", x[2]);
	return 0;
}