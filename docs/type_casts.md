<h4>#Type Casts</h4>

<p>If we assign a higher size value to a lower size variable, a automatic conversion occur. It's not a good way to assign one type value to another type variable. Because if you assign int(32 bit) value to a char(8 bit) variable, you are going to loose 24 bit of data. C support a way to cast the data by unary cast operator of base type like char, int, float.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	float x;
	int y = 5, z = 2;
	// two intger division returns a integer
	// so the floating point value is going to be lost
	x = (float) y / z;   			// cast to float to save the floating point value
	printf("value of x: %f", x);
	return 0;
}
</code>

<a href="#" class="post pull-right btn btn-sm btn-info" id="statements">Statements <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>