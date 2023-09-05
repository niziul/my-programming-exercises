/*
	[ description of the first fixation exercise ] :
		- Write a program that finds the average of the elements of a matrix (two-dimensional
		array) with '5' rows and '5' columns. The matrix must be initialized in the program to
		the '25' integer values given below.

		]
			38 51 50 56 98
			17 65 25 62 54
			23 23 64 45 92
			41 39 19 68 87
			65 10 12 22 13
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			] Average of the matrix elements
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			{ '38'  '51'  '50'  '56'  '98' }
			{ '17'  '65'  '25'  '62'  '54' }
			{ '23'  '23'  '64'  '45'  '92' }
			{ '41'  '39'  '19'  '68'  '87' }
			{ '65'  '10'  '12'  '22'  '13' }


			-


			- - - ] average:         '45.56';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int rows = 5;
const int columns = 5;

int main()
{
	int matrix[rows][columns]
		=
		{
			{ 38, 51, 50, 56, 98 },
			{ 17, 65, 25, 62, 54 },
			{ 23, 23, 64, 45, 92 },
			{ 41, 39, 19, 68, 87 },
			{ 65, 10, 12, 22, 13 }
		};

	auto sum
		= 0.0f;

	auto average
		= 0.0f;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "] Average of the matrix elements" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < rows; ++i)
	{
		cout << "{";

		for (auto j = 0; j < columns; ++j)
		{
			cout << " \'" << *(*(matrix + i) + j) << "\' ";
		}

		cout << "}";

		cout << endl;
	}

	cout << endl;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << endl;

	for (auto i = 0; i < rows; ++i)
	{
		for (auto j = 0; j < columns; ++j)
		{
			sum
				+= *(*(matrix + i) + j);
		}
	}

	average
		= sum / (rows * columns);

	cout << "- - - ] average: \t \'" << average << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}