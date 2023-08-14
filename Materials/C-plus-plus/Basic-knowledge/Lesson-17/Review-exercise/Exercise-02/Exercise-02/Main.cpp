/*
	[ description of the second review exercise ] :
		- Use a for loop to display a string stored in a character array. Make
		a version that uses a comparison in the test of the loop and another version
		without using comparison.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Version - 1
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] 'nucoin';

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Version - 2
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] 'nucoin';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
	auto word
		= new char[10]
		{
			"nucoin\x00"
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Version - 1" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "- - ] \'";

	for (auto i = 0; i <= strlen(word); ++i)
	{
		cout << *(word + i);
	}

	cout << "\';" << endl;

	cout << endl;
	
	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Version - 2" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "- - ] \'";
	
	for (auto i = 0; *(word + i); ++i)
	{
		cout << *(word + i);
	}
	
	cout << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}