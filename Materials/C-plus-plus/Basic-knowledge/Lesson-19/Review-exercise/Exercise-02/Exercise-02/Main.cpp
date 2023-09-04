/*
	[ description of the second review exercise ] :
		- Write a program to read a '3x2' matrix, like the one shown in the example
		below, and store its transpose in a '2x3' matrix. Build a function to display
		the transposed matrix.


		] matrix '3x2':
			
			1 7
			3 5
			4 6

		]

		] transposed matrix '2x3':

			1 3 4
			7 5 6

		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the required numbers below to complete the matrix
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			row - '1';
					[ column - '1' ]: 1
					[ column - '2' ]: 7
			row - '2';
					[ column - '1' ]: 3
					[ column - '2' ]: 5
			row - '3';
					[ column - '1' ]: 4
					[ column - '2' ]: 6

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] row - '1';
					[ column - '1' ] ( '1' );
					[ column - '2' ] ( '3' );
					[ column - '3' ] ( '4' );

			] row - '2';
					[ column - '1' ] ( '7' );
					[ column - '2' ] ( '5' );
					[ column - '3' ] ( '6' );


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto matrix
		= new int*[3];

	auto transposed_matrix
		= new int*[2];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	for (auto i = 0; i < 3; ++i)
	{
		*(matrix + i)
			= new int[2];
	}

	cout << endl;

	cout << "Enter the required numbers below to complete the matrix" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < 3; ++i)
	{
		cout << "row - \'" << i + 1 << "\';" << endl;

		for (auto j = 0; j < 2; ++j)
		{
			cout << "\t[ column - \'" << j + 1 << "\' ]: ";

			cin >> *(*(matrix + i) + j);
		}
	}

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i = 0; i < 2; ++i)
	{
		*(transposed_matrix + i)
			= new int[3];
	}

	for (auto i = 0; i < 2; ++i)
	{
		for (auto j = 0; j < 3; ++j)
		{
			*(*(transposed_matrix + i) + j)
				= *(*(matrix + j) + i);
		}
	}

	for (auto i = 0; i < 2; ++i)
	{
		cout << "] row - \'" << i + 1 << "\';" << endl;

		for (auto j = 0; j < 3; ++j)
		{
			cout << "\t[ column - \'" << j + 1 << "\' ] ( \'" << *(*(transposed_matrix + i) + j) << "\' );" << endl;
		}

		cout << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	for (auto i = 0; i < 3; ++i)
	{
		delete[] *(matrix + i);
	}

	for (auto i = 0; i < 2; ++i)
	{
		delete[] *(transposed_matrix + i);
	}

	delete[] matrix;
	delete[] transposed_matrix;

	cin.get();
}