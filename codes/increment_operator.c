#include <stdio.h>

int main(void) {
	int x = 10, y, z;
	float m = 10.02, n, o;
	char ch = 'a', ch1, ch2;
	y = x++;     	// post increment, y is 10 and x is 11
	z = ++x;		// pre increment, x and z is 12
	n = m++;
	o = ++m;
	ch1 = ch++;
	ch2 = ++ch;
	printf("integer post increment: %d and pre increment: %d\n", y, z);
	printf("floating point post increment: %f and pre increment: %f\n", n, o);
	printf("character post increment: %c and pre increment: %c\n", ch1, ch2);
	return 0;
}