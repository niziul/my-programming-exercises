/*
	[ description of the fourth fixation exercise ] :
		- Build a program that contains an initialized array as shown below.
		Use the functions 'strlen' and 'sizeof' to find out and display the number
		of elements and the size of the array.
		
		]
			char name[] = "C++ Primer Plus";	
		]

	[ output ] :
		```
			<;> - - - - - - - - - - - - - - - - <;>

			--] Number of elements: '15'.

			-

			--] Size of the array: '16'bytes.

			<;> - - - - - - - - - - - - - - - - <;>
		```
*/

#include <iostream>
#include <cstring>

using std::cout;
using std::strlen;

int main()
{
	auto const nextline
		= '\n';

	char name[]
		= "C++ Primer Plus";

	cout << "<;> - - - - - - - - - - - - - - - - <;>" << nextline;

	cout << nextline;

	cout << "--] Number of elements: \'" << strlen(name) << "\'." << nextline;

	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;

	cout << "--] Size of the array: \'" << sizeof(name) << "\'bytes." << nextline;

	cout << nextline;

	cout << "<;> - - - - - - - - - - - - - - - - <;>" << nextline;

	system("pause");
}