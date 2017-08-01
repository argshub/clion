<h4>#Type Promotions</h4>
<p>If we use different types of value in an expression then the  expression promoted to the highest size of value and it's called type promotion. Think of an expression where you mixed up char(8 bit) and int(32 bit) with double(64 bit) value and the expression goes to return double value. </p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	char ch = 'A';
	int x = 300;
	double y = 2.2;
	y = ch + x + y;
	printf("value of y: %f", y);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="type_casts">Type Casts <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>