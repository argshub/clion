<h4>#Arithmetic Operators</h4>
<p>Arithmetic operators are used to do arithmetic operations, we usually do in our mathematics class. Such as addition , subtraction, multplication, and division.</p>

<h4>#Addition Operator</h4>
<p>Addition opeartor is used to add two integer or real number.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = x + y; 			// integer addition
	o = m + n;          // real number or floating point addition
	printf("integer addition: %d\n", z);
	printf("floating point addition: %f\n", o);
	return 0;
}</code>
<h4>#Subtraction Operator</h4>
<p>Subtraction opeartor is used to subtract between two integer or real number.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = y - x; 			// integer subtraction
	o = m - n;          // real number or floating point subtraction
	printf("integer subtraction: %d\n", z);
	printf("floating point subtraction: %f\n", o);
	return 0;
}
</code>
<h4>#Multiplication Operator</h4>
<p>Multiplication operator is used to multiply two integer or real number.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = y * x; 			// integer multiplication
	o = m * n;          // real number or floating point multiplication
	printf("integer multiplication: %d\n", z);
	printf("floating point multiplication: %f\n", o);
	return 0;
}</code>
<h4>#Divission Operator</h4>
<p>Divission operator is used to divide two integer or real number.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20, z;
	float m = 10.24, n = 9.68, o;

	z = y / x; 			// integer divission
	o = m / n;          // real number or floating point divission
	printf("integer divission: %d\n", z);
	printf("floating point divission: %f\n", o);
	return 0;
}
</code>
<h4>#Modulus Operator</h4>
<p>Modulus operator is used to get the remainder of two integer or real number divission. It's only applicable to integer or char type, not to a floating point type.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 24, z;
	z = y % x; 			// integer remainter
	printf("integer remainder: %d\n", z);
	return 0;
}
</code>

<h4>#Increment Operator</h4>
<p>Increment operator is used to increment a value by one. There are two way to increment a number. Such as pre-increment and post-increment. Pre-increment first increment the value by one then assign its value and post-increment assign it's value and then increment it by one.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y, z;
	float m = 10.02, n, o;
	char ch = 'a', ch1, ch2;
	y = x++;     	// post increment, y is 10 and x is 11
	z = ++x;		// pre increment, x and z is 12
	n = m++;
	o = ++m;
	ch1 = ch++;
	ch2 = ++ch;
	printf("integer post increment: %d and pre increment: %d\n", y, z);
	printf("floating point post increment: %f and pre increment: %f\n", n, o);
	printf("character post increment: %c and pre increment: %c\n", ch1, ch2);
	return 0;
}
</code>
<h4>#Decrement Operator</h4>
<p>Decrement operator is used to decrement a value by one. There are two way to decrement a value. Such as pre-decrement and post-decrement. Pre-decrement first decrement the value by one then assign its value and post-decrement assign it's value and then decrement it by one.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y, z;
	float m = 10.02, n, o;
	char ch = 'c', ch1, ch2;
	y = x--;     	// post decrement, y is 10 and x is 9
	z = --x;		// pre decrement, x and z is 8
	n = m--;
	o = --m;
	ch1 = ch--;
	ch2 = --ch;
	printf("integer post decrement: %d and pre decrement: %d\n", y, z);
	printf("floating point post decrement: %f and pre decrement: %f\n", n, o);
	printf("character post decrement: %c and pre decrement: %c\n", ch1, ch2);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="compound_assignment_operators">Compound Assignment Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>