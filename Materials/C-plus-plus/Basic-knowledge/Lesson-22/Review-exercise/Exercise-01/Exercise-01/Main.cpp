/*
	[ description of the first review exercise ] :
		- Create a conditional expression to obtain the absolute value
		of a variable. That is, if the variable 'x' is positive, the value
		of the expression must be 'x', but if 'x' is negative, the value of
		the expression must be '-x', making the expression positive.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a positive or negative number below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: -25

			-

			- -] the absolute value of '-25' is 25';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto input
		= int{};

	auto absolute
		= int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "Enter a positive or negative number below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> input;

	cout << endl;
	cout << "-" << endl;
	cout << endl;
	
	absolute
		= (input < 0) ? -input : input;
	
	cout << "- -] the absolute value of \'" << input << "\' is " << absolute << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}