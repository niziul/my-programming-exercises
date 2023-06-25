/*
	[ description of the second learning exercise ] :
		- Write a program that asks the user to enter two numbers.
		Store the first number in an array of characters and the second
		number in a variable of type integer. Show the result of the multiplication
		between the tow numbers. To convert the 'string' to number, look up how to use the
		function 'atoi'.

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - <>

			Enter the first number ( ex: 3 )
			- - - - - - - - - - - - - - - - - - -
			: 3

			-

			Enter the second number ( ex: 5 )
			- - - - - - - - - - - - - - - - - - -
			: 5

			- - - - - - - - - - - - - - - - - - -

			--] The multiplication between '3' and '5' equals '15'.

			- - - - - - - - - - - - - - - - - - -

			<> - - - - - - - - - - - - - - - - <>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::atoi;

int main()
{
	auto const nextline
		= '\n';

	char first_number[1];

	int second_number;

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;

	cout << "Enter the first number ( ex: 3 )" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> first_number;

	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;
	
	cout << "Enter the second number ( ex: 5 )" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> second_number;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "--] The multiplication between \'" << first_number << "\' and \'" << second_number << "\' equals \'" << (atoi(first_number) * second_number) << "\'." << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;
	
	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	system("pause");
}