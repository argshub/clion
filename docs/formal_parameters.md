<h4>#Formal Parameters</h4>

<p>
	Formal parameters are just like local variables. A function can take one or more value as arguments. When a function is declared with a specific definition, it also specify the type of arguments it can take when the function is called. The declaration of type of arguments it can take is called formal parameters. When the function is called a local copy of those formal parameters is being created. So there's no need to declare local variable to take the function arguments value.
</p>

<code>
#include&lt;stdio.h&gt;

int square(int x); 	// function declaration with formal paramater x 
					// you can declare one or multiple formal paramaters

int main(void) { 
	printf("after square: %d\n", square(10));
	return 0;
}

int square(int x) {  		// function definition start
	return x * x;			// x is define a local scope inside the function
}  							// end of function definition
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="global_variables">Global Variables <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>