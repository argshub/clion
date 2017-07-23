<h4>#Assignment Operator</h4>

<p>Assignment operator is to assign an initial value to a variable of the same type. Variable is a memroy location to a specific value. So assignment operator is used to assign a value or change the value.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x;       // integer type declaration
	char ch;     // character type declaration
	float flt;   // floating point type
	
	x = 10;     // integer assignment
	printf("integer: %d\n", x);
	
	ch = 'a';     // character assignment
	printf("character: %c\n", ch);
	
	flt = 10.2;   // floating point assignment
	printf("floating point: %f\n", flt);
	return 0;
}
</code>
<h4>#Multiple Assignment</h4>
<p>You can initialize multiple variable by a assignment operator.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x, y, z;    // multiple declaration
	x = y = z = 1000;
	
	printf("x: %d, y: %d, z: %d", x, y, z);
	return 0;
}
</code>

<h4>#Assignment Type Conversions</h4>
<p>If you assign a value to a different type of variable, a type conversion occur during compile time. Be careful to assign a value to different type of variable. For instance - char is 8bit in size and and inetger is 32 bit. If you assign an integer to a character, a chance to loose 24bit data. Integer and Floating point type is 32 bit, but floating point arithmetic is different from integer. Because two are different types. It's a chance to loose floating point precission. </p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 97.02;   // floating type assign to integer type
	char ch = 97;    // integer assignment to character type
	float flt = 10;  // integer assignment to float type
	printf("integer, x: %d\n", x);
	printf("character, ch: %c\n", ch);
	printf("floating point, flt: %f\n", flt);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="arithmetic_operators">Arithmetic Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>