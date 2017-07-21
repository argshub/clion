#include <stdio.h>

int series();
int main() {
	for(int i = 0; i < 5; i++) printf("%d\t", series());
	printf("after one series: \n");
	for(int i = 0; i < 5; i++) printf("%d\t", series());
	return 0;
}

int series() {
	static int x = 0;
	x += 2;
	return x;
}