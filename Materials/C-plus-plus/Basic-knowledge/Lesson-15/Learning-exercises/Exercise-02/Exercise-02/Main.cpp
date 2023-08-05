/*
	[ description of the second learning exercise ] :
		- Start the program by asking the user how many integers they want
		to store in a vector. Use the information entered to create a dynamic
		array with the space needed to store the desired number of integers. After
		that, let the user fill the array himself, using the size of the array as stop
		condition of a for loop. Show the vector that was filled through another loop and
		release the dynamically allocated space at the end of the program.

		]
			How many values do you want to keep? 5

			What are the values? 34 25 18 60 41

			The values 34, 25, 18, 60 and 41 were stored.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter below how many numbers you want to save
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			Enter the numbers below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			number[0] : 34
			number[1] : 25
			number[2] : 18
			number[3] : 60
			number[4] : 41

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			All the numbers entered and the address that were saved
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ 0000020AD128DCB0 ] : '34';
			[ 0000020AD128DCB4 ] : '25';
			[ 0000020AD128DCB8 ] : '18';
			[ 0000020AD128DCBC ] : '60';
			[ 0000020AD128DCC0 ] : '41';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto vector_size
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter below how many numbers you want to save" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> vector_size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto all_stored_number
		= new int[vector_size];

	cout << "Enter the numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	for (auto i = 0; i < vector_size; i++)
	{
		cout << "number[" << i << "] : ";
		cin >> *(all_stored_number + i);
	}

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "All the numbers entered and the address that were saved" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < vector_size; i++)
	{
		cout << "[ " << (all_stored_number + i) << " ] : \'" << *(all_stored_number + i) << "\';" << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	delete[] all_stored_number;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}