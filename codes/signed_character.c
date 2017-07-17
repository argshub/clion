#include <stdio.h>

int main(void) {
	char ch = 'M'; // character is default unsigned 
	signed char ch2 = 'M';  // there's no negative mapping to character 
	printf("character with modifier: %c and without modifier %c\n", ch2, ch);
	return 0;
}