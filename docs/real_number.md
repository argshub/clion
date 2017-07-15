<h4>#Real Number Representation</h4>

<p> To represent real number(rational), there are two data type exist in C. They are float and double. These data types are language or implementation defined subset of real(rational number). These are the approximation of real number. Because to determine the range of floating point or precission may goes to inifinity. Machine unable to represent such longer precission. In these case, bit string divided into two part, one for range and one for precission. So the range and precission depend on machine or lanaguage floating-point arithmetic.  There are little distinct between these two types and the range and precission make it so</p>
<br>

<p>#N.B. : int, float, double are three different types of data. So its better to do arithmetic operation between two same type. It makes the program more portable. For instance- if you do multiplication operation betweeen integer and float. There's a possible to loose the floating point or precission.</p>
 <br><h4>#float</h4>
 <p>The size of float is about host machine word size. It's support 6 digit of precission.</p><br>
 <code>
#include&lt;stdio.h&gt;

int main(void) {
	float ft;  // float declaration
	printf("size of float: %d\n", sizeof ft);
	ft = 22.0 / 7.0;
	printf("%f", ft);
	return 0;
}
 </code>
 
 <h4>#double</h4>
 <p>The size of double is 64bit. It's support 10 digit of precission.</p><br>
 #include&lt;stdio.h&gt;
 
 int main(void) {
	double dbl;  // double declaration
	printf("size of double: %d\n", sizeof ft);
	dbl = 22.0 / 7.0;
	printf("%f", dbl);
	return 0;
}

<a href="#" class="post pull-right btn btn-sm btn-info" id="void">void & NULL <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>