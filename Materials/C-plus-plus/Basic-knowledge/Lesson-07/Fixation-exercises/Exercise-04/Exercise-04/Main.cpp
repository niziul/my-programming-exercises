/*
	[ description of the fourth fixation exercise ] :
		- Write a program that uses the 'cout' statement along with the tab character to
		  produce the following output:

		  ]
			```
				plum =		 30 unit
				apple =		 20 unit
				watermelon = 50 unit
			```
		  ]

	[ output ] :
		```
			plum =       30 unit
			apple =      20 unit
			watermelon = 50 unit
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "plum =";
	for (int16_t i = 0; i < 7; i++)
	{
		cout << '\x20';
	}
	cout << "30 unit" << endl;

	cout << "apple =";
	for (int16_t i = 0; i < 6; i++)
	{
		cout << '\x20';
	}
	cout << "20 unit" << endl;

	cout << "watermelon =" << " 50 unit" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}