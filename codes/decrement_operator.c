#include <stdio.h>

int main(void) {
	int x = 10, y, z;
	float m = 10.02, n, o;
	char ch = 'c', ch1, ch2;
	y = x--;     	// post decrement, y is 10 and x is 9
	z = --x;		// pre decrement, x and z is 8
	n = m--;
	o = --m;
	ch1 = ch--;
	ch2 = --ch;
	printf("integer post decrement: %d and pre decrement: %d\n", y, z);
	printf("floating point post decrement: %f and pre decrement: %f\n", n, o);
	printf("character post decrement: %c and pre decrement: %c\n", ch1, ch2);
	return 0;
}