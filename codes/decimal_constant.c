#include <stdio.h>

int main(void) {               
	int x = 100;   // integer constant
	printf("decimal signed constant: %d\n", x);
	
	unsigned int y = 100U;    // suffix U to specify unsigned constant
	printf("decimal unsigned constant: %d\n", y);
	
	long int z = 10E5L;  // infix E to specify exponent and suffix L to specify long integer
	printf("decimal long range constant: %d\n", z);
	return 0;
}