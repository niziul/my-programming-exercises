/*
	[ description of the first review exercise ] :
		- Suppose 'liters' is a variable of type double. Declare a pointer that
		points to 'liters' and use the pointer to show the value of liters.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] The value of the liter is 'US$3.4';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto liter_value
		= 3.4;

	auto liter_value_ptr
		= &liter_value;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] The value of the liter is \'US$" << *liter_value_ptr << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}