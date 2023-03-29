/*
	[ description of the second fixation exercise ] :
		- Write a program that reads a floating point number and displays it in standard
		  notation, in scientific notation, and in decimal (fixed) notation.

	[ output ] :
		```
			I--------------------------------------------------I
			 ---[ Enter a floating point ( ex: 258040.50 ) ]---
			I--------------------------------------------------I
			: 258040.50


			--] Default notation: 258040


			--] Decimal notation: 258040.500000


			--] Scientific notation: 2.580405e+05


			I--------------------------------------------------I
			I--------------------------------------------------I
		```
*/

#define next_line '\n'

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto user_value = 0.0f;

	cout << "I--------------------------------------------------I" << next_line;
	cout << " ---[ Enter a floating point ( ex: 258040.50 ) ]---" << next_line;
	cout << "I--------------------------------------------------I" << next_line;
	cout << ": ";
	cin >> user_value;
	
	cout << next_line;
	cout << next_line;

	cout << "--] Default notation: " << user_value << next_line;

	cout << next_line;
	cout << next_line;

	cout
		.setf(std::iostream::fixed);

	cout << "--] Decimal notation: " << user_value << next_line;

	cout
		.unsetf(std::iostream::fixed);
	
	cout << next_line;
	cout << next_line;

	cout
		.setf(std::iostream::scientific);

	cout << "--] Scientific notation: " << user_value << next_line;

	cout << next_line;
	cout << next_line;

	cout
		.unsetf(std::iostream::scientific);

	cout << "I--------------------------------------------------I" << next_line;
	cout << "I--------------------------------------------------I" << next_line;

	system("pause");
}