/*
	[ description of the second learning exercise ] :
		- Write a program that reads a real number and displays its integer part
		  and its fractional part.

	[ output ] :
		```
			<<>> -- -- -- -- - -- -- -- -- <<>>

			Enter a real number ( ex: 10.5 )
			> 10.5

			<<>> -- -- -- -- - -- -- -- -- <<>>

			-/ Interger part: '10'
			-/ Fractional part: '0.5'

			<<>> -- -- -- -- - -- -- -- -- <<>>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto nextline
		= "\n";

	auto user_input
		= (float)0;

	cout << "<<>> -- -- -- -- - -- -- -- -- <<>>" << nextline;

	cout << nextline;
	
	cout << "Enter a real number ( ex: 10.5 )" << nextline;
	cout << "> ";
	cin >> user_input;

	cout << nextline;

	cout << "<<>> -- -- -- -- - -- -- -- -- <<>>" << nextline;

	cout << nextline;

	auto integer_part
		= (int)user_input;

	cout << "-/ Interger part: \'" << integer_part << "\'" << nextline;

	auto fractional_part
		= -((int)user_input - user_input);

	cout
		.setf(std::iostream::adjustfield);

	cout << "-/ Fractional part: \'" << fractional_part << "\'" << nextline;

	cout
		.unsetf(std::iostream::adjustfield);

	cout << nextline;

	cout << "<<>> -- -- -- -- - -- -- -- -- <<>>" << nextline;
	
	cout << nextline;

	system("pause");
}