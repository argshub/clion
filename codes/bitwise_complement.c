#include <stdio.h>

int main(void) {
	// 2's complement number system
	short int x = -32768;   // 1000_0000_0000_0000 in binary
	x = (~x);   		// 0111_1111_1111_1111 in binary
	printf("after complement operation: %d", x);  
	return 0;
}