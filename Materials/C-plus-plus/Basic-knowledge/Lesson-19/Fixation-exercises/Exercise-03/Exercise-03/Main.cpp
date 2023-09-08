/*
	[ description of the third fixation exercise ] :
		- Write a program that uses nested loops to produce the following output:

		]
				$
			   $$$
			  $$$$$
			 $$$$$$$
			$$$$$$$$$
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

				$
			   $$$
			  $$$$$
			 $$$$$$$
			$$$$$$$$$

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int lines = 5;

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 0; i < lines; i++)
	{
		for (auto j = i; j < 4; j++)
		{
			cout << " ";
		}

		for (auto j = 0; j < i; j++)
		{
			cout << "$";
		}

		cout << "$";

		for (auto j = 0; j < i; j++)
		{
			cout << "$";
		}

		for (auto j = i; j < 4; j++)
		{
			cout << " ";
		}

		cout << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}