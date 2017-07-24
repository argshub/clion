<h4>#Parenthesis [] Operator</h4>
<p>Array is a collection of variables under a common name. In C, array is a variable of the same type in a fixed length, where each value is indexed by a number in range 0..length. square braces([]) is used to array indexing.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x[10];        // integer array declaration
	
	x[0] = 100;
	x[1] = 200;
	x[2] = 300;
	
	printf("value of first index: %d\n", x[0]);
	printf("value of second index: %d\n", x[1]);
	printf("value of third index: %d\n", x[2]);
	return 0;
}
</code>
<h4>#Parenthesis () Operator</h4>
<p>Parenthesis () operator is used to separate expressions. It has the highest precedence in C operator precedence table. So () operator has a good use to alter the general evaluation behaviour of an expression.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x;
	x = (10 + 2) * 3 - (4 + 5 * 3);  // operator precedence *, /, +, -
	printf("value of x: %d", x);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="sizeof_operator">sizeof Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>