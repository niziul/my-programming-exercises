/*
	[ description of the first learning exercise ] :
		- Define a 'bank account' struct, with the following fields: 'customer name' and 'balance'.
		In the main function, use the new 'bank account' type to create a variable and ask the user to
		enter the account data. The initial balance must be zero. Show the account once created and ask how
		much the user wants to deposit into the account, changing its balance.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Insert your name below to open an account
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: douglas

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Account Data
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] name   : 'douglas';

			--] balance: 'US$0';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Insert the amount you wish to deposit into your account
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5000

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Account Data
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] name   : 'douglas';

			--] balance: 'US$5000';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

struct bank_account
{
	char customer_name[40];
	float balance;
};

istream& operator>>(istream&, bank_account&);

ostream& operator<<(ostream&, bank_account&);

void deposit(float, bank_account&);

int main()
{
	auto amount_the_customer_wishes_to_deposit
		= 0.0f;

	auto user_bank_account
		= bank_account{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Insert your name below to open an account" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cin >> user_bank_account;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << user_bank_account;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "Insert the amount you wish to deposit into your account" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> amount_the_customer_wishes_to_deposit;

	deposit(amount_the_customer_wishes_to_deposit, user_bank_account);

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << user_bank_account;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

istream& operator>>(istream& t_istream, bank_account& t_bank_account)
{
	cout << ": ";

	cin >> t_bank_account.customer_name;
	
	return t_istream;
}

ostream& operator<<(ostream& t_ostream, bank_account& t_bank_account)
{
	t_ostream << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	t_ostream << "Account Data" << endl;
	
	t_ostream << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	t_ostream << endl;

	t_ostream << "--] name   : \'" << t_bank_account.customer_name << "\';" << endl;

	t_ostream << endl;

	t_ostream << "--] balance: \'US$" << t_bank_account.balance << "\';" << endl;

	return t_ostream;
}

void deposit(float amount, bank_account& c_bank_account)
{
	c_bank_account.balance += amount;
}
