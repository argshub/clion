<h4>#Local Variables</h4>
<p>
Local variables are usually declared inside a function. Local variables define a lexical scope inside the function or inside a block. Local variables are exist when the function is called and destroyed when the function return. 
</p>

<code>
#include&lt;stdio.h&gt;

int divideByTen(int x) {
	// local variable of function divideByTen
	int tenValue = 10;   // tenValue exist only inside the function
	return x / tenValue;
}

int main(void) { 
	printf("after divsion: %d\n", divideByTen(200));
	// refering tenValue will cause error 
	// because it's being destroyed after the function call 
	//printf("%d", tenValue);
	return 0;
}
</code>

<h4>#Block Scope</h4>
<p>
Imagine you need use of a selection statement for specific purpose. If the certain condition meet, then a local variable is need. Otherwise the use of local variable is redundant. The declared variable inside the selection statement define a local scope that scope only exist inside the selection statement. Block scope is defined inside the opening curly braces and before the ending curly braces.
</p>
<code>
#include&lt;stdio.h&gt;

int divideByTen(int x) {
	//printf("%d", tenValue);  // refering tenValue willl cause error 
	if(x > 0) {
		int tenValue = 10;      // local variable of block scope
		return x / tenValue;	// tenValue exist only inside the block
	}
	return x;
}

int main(void) { 
	printf("after division: %d\n", divideByTen(200));
	return 0;
}
</code>

<h4>#Overiding Upper Scope</h4>
<p>
If a variable is declared within global scope and then another variable declared with the same name inside a function or block scope. Then the global scope override by the local scope. But the global is exist before the declaration.
</p>
<code>
#include&lt;stdio.h&gt;

int tenValue = 100;   // global scope

void doSomething() {
	printf("global scope: %d\n", tenValue);
	int tenValue = 200;    // function scope
	printf("function scope: %d\n", tenValue);
	if(tenValue >= 200) {
		int tenValue = 300;      // local block scope
		printf("local scope: %d\n", tenValue);
	}
}

int main(void) { 
	doSomething();
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="formal_parameters">Formal Parameters <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>