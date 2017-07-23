<h4>#Ternary Operator</h4>

<p>Ternary operator is the alternative to if or else statement. It's the shorthand of if-else statement. The structure of the ternary operator- expression(true) ? expression1 :(otherwise) expression2. If expression is true then it returns the value of expression1 otherwise it returns the value of expression2.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 20, y;
	// if-else selection statement
	if(x > 9) y = 100;
	else y = 200;
	printf("value of y: %d\n", y);
	// ternary operator
	y = x > 9 ? 100 : 200;
	printf("value of y: %d\n", y);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="pointer_operators">Pointer Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>