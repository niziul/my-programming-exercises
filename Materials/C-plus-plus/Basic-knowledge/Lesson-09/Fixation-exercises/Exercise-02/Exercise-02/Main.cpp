/*
	[ description of the second fixation exercise ] :
		- Write a program that reads a floating point number and displays it in standard
		  'cout' notation, in scientific notation, and in decimal notation ( with two places
		  after the comma ). Use 'cout << scientific' and 'cout << fixed' to change the
		  formats and 'cout.precision()' to set the number of decimal places.

	[ output ] :
		```
			<>-- --- ---- ----- - ----- ---- --- --<>

			Enter a floating point value
			> 258040.5

			<>-- --- ---- ----- - ----- ---- --- --<>

			< standard notation   >
			--] 258040

			< scientific notation >
			--] 2.580405e+05

			< decimal notation    >
			--] 258040.50

			<>-- --- ---- ----- - ----- ---- --- --<>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto nextline
		= '\n';

	auto user_input
		= (float)0;

	cout << "<>-- --- ---- ----- - ----- ---- --- --<>" << nextline;

	cout << nextline;

	cout << "Enter a floating point value" << nextline;
	cout << "> ";
	cin >> user_input;

	cout << nextline;

	cout << "<>-- --- ---- ----- - ----- ---- --- --<>" << nextline;

	cout << nextline;

	cout << "< standard notation   >" << nextline;
	cout << "--] " << user_input << nextline;

	cout << nextline;

	cout
		.setf(std::iostream::scientific);
	
	cout << "< scientific notation >" << nextline;
	cout << "--] " << user_input << nextline;
	
	cout
		.unsetf(std::iostream::scientific);
	
	cout << nextline;

	cout
		.setf(std::iostream::fixed);
	
	cout
		.precision(2);

	cout << "< decimal notation    >" << nextline;
	cout << "--] " << user_input << nextline;
	
	cout
		.unsetf(std::iostream::fixed);

	cout << nextline;
	
	cout << "<>-- --- ---- ----- - ----- ---- --- --<>" << nextline;
	
	cout << nextline;
	
	system("pause");
}