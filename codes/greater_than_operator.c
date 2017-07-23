#include <stdio.h>

int main(void) {
	int x = 10, y = 20;
	if(y > x) printf("y: %d is greater than x: %d", y, x);
	else printf("comparison is false");
	return 0;
}