/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			In what year was your house built?
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 1932

			-

			What is your address?
			- - - - - - - - - - - - - - - - - - - - - - - -
			: Passagem Jericó

			-

			--] Construction year: '1932'
			--] Address: 'Passagem Jericó'
			--] Done!

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto const nextline
		= '\n';

	auto year
		= 0;

	char address[80];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	cout << nextline;

	cout << "In what year was your house built?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> year;
	cin.get();

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;

	cout << "What is your address?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin
		.getline(address, 80);

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;

	cout << "--] Construction year: \'" << year << "\'" << nextline;
	cout << "--] Address: \'" << address << "\'" << nextline;
	cout << "--] Done!" << nextline;

	cout << nextline;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	system("pause");
}