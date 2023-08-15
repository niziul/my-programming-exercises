/*
	[ description of the second fixation exercise ] :
		- Write a program that asks te user to enter the number of lines to display.
		The program should then display that number of lines using asterisks, with one
		asterisk on the first line, two on the second and so on.

		On each line, the asterisks must be preceded by the number of dots necessary
		to make all lines have the same number of characters. The total number of characters
		in each line must be equal to the number of lines.

		use nested loops in problem solving.

		]
			
			Enter the number of rows: 5

			. . . . *
			. . . * *
			. . * * *
			. * * * *
			* * * * *
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of rows below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			. . . . *
			. . . * *
			. . * * *
			. * * * *
			* * * * *

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto rows
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of rows below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *rows;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i = *rows; i >= 1; --i)
	{
		for (auto j = 2; j <= i; ++j)
		{
			cout << ". ";
		}

		for (auto j = 0; j <= *rows - i; ++j)
		{
			cout << "* ";
		}

		cout << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete rows;

	system("pause");
}