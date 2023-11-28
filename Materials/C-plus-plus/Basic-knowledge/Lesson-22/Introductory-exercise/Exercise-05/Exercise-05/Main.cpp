/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the color code below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 1

			-

			- - ] your outfit was orange.


			Enter the color code below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			- - ] bye!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

enum
{
	red,
	orange,
	yellow,
	green
};

int prompt();

int main()
{
	auto color
		= int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	color
		= prompt();
	
	cout << endl;
	cout << "-" << endl;
	cout << endl;
	
	while (color >= red
		   &&
		   color <= green)
	{
		switch (color)
		{
			case red:
				{
					cout << "- - ] your lipstick was red." << endl;
				}
				break;
			case orange:
				{
					cout << "- - ] your outfit was orange." << endl;
				}
				break;
			case yellow:
				{
					cout << "- - ] your shoes were yellow." << endl;
				}
				break;
			case green:
				{
					cout << "- - ] your eyes were green." << endl;
				}
				break;
		}
		
		cout << endl;
		cout << endl;

		color
			= prompt();

		cout << endl;
		cout << "-" << endl;
		cout << endl;
	}

	cout << "- - ] bye!" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}

int prompt()
{
	auto input
		= int{};

	cout << "Enter the color code below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> input;

	return input;
}
