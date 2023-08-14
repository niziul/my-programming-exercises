/*
	[ description of the first review exercise ] :
		- Write a for loop that displays the values '1, 2, 4, 8, 16, 32, 64' by incrementing
		a counter variable by a factor of '2' each cycle.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- '1';
			- '2';
			- '4';
			- '8';
			- '16';
			- '32';
			- '64';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 1; i <= 64; i *= 2)
	{
		cout << "- \'" << i << "\';" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}