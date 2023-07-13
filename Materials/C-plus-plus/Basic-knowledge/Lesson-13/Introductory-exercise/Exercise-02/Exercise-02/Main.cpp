/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter a char below
			- - - - - - - - - - - - - - - - - - - - - - - -
			: A

			-

			- - - - - - - - - - - - - - - - - - - - - - - -
			Code ASCII
			- - - - - - - - - - - - - - - - - - - - - - - -

			--] '65';

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

union char_int
{
	short a;
	char  b;
};

int main()
{
	auto value
		= char_int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "Enter a char below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> value.b;
	
	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Code ASCII" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "--] \'" << value.a << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}