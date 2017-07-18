<h4>#Identifier Names</h4>
<p>Identifier is a way to identify something. To identify someone, we give him/herself a good name and we identify him/her through that name. So a good identifier is necessary. A identifier should have to unique in it's lexical scope. C provide some rules to declare a valid identifier, so the C compiler can identify them in a good manner. You can use any combination of letter, digit or underscore. But you can't precede underscore to a identifier name and it's also better to avoid preceding digit. Identifiers are case sensitive. So upper-case or lower-case letters of a particular alphabet set are different symbols. C identifier must have to be ASCCI character set string.</p>

<h4>#Variable Identifier</h4>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int memoryLocation;  		 // valid C identifier
	int memory_location_2345; 
	return 0;
}
</code>

<h4>#Function Identifier</h4>
<code>
#include&lt;stdio.h&gt;

int squareOf(int x) {
	return x * x;
}

int main(void) {
	printf("square of 10: %d\n", squareOf(10));
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="local_variables">Local Variables <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>