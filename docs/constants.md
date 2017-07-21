<h4>#Constants / Literals</h4>
<p>Constants/Literals are fixed values that are used in a program to do some operation. A variable can hold value of the same type. Usually if we want to square a number, first we have to represent the value with a variable and then we have to square it. When we initialize a variable, we just give that varaible an initial value of the same type and the value is a constant/literals.</p>

<h4>#Character Constant</h4>
<p>We can represent character constant(ASCII character set) usually by char data type. The constant value must be enclosed by single quotes. Usually the constant is just a prototype of a character that is associated with a numeric value. A conversion occur during compile time.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	char ch = 'M';
	printf("character: %c\n", ch);
	printf("character value: %d\n", ch);
	return 0;
}
</code>

<h4>#Numeric Constant</h4>
<p>To represent numeric value we usually use decimal constant. Because we can easily understand the decimal numeric radix system. In C, we can use decimal, hexadcimal or octal constant value. Usually it's just a representation. Computer unable to understand those constant values. A conversion between binary occur during compile time.</p>
<h5>#Decimal Constant</h5>
<code>
#include&lt;stdio.h&gt;

int main(void) {               
	int x = 100;   // integer constant
	printf("decimal signed constant: %d\n", x);
	
	unsigned int y = 100U;    // suffix U to specify unsigned constant
	printf("decimal unsigned constant: %d\n", y);
	
	long int z = 10E5L;  // infix E to specify exponent and suffix L to specify long integer
	printf("decimal long range constant: %d\n", z);
	return 0;
}
</code>

<h5>#Hexaecimal Constant</h5>
<p>To represent hexadecimal constant, just precede the decimal constant with 0x.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {               
	int x = 0x64;  // preceding 0x with decimal to specify hexadecimal constant
	printf("hexadecimal constant: %d\n", x);
	return 0;
}
</code>

<h5>#Octal Constant</h5>
<p>To represent octal constant, just precede the decimal constant with 0.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {               
	int x = 0144;   // preceding 0 with decimal to specify octal constant
	printf("octal constant: %d\n", x);
	return 0;
}
</code>

<h5>#Floating Point Constant</h5>
<p>We can represent real number(floating point values) by decimal constant with specific range and precission. To a machine perspective, representing floating point require some complexity. Currently floating point representation are hardware based. But few a past, floating point representation were just languauge implementation defined appromixation floating point arithmetic.</p>
<code>
#include&lt;stdio.h&gt;

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
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="backslash_constant">Backslash Character Constant <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>