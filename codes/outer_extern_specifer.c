#include <stdio.h>
#include "outer_extern_file.h"

int first = 200, last = 300;
int main(void) {
	printf("sum of two: %d\n", sumOfTwo());
	return 0;
}