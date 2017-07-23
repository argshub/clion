<h4>#Realtional Operators</h4>
<p>Relational operators are used to see relationship between two or more values. For instance- if you want to compare two values whether they are equal or not, a relational operator is need to compare that two values. In C, there are rich built in relational operators.</p>
<p style="color:red;">N.B.- To make comparison between two values, a relational operator is placed between two values. Each comaparison returns a proposition that is either true or false. In C, 0 is false and any other values is true(usually 1 treated as true).  To make comparison between two values, it's better the two values are the same type. Comparison between different values have some side effects.</p> 

<h4>#Equal Operator</h4>
<p>Equal operator is used to check the whether the left operand is greater or not to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 10;
	if(y == x) printf("y: %d is equal to x: %d", y, x);
	else printf("comparison is false");
	return 0;
}
</code>

<h4>#Not Equal Operator</h4>
<p>Equal operator is used to check the whether the left operand is greater or not to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20;
	if(y != x) printf("y: %d is not equal to x: %d", y, x);
	else printf("comparison is false");
	return 0;
}
</code>

<h4>#Greater Than Operator</h4>
<p>Greater than operator is used to check the whether the left operand is greater or not to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20;
	if(y > x) printf("y: %d is greater than x: %d", y, x);
	else printf("comparison is false");
	return 0;
}
</code>

<h4>#Greater Than or Equal Operator</h4>
<p>Greater than or Equal to operator is used to check the whether the left operand is greater or equal to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 10;
	if(y > x) printf("y: %d is greater than x: %d", y, x);
	else if(y >= x) printf("y: %d is equal x: %d", y, x);
	else printf("comparison is false");
	return 0;
}
</code>

<h4>#Less Than Operator</h4>
<p>Less than operator is used to check the whether the left operand is lesser or not to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 20;
	if(x < y) printf("x: %d is less than y: %d", x, y);
	else printf("comparison is false");
	return 0;
}
</code>
<h4>#Less Than or Equal Operator</h4>
<p>Less than or Equal to operator is used to check the whether the left operand is lesser or equal to the right operand.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10, y = 10;
	if(y < x) printf("y: %d is greater than x: %d", y, x);
	else if(y <= x) printf("y: %d is equal x: %d", y, x);
	else printf("comparison is false");
	return 0;
}
</code>


<a href="#" class="post pull-right btn btn-sm btn-info" id="logical_operators">Logical Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>