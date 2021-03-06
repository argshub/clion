<h4>#Long Type Modifiers</h4>

<p>Long modifier can be apply to integer type. Long modifier provide longer range value.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x;
	long int y;
	printf("size of int: %d\n", sizeof x); // size of short modifier
	printf("size of short: %d\n", sizeof y); // size of short modifier
	return 0;
}
</code>
<h4>#Unsigned Long</h4>
<p> We can also apply unsigned to long modifier to avoid sign flag or negative values.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	long int x = 3147483647; //  provide error
	unsigned long int y = 3147483647;
	printf("signed long: %d\n", x);
	printf("unsigned long: %u\n", y);
	return 0;
}
</code>
<h4>#Long Double</h4>
<p> long modifier can also be apply to double type. It's provide longer range of precission.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	double x;
	long double y;
	printf("size of double: %d byte\n", sizeof x);
	printf("size of long double: %u byte\n", sizeof y);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="variables">Variables <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>