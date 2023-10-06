/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter an integer value below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 54346234554324

			] Out of range, try again.

			: -4948973827374

			] Out of range, try again.

			: 99999

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] You have entered the following integer: '99999';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

bool is_int(double&);

int main()
{
	auto input
		= new double;

	auto value
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter an integer value below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *input;
	
	while (!is_int(*input))
	{
		cout << endl;

		cout << "] Out of range, try again." << endl;
		
		cout << endl;

		cout << ": ";
		cin >> *input;
	}

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	*value
		= (int)*input;

	cout << "] You have entered the following integer: \'" << *value << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;
	delete value;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}

bool is_int(double& value)
{
	if (value >= INT_MIN
		&&
		value <= INT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}
