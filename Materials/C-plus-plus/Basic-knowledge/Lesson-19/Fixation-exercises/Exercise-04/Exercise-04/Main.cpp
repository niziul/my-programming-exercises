/*
	[ description of the fourth fixation exercise ] :
		- Write a program that asks the user to enter a character. The program
		should use a function whose sole purpose is to display the character received
		as an argument 20 times on the screen, forming a line. Create the main program
		and the function in such a way as to obtain the following result:

		]
			Enter a character: -

			--------------------

			programming in c++

			--------------------
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a character below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: -

			--------------------

			] programming in c++;

			--------------------

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void function(char);

int main()
{
	auto input
		= new char;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a character below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *input;

	cout << endl;

	function(*input);

	cout << endl;
	cout << "] programming in c++;" << endl;
	cout << endl;

	function(*input);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}

void function(char character)
{
	for (auto i = 0; i < 20; ++i)
	{
		cout << character;
	}

	cout << endl;
}
