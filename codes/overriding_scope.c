#include <stdio.h>

int tenValue = 100;   // global scope

void doSomething() {
	printf("global scope: %d\n", tenValue);
	int tenValue = 200;    // function scope
	printf("function scope: %d\n", tenValue);
	if(tenValue >= 200) {
		int tenValue = 300;      // local block scope
		printf("local scope: %d\n", tenValue);
	}
}

int main(void) { 
	doSomething();
	return 0;
}