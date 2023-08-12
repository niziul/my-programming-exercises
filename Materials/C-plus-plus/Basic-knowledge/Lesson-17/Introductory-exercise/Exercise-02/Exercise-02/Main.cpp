/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a word below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: animal

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] 'lamina';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto word
		= new char[20];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "Enter a word below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> word;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "- - ] \'";

	for (auto i = strlen(word); i > 0; i--)
	{
		cout << *(word + (i - 1));
	}

	cout << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] word;

	system("pause");
}