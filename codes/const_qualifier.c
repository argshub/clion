#include <stdio.h>

const int totalUser = 100;  // must initialize a const-variable with an initial value

int main(void) {
	//totalUser = 20;  		// modifying the const-variable value will cause error
	int x;                  
	x = totalUser + 20;         // you can assign it's value to non-const variable
	printf("totalUser value: %d\n", totalUser);
	printf("x value: %d\n", x);
	return 0;
}