<h4>#Dot Operator</h4>
<p>Dot operator is used to access the member of a composite variable. An aggregate or compound data type can hold multiple primitive data type under a common name. So to access the member of that aggregate type, dot(.) operator is used.</p>
<code>
#include&lt;stdio.h&gt;

struct user {          // structure aggregate data type
	int id;
	int accountNumber;
};

int main(void) {
	struct user newUser;
	
	newUser.id = 1234;
	newUser.accountNumber = 67891;
	
	printf("id number: %d\n", newUser.id);
	printf("account number: %d\n", newUser.accountNumber);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="arrow_operator">Arrow Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>