<h4>#Short Type Modifiers</h4>

<p>Short modifier can be apply only to only integer type. Short modifier tells the compiler to load the data to a 16bit register. In 32bit environment, there are 8 32bit regsiter ovelays with 16bit and 8bit register. So occupy the 32bit register need some cost. In that case, short modifier plays a important role.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x;
	short int y;
	printf("size of int: %d\n", sizeof x); // size of short modifier
	printf("size of short: %d\n", sizeof y); // size of short modifier
	return 0;
}
</code>
<h4>#Unsigned Short</h4>
<p> We can also apply unsigned to short modifier to avoid sign flag or negative values.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	short int x = 65535; //  provide error
	unsigned short int y = 65535;
	printf("signed short: %d\n", x);
	printf("unsigned short: %u\n", y);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="long">Long Modifier <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>