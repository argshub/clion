#include <stdio.h>

int main(void) {
	int x = -2E4; // integer is by default signed
	signed int y = -2E4;
	printf("integer with modifier: %d and without modifier %d\n", y, x);
	return 0;
}