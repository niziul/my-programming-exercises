/*
	[ description of the first learning exercise ] :
		- Write a program that uses nested 'for' loops to calculate and display
		the sum of the columns of a '4x4' two-dimensional array, as shown in the
		example below. The matrix must be initialized when it is declared.

		]
			3 1 5 5
			1 5 5 6
			2 3 4 5
			4 9 1 8
		]

		The sum of the columns is: 10 18 15 24

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			matrix
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			{       3       1       2       4        }
			{       1       5       3       9        }
			{       5       5       4       1        }
			{       5       6       5       8        }

			-

			] The sum of the columns is: 10 18 15 24

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int rows = 4;
const int columns = 4;

int main()
{
	int matrix[rows][columns]
		=
		{
			{ 3, 1, 5, 5 },
			{ 1, 5, 5, 6 },
			{ 2, 3, 4, 5 },
			{ 4, 9, 1, 8 }
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "matrix" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i = 0; i < rows; i++)
	{
		cout << "{ \t";

		for (auto j = 0; j < columns; j++)
		{
			cout << *(*(matrix + j) + i) << "\t";
		}

		cout << " }";

		cout << endl;
	}

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "] The sum of the columns is: ";

	for (auto i = 0; i < rows; i++)
	{
		auto sum
			= 0;

		for (auto j = 0; j < columns; j++)
		{
			sum
				+= *(*(matrix + j) + i);
		}

		cout << sum << " ";
	}

	cout << endl;
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;


	cin.get();
}