#include <stdio.h>

int main(void) {
	// to declare character type precede char with variable name
	char ch;
	// give a intial value
	ch = 'M';
	printf("character: %c\n", ch);
	
	ch = 65;
	printf("character: %c\n", ch);
	printf("size of char: %d byte", sizeof ch);
	return 0;
}