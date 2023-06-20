/*
	[ description of the first fixation exercise ] :
		- Write a program that asks for and displays information as shown
		in the example below. The number of characters for the first and second
		name should be set in a constant.

		]
			First name?
			: João

			Second name?
			: Dias

			-

			Good morning, João Dias.

			Welcome JD!
		]

	[ output ] :
		```
			<0> - - - - - - - - - - - - - - - - <0>

			First name?
			- - - - - - - - - - - - - - - - - - - -
			: João

			-

			Second name?
			- - - - - - - - - - - - - - - - - - - -
			: Dias

			-

			--] Good morning, 'Joao Dias'.
			--] Welcome 'JD'.

			<0> - - - - - - - - - - - - - - - - <0>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto const nextline
		= '\n';

	auto const first_name_chars_max
		= 10;

	auto const second_name_chars_max
		= 10;

	char user_first_name[first_name_chars_max];

	char user_second_name[second_name_chars_max];


	cout << "<0> - - - - - - - - - - - - - - - - <0>" << nextline;

	cout << nextline;

	cout << "First name?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> user_first_name;

	cout << nextline;

	cout << "- " << nextline;

	cout << nextline;

	cout << "Second name?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> user_second_name;

	cout << nextline;

	cout << "- " << nextline;

	cout << nextline;

	cout << "--] Good morning, \'" << user_first_name << " " << user_second_name << "\'." << nextline;

	cout << "--] Welcome \'" << user_first_name[0] << user_second_name[0] << "\'." << nextline;

	cout << nextline;
	
	cout << "<0> - - - - - - - - - - - - - - - - <0>" << nextline;
	
	system("pause");
}