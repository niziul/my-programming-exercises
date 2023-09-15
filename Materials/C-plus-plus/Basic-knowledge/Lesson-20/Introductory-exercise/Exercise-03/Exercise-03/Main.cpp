/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a number between 0 and 100 below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			: 23
			] Too low, try again!

			: 12
			] Too low, try again!

			: 27
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] '27' is my favorite.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int favorite = 27;

int main()
{
	auto input
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a number between 0 and 100 below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	do
	{
		cout << endl;
		cout << ": ";
		cin >> *input;

		if (*input < favorite)
		{
			cout << "] Too low, try again!" << endl;
		}
		else if (*input > favorite)
		{
			cout << "] Too high, try again!" << endl;
		}
		else
		{
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

			cout << endl;

			cout << "] \'" << favorite << "\' is my favorite." << endl;
			
			cout << endl;
			
			cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		}

	} while (*input != favorite);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}