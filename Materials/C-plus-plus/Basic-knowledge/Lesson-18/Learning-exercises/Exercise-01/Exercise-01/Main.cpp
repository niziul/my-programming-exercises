/*
	[ description of the first learning exercise ] :
		- What would the code below display if it were part of a valid program?

		]
			int i = 0;

			while (++i < 4)
				cout << "Hi! ";
			do
				cout << "Bye! ";
			while (i++ <= 8);
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			HI! HI! HI! BYE! BYE! BYE! BYE! BYE! BYE!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto i
		= new int
		{
			0
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while (++(*i) < 4)
	{
		cout << "HI! ";
	}

	do
	{
		cout << "BYE! ";
	} while ((*i)++ <= 8);

	cout << endl;
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete i;

	system("pause");
}