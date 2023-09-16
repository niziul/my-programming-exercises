/*
	[ description of the first review exercise ] :
		- Consider the following the code fragments for counting spaces and new
		lines. What advantage does the second from have over the first?

		]v1
			while (ch != '.')
			{
				if (ch == ' ')
					space++;
				if (ch == '\n')
					newline++;
			}
		]

		]v2
			while (ch != '.')
			{
				if (ch == ' ')
					space++;
				else if (ch == '\n')
					newline++;
			}
		]

		R: avoids double-counting. ensures that only one condition is checked and
		executed within a single iteration of the loop.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Know the name
			LeRoyce.

			-

			] spaces   :    '2';
			] newlines :    '1';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto temp
		= new char;

	auto spaces
		= new int{};

	auto newlines
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while ((*temp = cin.get()) != '.')
	{
		if (*temp == ' ')
		{
			(*spaces)++;
		}
		if (*temp == '\n')
		{
			(*newlines)++;
		}
	}

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "] spaces   : \t\'" << *spaces << "\';" << endl;

	cout << "] newlines : \t\'" << *newlines << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete spaces;
	delete newlines;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}