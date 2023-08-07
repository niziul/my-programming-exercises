/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- '3';
			- '4';
			- '5';
			- '6';
			- '7';
			- '8';
			- '9';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void crescent(int*, int*);

int main()
{
	auto a
		= new int;

	auto b
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	crescent(&(*a = 3), &(*b = 9));

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete a;
	delete b;

	system("pause");
}

void crescent(int* a, int* b)
{
	for (auto i = *a; i <= *b; i++)
	{
		cout << "- \'" << i << "\';" << endl;
	}
}