#include <stdio.h>

// function to do some calculation
int square(int squareOf) {
	return squareOf * squareOf;
}
int main(void) {
	int x = 10;
	x = square(x);
	printf("after square: %d\n", x);
	return 0;
}