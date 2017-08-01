#include <stdio.h>

int main(void) {
	char ch = 'A';
	int x = 300;
	double y = 2.2;
	y = ch + x + y;
	printf("value of y: %f", y);
	return 0;
}