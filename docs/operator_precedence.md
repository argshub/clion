<h4>#Operator Precedence</h4>
<p>In an expression, we can use multiple operators. We can usually imagine that, it's going to be evaluated from left to right. But in a programming language like C, each operator has a special order of evaluation. Think of an algebraic expression where multiplication/division is done before addition/subtraction. Because multiplication/division operator has precedence over addition/subtraction. C specifies a precedence table of order of operators operation.</p>

<code>
#include&lt;stdio.h&gt;

int main(void) {
	int x;
	x = 25 + 40 / 2 - 9 * 5; 
	
	printf("value of x: %d", x);
	return 0;
}
</code>

<h4>#Operators Table</h4>
<div class="table-responsive">          
  <table class="table">
    <thead>
      <tr>
        <th>Name of Group</th>
        <th>Operators<Left-to-right></th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>Grouping</td>
        <td>(), [], ->, .</td>
      </tr>
	  <tr>
        <td>Unary</td>
        <td>-, !, ~, ++, --, (type), *, &, sizeof</td>
      </tr>
	  <tr>
        <td>Arithemtic</td>
        <td>*, /, %, +(binary), -(binary)</td>
      </tr>
	  <tr>
        <td>Bitwise</td>
        <td><<, >></td>
      </tr>
	  <tr>
        <td>Relational</td>
        <td>< <=, >, >=, ==, !=</td>
      </tr>
	  <tr>
        <td>Bitwise</td>
        <td>&, ^, |</td>
      </tr>
	  <tr>
        <td>Logical</td>
        <td>&&, ||</td>
      </tr>
	  <tr>
        <td>Ternary</td>
        <td>?:</td>
      </tr>
	  <tr>
        <td>Compound Assignment</td>
        <td>*=, /=, +=, -=</td>
      </tr>
	  <tr>
        <td>Comma</td>
        <td>,</td>
      </tr>
    </tbody>
  </table>
</div>

</hr></hr>

<a href="#" class="post pull-right btn btn-sm btn-info" id="type_promotion">Type Promotion <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>