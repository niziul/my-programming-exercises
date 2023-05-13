/*
	[ description of the first learning exercise ] :
		- Write a program to read two integers 'x' and 'y', and display the quotient
		  and the remainder of the integer division between them.

	[ output ] :
		```
			<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>

			Enter the value of x ( ex: 11 )
			> 11

			Enter the value of y ( ex: 4  )
			> 4

			<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>

			-] The quotient of [ '11' / '4' ] is '2'

			-] The remainder of [ '11' % '4' ] is '3'

			<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto nextline
		= '\n';

	auto value_x
		= 0;

	auto value_y
		= 0;

	cout << "<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>" << nextline;

	cout << nextline;

	cout << "Enter the value of x ( ex: 11 )" << nextline;
	cout << "> ";
	cin >> value_x;

	cout << nextline;

	cout << "Enter the value of y ( ex: 4  )" << nextline;
	cout << "> ";
	cin >> value_y;

	cout << nextline;
	
	cout << "<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>" << nextline;

	cout << nextline;
	
	auto quotient
		= value_x / value_y;

	cout << "-] The quotient of [ \'" << value_x << "\' / \'" << value_y << "\' ] is \'" << quotient << "\'" << nextline;

	cout << nextline;
	
	auto remainder
		= value_x % value_y;
	
	cout << "-] The remainder of [ \'" << value_x << "\' % \'" << value_y << "\' ] is \'" << remainder << "\'" << nextline;

	cout << nextline;
	
	cout << "<~> ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ -- ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ <~>" << nextline;

	cout << nextline;
	
	system("pause");
}