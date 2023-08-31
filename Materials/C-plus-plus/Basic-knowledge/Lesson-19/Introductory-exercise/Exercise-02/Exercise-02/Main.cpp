/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter some characters below ( enter '#' to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Computer Programming#
			Computer Programming

			- - ] amount of characters read: '20';

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

	cin
		.get(*temp);

	while (*temp != '#')
	{
		cout << *temp;

		++(*count);
		
		cin
			.get(*temp);
	}

	cout << endl;
	cout << endl;

	cout << "- - ] amount of characters read: \'" << *count << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete count;

	system("pause");
}