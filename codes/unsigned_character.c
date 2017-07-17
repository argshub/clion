#include <stdio.h>

int main(void) {
	// character is unsigned by default so 
	//the use of unsigned makes no difference
	// signed or unsigned treated as same by the compiler
	unsigned char ch = 'M';
	printf("character: %c\n", ch);
	return 0;
}