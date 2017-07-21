#include <stdio.h>

int x = 10;

volatile int *totalUser = (int *) &x;

int main(void) {               
	x = *totalUser + 20;
	printf("totalUser value: %d\n", *totalUser);
	return 0;
}