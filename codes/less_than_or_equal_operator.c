#include <stdio.h>

int main(void) {
	int x = 10, y = 10;
	if(y < x) printf("y: %d is greater than x: %d", y, x);
	else if(y <= x) printf("y: %d is equal x: %d", y, x);
	else printf("comparison is false");
	return 0;
}