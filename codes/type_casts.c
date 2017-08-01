#include <stdio.h>

int main(void) {
	float x;
	int y = 5, z = 2;
	// two intger division returns a integer
	// so the floating point value is going to be lost
	x = (float) y / z;   			// cast to float to save the floating point value
	printf("value of x: %f", x);
	return 0;
}