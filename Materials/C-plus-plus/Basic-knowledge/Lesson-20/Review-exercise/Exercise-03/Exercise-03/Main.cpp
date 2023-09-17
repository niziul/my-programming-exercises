/*
	[ description of the third review exercise ] :
		- What is the result of the code snippet below if 'x' and 'v' are initialized
		with zero? Is it possible to use the debugger with the code written on one line?
		Do the test and then break the program into several lines to make the code easier
		to read. Apply the correct indentation to each line.

		]
			if (x < 0) v = 1; if (x < 5) v = 2; else if (x < 10) v = 3;
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			] value_a:      '10';
			] value_b:      '3';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int START
	= 0;

const int MIDDLE
	= 5;

const int END
	= 10;

int main()
{
	auto value_a
		= new int;

	auto value_b
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (*value_a = 0; *value_a < END; (*value_a)++)
	{
		if (*value_a < START)
		{
			*value_b = 1;
		}
		if (*value_a < MIDDLE)
		{
			*value_b = 2;
		}
		else if (*value_a < END)
		{
			*value_b = 3;
		}
	}

	cout << "] value_a: \t\'" << *value_a << "\';" << endl;
	cout << "] value_b: \t\'" << *value_b << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;
	delete value_b;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}