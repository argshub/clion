#include <stdio.h>

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