<h4>#Variable Qualifiers</h4>

<p>Variable qualifiers tells the compiler that how a particular variable is going to be accessed or modified.</p>

<h4>#Constant Qualifier</h4>
<p>Constant aka const qualifier tells the compiler that it can be accessed anywhere in a program in it's lexical scope. But it's unable to modify the variable value anyhow in explicitly or implicitly. It has read-only property.</p>
<p style="color:red;">N.B.- When a const qualifier is used in a variable, it's better to initialize it with an initial value.</p>
<code>
#include&lt;stdio.h&gt;

const int totalUser = 100;  // must initialize a const-variable with an initial value

int main(void) {
	//totalUser = 20;  		// modifying the const-variable value will cause error
	int x;                  
	x = totalUser + 20;         // you can assign it's value to non-const variable
	printf("totalUser value: %d\n", totalUser);
	printf("x value: %d\n", x);
	return 0;
}
</code>
<h4>#Volatile Qualifier</h4>
<p>Volatile Qualifiers tells the compiler that the variable value may be changed in way not explicitly by the program. For Instance- pointer to a specific register.</p>
<code>
#include&lt;stdio.h&gt;

int x = 10;
volatile int *totalUser = (int *) &x;

int main(void) {               
	x = *totalUser + 20;
	printf("totalUser value: %d\n", *totalUser);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="storage_specifiers">Storage Specifiers <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>