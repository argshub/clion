#include <stdio.h>

int main(void) {
	unsigned short int x, y, z;
	x = 143;    // 0000_0000_1000_1111 in binary
	y = 127;    // 0000_0000_0111_1111 in binary
	z = x ^ y;	// 0000_0000_1111_0000 in binary
	printf("after xor operation: %d", z);  
	return 0;
}