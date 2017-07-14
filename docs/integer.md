<h4>#Integer</h4>
<p>Integer is to represent numeric values. In 16bit processor, an integer is of size 16bit and In 32bit processor
the size is 32bit. These 16bits or 32bits are processor word size. So the size of an integer vary from
processor and languages implementation.  We are unable to represent any range of numeric values. Logically 
processor are unable to represent any range of numeric value. It's just represent specific range value.  
Compiler provide the size of any data type, usually in byte.
</p><br>
<code>
	#include&lt;stdio.h&gt;
	int main(void) {
		int integerData; 
		printf("size of integer: %d", sizeof integerData); // size of integer
		return 0;
	}
</code>
<br>
<p style="color:red;">#Note:: In 32bit, we can represent 0...65635 range value. But in C, integer is signed by default. So we can 
represent -32767...32767 range values. Because C uses two complement number system. It will be discussed later.</h5></hr></hr>

<h4>#Integer Operation</h4>
<p>You can do any arithmetic operation by integer. Such as Addition, Multiplication, Division or any other numeric operation</p>

<code>
#include&lt;stdio.h&gt;
int main(void) {
	int data1 = 10, data2 = 20, data3;
	// addition operation
	data3 = data1 + data2;
	printf("after addition: %d\n", data3);
	
	// multiplication operation
	data3 = data1 * data2;
	printf("after multiplication: %d\n", data3);
	
	// division operation
	data3 = data2 / data1;
	printf("after division: %d\n", data3);
	
	// subtraction operation
	data3 = data2 - data1;
	printf("after subtraction: %d\n", data3);
	
	return 0;
}
</code></hr></hr>

<a href="#" class="post pull-right btn btn-sm btn-info" id="character">Character <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>