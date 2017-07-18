#include <stdio.h>

int x = 10;

void incrementIt() {
	x++;
}

void squareIt() {
	x *= x;
}

int main(void) { 
	printf("global value: %d\n", x);
	incrementIt();
	printf("after increment function call: %d\n", x);
	squareIt();
	printf("after square function call: %d\n", x);
	x = 0;
	printf("initial value: %d", x);
	return 0;
}