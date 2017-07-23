#include <stdio.h>

int main(void) {
	int x = 30, y = 20, z = 10;
	if(y > x || y > z) printf("y: %d is greater than x: %d or y: %d is greater than z: %d", y, x, y, z);
	else printf("expression return false");
	return 0;
}