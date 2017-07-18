#include <stdio.h>

int divideByTen(int x) {
	//printf("%d", tenValue);  // refering tenValue willl cause error 
	if(x > 0) {
		int tenValue = 10;      // local variable of block scope
		return x / tenValue;	// tenValue exist only inside the block
	}
	return x;
}

int main(void) { 
	printf("after division: %d\n", divideByTen(200));
	return 0;
}