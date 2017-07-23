#include <stdio.h>

int main(void) {
	short int x = 128;   // 0000_0000_1000_0000 in binary
	x = x >> 1;  		// 0000_0000_0100_0000 in binary
	printf("after one shift operation: %d\n", x);
	x = x >> 3;  		// 0000_0000_0000_1000 in binary	
	printf("after two shift operation: %d", x);  
	return 0;
}