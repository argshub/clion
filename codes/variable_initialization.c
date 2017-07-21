#include <stdio.h>

int main(void) {
	// initialize integer with an initial value
	// you can use decimal constant to initialize integer variable
	int x = 100;
	printf("integer: %d\n", x);
	
   	// initialize character data type with specific character
	// character must be a element of ASCCI character set enclosed by single quotes
	char ch = 'M'; 
	printf("character: %c\n", ch);
	
	// multiple intialization in a single statement
	int m, n, o;
	m = n = o = 99;
	printf("%d\t, %d\t, %d", m, n, o);
	return 0;
}