<h4>#Variables</h4>
<p>Once a programmer know the use of variable, then he know the esscence of programming - A fellow programmer. So Variables, the most one building block of program. Variable is to reference a value. When a variable is declared, the variable occupy the subsequent memory need to that specific type. So we can give a initial value to that variable for further reference. We can update or modify the value through the reference variable.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	// integer reference
	int x;          // preceding int type with a name
	x = 1000;		// give a initial integer value
	printf("integer value: %d\n", x);
	
	// character reference 
	char ch;         // preceding char with a name
	ch = 'M';        // give a initial character value
	printf("character value: %c\n", ch);
	
	// real number reference
	float m;        // preceding float with a name
	double n;
	m = 10.20;
	n = 10.20;
	printf("float: %f and double: %.10f\n", m, n);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="identifiers">Identifier Names <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>