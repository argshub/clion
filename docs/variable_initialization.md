<h4>#Variable Initialization</h4>

<p>Variable initialization is a process to give an initial value to a specific type of variable. The declaration and the value must be same type.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	// initialize integer with an initial value
	// you can use decimal constant to initialize integer variable
	int x = 100;
	printf("integer: %d\n", x);
	
   	// initialize character data type with specific character
	// character must be a element of ASCCI character set enclosed by single quotes
	char ch = 'M'; 
	printf("character: %c\n", ch);
	
	// multiple intialization in a single statement
	int m, n, o;
	m = n = o = 99;
	printf("%d\t, %d\t, %d", m, n, o);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="local_variables">Local Variables <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>