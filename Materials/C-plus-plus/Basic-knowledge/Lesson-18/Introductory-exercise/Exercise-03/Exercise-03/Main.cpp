/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter numbers to sum ( '0' to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			: 5
			: 5
			: 5
			: 5
			: 0

			- - ] The sum is '20';

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

	auto sum
		= new int
		{
			0
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter numbers to sum ( \'0\' to exit )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << ": ";
	cin >> *number;

	while (*number != 0)
	{
		*sum
			+= *number;

		cout << ": ";
		cin >> *number;
	}

	cout << endl;

	cout << "- - ] The sum is \'" << *sum << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete number;
	delete sum;

	system("pause");
}