/*
	[ description of the first review exercise ] :
		- Ask the user to enter a positive integer and then create a dynamic vector with
		that number of integers.

		]
			Enter the size of the array: 5

			Creating vector for 5 integers...
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the size of the array below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			- - ] Creating vector for '5' integers...

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto size
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the size of the array below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto vector
		= new int[size];

	cout << "- - ] Creating vector for \'" << size << "\' integers..." << endl;

	cout << endl;

	delete[] vector;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}