#include <stdio.h>

int main(void) {
	int x = 30, y = 20, z = 10;
	if(!(y > x)) printf("y: %d is not greater than x: %d", y, x);
	else printf("expression return false");
	return 0;
}