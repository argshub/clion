<h4>#sizeof Operator</h4>
<p>Compile time sizeof operator is used to check the size of a value or a data type.</p>
<p style="color:red;">N.B.- if we want to know the size of a built-in type, it must have to enclosed by parenthesis likely to be sizeof(char).</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	short int x;
	long int y;
	long double longDouble;
	
	printf("size of char: %d byte\n", sizeof(char));
	printf("size of short int: %d byte\n", sizeof x);
	printf("size of int: %d byte\n", sizeof(int));
	printf("size of long int: %d byte\n", sizeof y);
	printf("size of float: %d byte\n", sizeof(float));
	printf("size of long double: %d byte\n", sizeof longDouble);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="expressions">Expressions <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>