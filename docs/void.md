<h4>#void Type</h4>
<p>void is a special type used to represent empty or none value return by a function. A function can return any other primitive value. Sometimes a function is used to do some opeartion but thats return no value. So respectively void is used in that case</p>
<code>
#include&lt;stdio.h&gt;

// this function return int value
int isLess(int a, int b) {
	return a > b ? 1 : 0;
}

// this is a utility  function to echo into the concole
void echo(char *ch) {
	printf("%s\n", ch);
}

int main(void) {
	int x = 10, y = 20;
	printf("%d\n", isLess(x, y)); // check whether x is greater than y
	echo("Hello World");
	return 0;
}
</code>
<h4>#NULL Type</h4>
<p>NULL is to identify whether a pointer have a reference or not. Pointer is a reference to another variable. It will be discussed later.</p>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 10; 				// variable declaration
	int *pointer1, *pointer2;  // pointer declaration by preceding asterisk(*) 
	pointer1 = &x; 				// pointer1 reference to the address of x
	printf("pointer1 value: %d\n", *pointer1);
	
	pointer2 = NULL;            // poniter2 has no referent
	if(pointer2 == NULL) printf("%s", "NULL Pointer");
	return 0;
}

<a href="#" class="post pull-right btn btn-sm btn-info" id="composite">Composite Data Types <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>