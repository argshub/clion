<h4>#Logical Operators</h4>
<p>Logical operators are likely to  be the relational operators which is used to make proposition. By logical operator, we can combine two or more relational statements.</p>
<h4>#Logical AND</h4>
<p>Logical AND is used to check whether two or more statements is true. If one of the statement return false then entire expression return false. For instance - 1 & 1 equal 1 and 1 & 0 equal 0.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 30, y = 20, z = 10;
	if(x > y && y > z) printf("x: %d is greater than y: %d and y: %d is greater than z: %d", x, y, y, z);
	else printf("expression return false");
	return 0;
}

</code>

<h4>#Logical OR</h4>
<p>Logical OR is used to check whether one of the statement is true. If one of the statement return true then entire expression return true. For instance - 1 | 1 equal 1 and 1 | 0 equal 1 and 0 | 0 equal 0.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 30, y = 20, z = 10;
	if(y > x || y > z) printf("y: %d is greater than x: %d or y: %d is greater than z: %d", y, x, y, z);
	else printf("expression return false");
	return 0;
}
</code>
<h4>#Logical NOT</h4>
<p>Logical OR is used to check a statement is not true. If the statement is false then the expression return true otherwise false.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 30, y = 20, z = 10;
	if(!(y > x)) printf("y: %d is not greater than x: %d", y, x);
	else printf("expression return false");
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="bitwise_operators">Bitwise Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>