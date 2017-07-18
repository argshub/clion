#include <stdio.h>

int main(void) {
	// integer reference
	int x;          // preceding int type with a name
	x = 1000;		// give a initial integer value
	printf("integer value: %d\n", x);
	
	// character reference 
	char ch;         // preceding char with a name
	ch = 'M';        // give a initial character value
	printf("character value: %c\n", ch);
	
	// real number reference
	float m;        // preceding float with a name
	double n;
	m = 10.20;
	n = 10.20;
	printf("float: %f and double: %.10f\n", m, n);
	return 0;
}