<h4>#Character Data Type</h4>

<p>There are distinct between different language character set. So different character set represent different character. For instance, ASCCI represent 128(8bit) different character thats are used in formal English Language like a...z with some control character like ?... and UNICODE represent 65536(16bit) character along with all ASCCI character and characters used various human society. C use ASCCI character set. So C character is 8bit in size. 
Usually character is numeric type. Each character is associated with a integer. A conversion occur during compiling processs.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	// to declare character type precede char with variable name
	char ch;
	// give a intial value
	ch = 'M';
	printf("character: %c\n", ch);
	
	ch = 65;
	printf("character: %c\n", ch);
	printf("size of char: %d byte", sizeof ch);
	return 0;
}
</code></hr></hr>
<a href="#" class="post pull-right btn btn-sm btn-info" id="real_number">Real Number <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>