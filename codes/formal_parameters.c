#include <stdio.h>

int square(int x); 	// function declaration with formal paramater x 
					// you can declare one or multiple formal paramaters

int main(void) { 
	printf("after square: %d\n", square(10));
	return 0;
}

int square(int x) {  		// function definition start
	return x * x;			// x is define a local scope inside the function
}  							// end of function definition