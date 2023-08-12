/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ]   value_a = '20: value_b   = '20';
			- - ] ++value_a = '21: value_b++ = '20';
			- - ]   value_a = '21: value_b   = '21';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto value_a
		= new int;

	auto value_b
		= new int;

	*value_a
		= 20;

	*value_b
		= 20;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ]   value_a = \'" << *value_a << ": value_b   = \'" << *value_b << "\';" << endl;
	cout << "- - ] ++value_a = \'" << ++(*value_a) << ": value_b++ = \'" << (*value_b)++ << "\';" << endl;
	cout << "- - ]   value_a = \'" << *value_a << ": value_b   = \'" << *value_b << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;
	delete value_b;

	system("pause");
}