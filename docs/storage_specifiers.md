<h4>#Variable Storage Specifier</h4>

<p>Variable storage specifier tells the compiler how a particular value to be stored for further use.</p>

<h4>#extern Storage Specifier</h4>
<p>extern storage specifier tells the compiler the compiler that the variable is declared somewhere later in the program or in other file. The variable must have to be declared in a global scope.</p>
<h5>#In File Scope</h4>
<code>
#include&lt;stdio.h&gt;

int sumOfTwo() {
	extern int first, last;
	return first + last;
}

int main(void) {
	printf("sum of two: %d\n", sumOfTwo());
	return 0;
}

int first = 200, last = 300;
</code>
<h5>#Outer File Scope</h4>
<code>
#include&lt;stdio.h&gt;
#include "outer_extern_file.h"

int first = 200, last = 300;
int main(void) {
	printf("sum of two: %d\n", sumOfTwo());
	return 0;
}
</code>
<h4>#static Storage Specifier</h4>
<p>static storage specifier tells the compiler to make a global space for a particular variable. In global scope, a static variable retain its value throughout the file and In local scope, a static variable retains it's value between function call.</p>
<code>
#include&lt;stdio.h&gt;

int series();
int main() {
	for(int i = 0; i < 5; i++) printf("%d\t", series());
	printf("after one series: \n");
	for(int i = 0; i < 5; i++) printf("%d\t", series());
	return 0;
}

int series() {
	static int x = 0;
	x += 2;
	return x;
}
</code>

<h4>#register Storage Specifier</h4>
<p>register storage specifier tells the compiler to store the value to CPU register and not to the memory. Because all value stored in memory. register specifier provide faster operation to a speccfic task. It can be apply to only int, char and pointer type. It has a better use in loop variations like for and while.</p>
<p style="color: red;"> You are unable to declare register variable as much as your need. Compiler restrict the amount of register variable declaration and after reaching the limit, the register variable treated as normal variable.</p>
<code>
#include&lt;stdio.h&gt;

int main() {
	for(register int i = 0; i < 50; i++) printf("%d\t", i);
	return 0;
}
</code>

<h4>#auto Storage Specifier</h4>
<p>Every variable declaration is auto by default. So the use of auto is redundant.</p>
<a href="#" class="post pull-right btn btn-sm btn-info" id="constants">Constants/Literals <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>