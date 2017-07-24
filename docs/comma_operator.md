<h4>#Comma Operator</h4>
<p>Comma operator is used to separate multiple expression in a single expression by separating each expression by comma(,) operator.</p>
<p style="color:red;">N.B. - Every expressions except the rightmost expression evaluated as void. So the rightmost expression return as expresssion value.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {               
	int x, y, z;   					// multiple variable declaration separated by comma
	x = 30, y = 20, z = 10;  		// multiple assignment separated by comma
	x = (x /= y, x += 10, x *= 2);  // multiple expression  separated by comma
	printf("value of x: %d", x);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="dot_operator">Dot Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>