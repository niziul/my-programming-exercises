/*
	[ description of the first review exercise ] :
		- Write a for loop that displays the contents of a char array containing a 'string'.
		The loop should display each character individually until it reaches the null character ('\0').


		]
			'p' 'r' 'a' 'c' 't' 'i' 'c' 'e' '\32' 'a' '\32' 'l' 'o' 't' '!' '\0'
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] practice a lot!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;


int main()
{
	auto values
		= new char[16]
		{
			'p',
			'r',
			'a',
			'c',
			't',
			'i',
			'c',
			'e',
			'\x20',
			'a',
			'\x20',
			'l',
			'o',
			't',
			'!',
			'\x00'
		};
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] ";
	
	for (auto i = 0; i > -1; i++)
	{
		if (*(values + i) == '\x00')
		{
			break;
		}

		cout << *(values + i);
	}

	cout << endl;
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] values;

	system("pause");
}