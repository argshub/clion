<h4>#Backslash Character Constant</h4>
<p>Backslash character constants are special characters those are used to special purpose in programming languages enclosed by single quotes. For instance- If you need some extra space in your note, you just type tab button to make some more space. But it's impossible to put it into the note, so the backslash character constant is used. These are computer control characters. But in C, these backslash character constants are called escape sequences.</p>

<h5>#New Line Character Constant</h5>
<p>When you need to break a line and you want to show it in a new line. Then a newline character constant is used.</p>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	printf("Eternal Passsion,\nEternal Pain.\nBy- Mathew Arnold.");
	return 0;
}
</code>

<h5>#Horizontal Tab</h5>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	printf("Eternal Passsion,\tEternal Pain.\tBy- Mathew Arnold.");
	return 0;
}
</code>
<h5>#Others</h5>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	char ch;
	ch = '\b'; 		// backspace, used to cursor to previous position
	ch = '\f';     //	form feed, used to cursor position to beginning
	ch = '\r';      // carriage return
	ch = '\"';     // double quotes
	ch = '\'';     // single quotes
	ch = '\0';      // null 
	ch = '\\';      // backslash
	ch = '\?';      // question mark
	ch = '\a';      // alert
	ch = '\144';    // octal constant
	ch = '\x64';  // hexadecimal constant
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="operators">Operators <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>