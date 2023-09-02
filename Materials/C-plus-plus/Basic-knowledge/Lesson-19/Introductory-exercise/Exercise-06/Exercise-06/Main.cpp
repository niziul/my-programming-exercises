/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of rows and columns in the matrix below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ rows    ]: 2
			[ columns ]: 2

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			row - '1';
					[ column - '1' ]: 5
					[ column - '2' ]: 4

			row - '2';
					[ column - '1' ]: 6
					[ column - '2' ]: 5

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] row - '1';
					[ column - '1' ]: '5';
					[ column - '2' ]: '4';

			] row - '2';
					[ column - '1' ]: '6';
					[ column - '2' ]: '5';

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
	auto rows
		= new int;

	auto columns
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of rows and columns in the matrix below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[ rows    ]: ";
	cin >> *rows;
	cout << "[ columns ]: ";
	cin >> *columns;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	auto dynamic_multidimensional_array
		= new int*[*rows];

	for (auto i = 0; i < *rows; i++)
	{
		*(dynamic_multidimensional_array + i)
			= new int[*columns];
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < *rows; ++i)
	{
		cout << "row - \'" << i + 1 << "\';" << endl;

		for (auto j = 0; j < *columns; ++j)
		{
			cout << "\t[ column - \'" << j + 1 << "\' ]: ";

			cin >> *(*(dynamic_multidimensional_array + i) + j);
		}

		cout << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < *rows; ++i)
	{
		cout << "] row - \'" << i + 1 << "\';" << endl;

		for (auto j = 0; j < *columns; ++j)
		{
			cout << "\t[ column - \'" << j + 1 << "\' ]: \'" << *(*(dynamic_multidimensional_array + i) + j) << "\';" << endl;
		}

		cout << endl;
	}


	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	for (auto i = 0; i < *rows; ++i)
	{
		delete[] *(dynamic_multidimensional_array + i);
	}

	delete rows;
	delete columns;
	delete[] dynamic_multidimensional_array;

	cin.get();
}