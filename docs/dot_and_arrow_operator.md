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
<h4>#Dot Operator</h4>
<p>Arrow operator is used access the member of a composite pointer variable.</p>
<code>
#include&lt;stdio.h&gt;

struct user {          // structure aggregate data type
	int id;
	int accountNumber;
} newUser;

int main(void) {
	struct user *user2;
	user2 = &newUser;
	
	user2->id = 1234;
	user2->accountNumber = 67891;
	
	printf("id number: %d\n", user2->id);
	printf("account number: %d\n", user2->accountNumber);
	return 0;
}
</code>
<a href="#" class="post pull-right btn btn-sm btn-info" id="parenthesis_operators">Parenthesis [] & () Operator <span class="glyphicon glyphicon-forward"></span></a><br><br><br><br><br>