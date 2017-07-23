#include <stdio.h>

int main(void) {
	unsigned short int x, y, z;
	x = 128;      // 0000_0000_1000_0000 in binary
	y = 255;    // 0000_0000_0111_1111 in binary
	z = x | y;	// 0000_0000_1111_1111 in binary
	printf("after or operation: %d", z);  
	return 0;
}