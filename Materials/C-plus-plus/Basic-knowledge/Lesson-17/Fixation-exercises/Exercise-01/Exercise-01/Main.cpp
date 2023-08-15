/*
	[ description of the first fixation exercise ] :
		- Write a program that uses nested loops to produce the pattern
		below:

		]
			*
			* *
			* * *
			* * * *
			* * * * *
			* * * *
			* * *
			* *
			*
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			*
			* *
			* * *
			* * * *
			* * * * *
			* * * *
			* * *
			* *
			*

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto rows
		= 5;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}
		cout << endl;
	}

	for (auto i = rows - 1; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}