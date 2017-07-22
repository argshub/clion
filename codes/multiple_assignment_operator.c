#include <stdio.h>

int main(void) {
	int x, y, z;    // multiple declaration
	x = y = z = 1000;
	
	printf("x: %d, y: %d, z: %d", x, y, z);
	return 0;
}