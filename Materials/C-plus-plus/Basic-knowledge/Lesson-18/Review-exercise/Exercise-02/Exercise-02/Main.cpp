/*
	[ description of the second review exercise ] :
		- What would the code below display if it were part of a valid program?

		]
			int k = 4;

			do
				cout << " k = " << k << endl;
			while (k++ < 5);
		]
	
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- k = 4
			- k = 5

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto k
		= new int
		{
			4
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;
	
	do
	{
		cout << "- k = " << *k << "\n";
	} while ((*k)++ < 5);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete k;

	system("pause");
}