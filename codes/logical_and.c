#include <stdio.h>

int main(void) {
	int x = 30, y = 20, z = 10;
	if(x > y && y > z) printf("x: %d is greater than y: %d and y: %d is greater than z: %d", x, y, y, z);
	else printf("expression return false");
	return 0;
}