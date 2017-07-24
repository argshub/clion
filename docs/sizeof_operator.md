<h4>sizeof Operator</h4>
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

<a href="#" class="post pull-right btn btn-sm btn-info" id="sizeof_operator">sizeof Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>