#include <stdio.h>

// this function return int value
int isLess(int a, int b) {
	return a > b ? 1 : 0;
}

// this is a utility  function to echo into the concole
void echo(char *ch) {
	printf("%s\n", ch);
}

int main(void) {
	int x = 10, y = 20;
	printf("%d\n", isLess(x, y)); // check whether x is greater than y
	echo("Hello World");
	return 0;
}