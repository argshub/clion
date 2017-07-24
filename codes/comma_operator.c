#include <stdio.h>

int main(void) {               
	int x, y, z;   					// multiple variable declaration separated by comma
	x = 30, y = 20, z = 10;  		// multiple assignment separated by comma
	x = (x /= y, x += 10, x *= 2);  // multiple expression  separated by comma
	printf("value of x: %d", x);
	return 0;
}