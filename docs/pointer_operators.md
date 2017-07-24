<h4>#Pointer Operators</h4>
<p>Pointer is a variable that holds the address of another variable. In general, a value is stored somewhere in memory and a variable is referenced by memory address to that value. If we get the address of that value, then we can get the value. So the pointer variable is suitable is these situation, a pointer variable holds the address of another variable.</p>
<p style="color:red;">N.B.- Variable and pointer must be of same type.</p>

<h4>#Pointer Address-Of(&) Operator</h4>
<p>Address-of(&) operator is used to get the memory address of a variable. Precede the operator(&) with the variable to return the address of the variable.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 20;      // variable declaration
	printf("address of x: %p\n", &x);
	int *y;    		// pointer declaration
	y = &x;			// address of x
	printf("address of y: %p\n", y);
	return 0;
}
</code>

<h4>#Pointer Referencing(*) Operator</h4>
<p>Operator(*) is used in two way. If we want to declare a pointer variable, then precede the asterisk(*) before the variable name and if we want to access the value of the pointer variable, then precede operator(*) before the pointer variable.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 20;      // variable declaration
	int *y;    		// pointer declaration
	y = &x;			// address of x
	printf("value of x: %d\n", x);
	printf("value of y: %d\n", *y);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="comma_operator">Comma Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br.