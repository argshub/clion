#include <stdio.h>

int main(void) {   
	// float type support 6 digit of precission
	float x = 1001.02F;   // suffix F to specify floating point constant
	printf("floating point with 6 precission: %f\n", x);
	
	// double type support 10 digit of precission
	double y = 1002.02;
	printf("floating point with 10 precission: %f\n", y);
	
	// long double support much longer range & precission
	long double z = 1002.02L; 	// suffix L to specify long double 
	return 0;
}