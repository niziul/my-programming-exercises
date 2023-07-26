/*
	[ description of the third fixation exercise ] :
		- Create two functions that increment a number by one. The function 'More' must
		receive an integer via a pointer. The 'increment' function should receive an integer
		value, without using pointers, and return the incremented value in one unit. Use both
		functions as in the example below:

		]
			Enter a value: 7

			Result after More: 8
			Result after Incrementa: 9
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a value below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 7

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] Result after increment_via_pointer: '8';
			- - ] Result after increment_via_variable: '9';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int increment_via_variable(int);
void increment_via_pointer(int*);

int main()
{
	auto value
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a value below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> value;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	increment_via_pointer(&value);

	cout << "- - ] Result after increment_via_pointer: \'" << value << "\';" << endl;

	value
		= increment_via_variable(value);
	
	cout << "- - ] Result after increment_via_variable: \'" << value << "\';" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

int increment_via_variable(int value)
{
	return ++value;
}

void increment_via_pointer(int* value_ptr)
{
	*value_ptr
		= *value_ptr + 1;
}
