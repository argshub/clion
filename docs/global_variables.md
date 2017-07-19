<h4>#Global Variables</h4>
<p>Global variables defined a scope that exist throughout the program execution context. Global variables can be declared anywhere in a program except inside the function. But it's better to declare global variable on the top of the program.</p>

<code>
#include&lt;stdio.h&gt;

int x = 10;

void incrementIt() {
	x++;
}

void squareIt() {
	x *= x;
}

int main(void) { 
	printf("global value: %d\n", x);
	incrementIt();
	printf("after increment function call: %d\n", x);
	squareIt();
	printf("after square function call: %d\n", x);
	x = 0;
	printf("initial value: %d", x);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="variable_qualifiers">Variable Qualifiers <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>