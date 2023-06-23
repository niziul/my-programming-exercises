/*
	[ description of the first learning exercise ] :
		- Set a password by means of a character array in your program. Ask
		the user to enter his password, if yes, show the message: "password correct",
		if not, show the message: "password incorrect". To compare 'strings', look up how
		to use the function 'strcmp'.

	[ output ] :
		```v1
			<> - - - - - - - - - - - - - - - - <>

			Enter your password
			- - - - - - - - - - - - - - - - - - -
			: computer_programming

			-

			--] 'password correct!'

			<> - - - - - - - - - - - - - - - - <>
		```

		```v2
			<> - - - - - - - - - - - - - - - - <>

			Enter your password
			- - - - - - - - - - - - - - - - - - -
			: computerProgramming

			-

			--] 'password incorrect!'

			<> - - - - - - - - - - - - - - - - <>
		```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::strcmp;

int main()
{
	auto const nextline
		= '\n';

	auto const correct_password
		= "computer_programming";

	char user_password[21];

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;
	
	cout << "Enter your password" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> user_password;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;
	
	if (strcmp(user_password, correct_password) == 0)
	{
		cout << "--] \'password correct!\'" << nextline;
	}
	else
	{
		cout << "--] \'password incorrect!\'" << nextline;
	}

	cout << nextline;

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	system("pause");
}