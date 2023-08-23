/*
	[ description of the first review exercise ] :
		- What would the code below display if it were part of a valid program?

		]
			int j = 5;

			while (++j < 9)
				cout << j++ << endl;
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- 6
			- 8

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto j
		= new int
		{
			5
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while (++(*j) < 9)
	{
		cout << "- " << (*j)++ << "\n";
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete j;

	system("pause");
}