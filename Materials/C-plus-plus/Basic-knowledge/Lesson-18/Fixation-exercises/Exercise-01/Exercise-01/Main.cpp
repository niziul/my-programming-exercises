/*
	[ description of the first fixation exercise ] :
		- Write a program that asks the user to enter numbers. After
		each entry, the program should display the cumulative value of
		the sum of the numbers at that time. The program should terminate
		when the number zero is entered.

		]
			Enter integers ( 0 = to end ):
			10

			Partial sum: 10
			5

			Partial sum: 15
			3

			Partial sum: 18
			0
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a number below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 10

			- - ] Partial sum: '10';

			: 5

			- - ] Partial sum: '15';

			: 3

			- - ] Partial sum: '18';

			: 0

			- - ] Partial sum: '18';


			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto sum
		= new int
		{
			0
		};

	auto number
		= new int
		{
			0
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a number below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	do
	{
		cout << ": ";
		cin >> *number;

		*sum
			+= *number;

		cout << endl;
		cout << "- - ] Partial sum: \'" << *sum << "\';" << endl;
		cout << endl;
	} while (*number != 0);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete sum;
	delete number;

	system("pause");
}