/*
	[ outupt ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a number between ( 0 - 10 )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2
			: 3
			: 4
			: 7

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] Yeah, '7' is my favorite number!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto number
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a number between ( 0 - 10 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	do
	{
		cout << ": ";
		cin >> *number;
	} while (*number != 7);

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - ] Yeah, \'7\' is my favorite number!" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete number;

	system("pause");
}