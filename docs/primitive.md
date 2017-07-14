<h4>#Primitive Data Types</h4>

<p>Primitive data types are those unable to decomposed into simpler values. 
These are programming languages built in data types. Different programming 
languages have different built in data types in their intendent application area.
May your mind can knock in some point that what are these types. In programming language,
data types  are set of values of same type.
</p>


<h5 style="display:inline;">C Support Different types of primitve data types. For Instance - 
			# Character - to represent ASCCI Character set
			# Integer - to represent integer values
			# Real Number - to represent real number
</h5>

<code>
#include<stdio.h>
int main() {
	// c is strictly typed language, so variable and valus must be same type
	char ch = 'M';  // char to represent character
	printf("Character: %c\n", ch);
	
	int integer = 100;  // int to numeric values
	printf("Integer: %d\n", integer);
	
	float flt = 10.22;  // float to represent real number
	printf("Real Number: %f\n", flt); 
	return 0;
}
</code>