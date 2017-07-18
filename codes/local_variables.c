#include <stdio.h>

int divideByTen(int x) {
	// local variable of function divideByTen
	int tenValue = 10;   // tenValue exist only inside the function
	return x / tenValue;
}

int main(void) { 
	printf("after divsion: %d\n", divideByTen(200));
	// refering tenValue will cause error 
	// because it's being destroyed after the function call 
	//printf("%d", tenValue);
	return 0;
}