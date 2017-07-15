#include <stdio.h>
int main(void) {
	int data1 = 10, data2 = 20, data3; //integer declaration
	// addition operation
	data3 = data1 + data2;
	printf("after addition: %d\n", data3);
	
	// multiplication operation
	data3 = data1 * data2;
	printf("after multiplication: %d\n", data3);
	
	// division operation
	data3 = data2 / data1;
	printf("after division: %d\n", data3);
	
	// subtraction operation
	data3 = data2 - data1;
	printf("after subtraction: %d\n", data3);
	
	return 0;
}