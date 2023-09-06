/*
	[ description of the second fixation exercise ] :
		- Write a program that uses a loop to calculate the result of the
		expression below for the data values in the table. To do this, store
		the table as a vector and process the vector with a loop.

		]
			{ 0, 1, 0, 0, 1, 0, 1, 1, 1, 1 }
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			] table: {
							0,
							1,
							0,
							0,
							1,
							0,
							1,
							1,
							1,
							1,  };

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] result: '6';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto const table
		= new int[10]
		{
			0,
			1,
			0,
			0,
			1,
			0,
			1,
			1,
			1,
			1
		};

	auto result
		= 0.0f;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "] table: { ";

	for (auto i = 0; i < 10; ++i)
	{
		cout << endl;

		cout << "\t \t";

		cout << *(table + i) << ", ";
	}

	cout << " };" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	for (auto i = 0; i < 10; ++i)
	{
		result
			+= *(table + i);
	}

	cout << "- - ] result: \'" << result << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] table;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}