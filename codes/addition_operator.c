#include <stdio.h>

int main(void) {
	int x = 10, y = 20;
	x = x + y; 			// integer addition
	x += y;				// two statements are equal
	printf("integer addition: %d\n", x);
	return 0;
}