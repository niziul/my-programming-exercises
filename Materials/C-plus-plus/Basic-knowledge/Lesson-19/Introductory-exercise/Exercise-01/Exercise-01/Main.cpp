/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter some characters below ( enter '#' to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Computer Programming#
			ComputerProgramming#

			- - ] amount of characters read: '19';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto temp
		= new char{};

	auto count
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter some characters below ( enter '#' to exit )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	do
	{
		cin >> *temp;
		cout << *temp;

		++(*count);

	} while (*temp != '#');

	cout << endl;
	cout << endl;
	
	cout << "- - ] amount of characters read: \'" << --(*count) << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete count;

	system("pause");
}