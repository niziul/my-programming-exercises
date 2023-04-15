/*
	[ output ] :
		```
			--------------- -------- ---- -- -
			Enter the first number ( ex: 50.25 )
			> 50.25

			--------------- -------- ---- -- -
			Enter the second number ( ex: 11.17 )
			> 11.17


			--------------- -------- ---- -- -
			-] 'first number' = 50.25
			-] 'second number' = 11.17

			'first number' + 'second number' = 61.42
			'first number' - 'second number' = 39.08
			'first number' * 'second number' = 561.292
			'first number' / 'second number' = 4.49866

			--------------- -------- ---- -- -
		```
*/

#define nextline '\n'

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto first_number
		 = 0.0f;

	auto second_number
		 = 0.0f;

	cout << "--------------- -------- ---- -- - " << nextline;

	cout << "Enter the first number ( ex: 50.25 )" << nextline;
	cout << "> ";
	cin >> first_number;

	cout << nextline;
	cout << nextline;

	cout << "--------------- -------- ---- -- - " << nextline;

	cout << "Enter the second number ( ex: 11.17 )" << nextline;
	cout << "> ";
	cin >> second_number;

	cout << nextline;
	cout << nextline;

	cout << "--------------- -------- ---- -- - " << nextline;
	
	cout << "-] \'first number\' = " << first_number << nextline;
	cout << "-] \'second number\' = " << second_number << nextline;

	cout << nextline;

	cout << "\'first number\' + \'second number\' = " << first_number + second_number << nextline;
	cout << "\'first number\' - \'second number\' = " << first_number - second_number << nextline;
	cout << "\'first number\' * \'second number\' = " << first_number * second_number << nextline;
	cout << "\'first number\' / \'second number\' = " << first_number / second_number << nextline;

	cout << nextline;

	cout << "--------------- -------- ---- -- - " << nextline;

	cout << nextline;

	system("pause");
}