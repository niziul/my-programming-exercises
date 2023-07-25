/*
	[ description of the fourth review exercise ] :
		- Find out what happens when we try to access a pointer that contains an invalid
		address. To do this, try to display the content pointed to by a pointer:

		]
			int * ptr = (int*)0x01;
		]

	[ output ] :
		```
			exit code -1073741819: terminated due to an access violation.
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto ptr
		= (int*) 0x10;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] \'" << *ptr << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}