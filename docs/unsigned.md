<h4>#Unsigned Modifier</h4>

<p>Unsigned modifier tells the compiler is to ignore sign flag that is to be interpreted as negative nuumber. Because C Compiler use two complement's number system. So no negative numeric values can be refers through unsigned variable. It has a beneficiary issue that we can represent more range numeric value. In 32bit environment, we can represent 2^32 positive value to a unsigned integer variable. Because HO sign flag is ignored by Compiler.  </p>

<h4>#Unsigned Integer</h4>
<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x = 3147483649;   // it will cause error
	unsigned int y = 3147483649;
	printf("signed value: %i\n", x);
	printf("unsigned value: %u\n", y);
	return 0;
}
</code>

<h4>#Unsigned Character</h4>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	// character is unsigned by default so 
	//the use of unsigned makes no difference
	// signed or unsigned treated as same by the compiler
	unsigned char ch = 'M';
	printf("character: %c\n", ch);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="short">Short Modifier <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>