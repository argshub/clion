#include <stdio.h>

int main(void) {
	short int x;
	long int y;
	long double longDouble;
	
	printf("size of char: %d byte\n", sizeof(char));
	printf("size of short int: %d byte\n", sizeof x);
	printf("size of int: %d byte\n", sizeof(int));
	printf("size of long int: %d byte\n", sizeof y);
	printf("size of float: %d byte\n", sizeof(float));
	printf("size of long double: %d byte\n", sizeof longDouble);
	return 0;
}