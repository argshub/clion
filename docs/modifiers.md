<h4>#Type Modifiers</h4>

<p>Type modifiers are to alter the default behaviour of data types. You are unable to apply any modifier to any data types. You can apply specific modifier to a specific data type.</p>

<h4>#Some of those modifiers in C</h4>
<h5>	#signed</h5>
<h5>	#unsigned</h5>
<h5>	#short</h5>
<h5>	#long</h5>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	// signed & unsigned is only applicable to int & char
	int x = -32769;             // int by default signed
	signed char ch = 'M';      // applying signed to character make no difference
								// there's no existance of negative mapping character
	printf("signed integer: %d & signed character %c\n", x, ch);
	
	unsigned int y = 65536;   // unsigned tells the compiler to avoid the HO bit sign flag  
	char  ch2 = 'M';			// character by default unsigned
	printf("unsigned integer: %d & unsigned character %c\n", y, ch2);
	
	// short only applicable to int
	short int z = 32767;      // short is 16bit 
	printf("short integer: %d\n", z);
	
	// long is applicable to int and double
	long int m = 2E7;
	long double n = 5.576745846;
	printf("long integer: %d & double %Lf\n", m, n);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="signed">Signed Modifier<span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>