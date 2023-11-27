/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter with a 'char' below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: a



			- - [ you chose the letter 'A';

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
	auto input
		= char{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter with a \'char\' below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> input;

	cout << endl;
	cout << endl;
	cout << endl;

	switch (input)
	{
		case 'a':
		case 'A':
			{
				cout << "- - [ you chose the letter \'A\';" << endl;
			}
			break;
		case 'b':
		case 'B':
			{
				cout << "- - [ you chose the letter \'B\';" << endl;
			}
			break;
		default:
			{
				cout << "- - ] invalid letter." << endl;
			}
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}