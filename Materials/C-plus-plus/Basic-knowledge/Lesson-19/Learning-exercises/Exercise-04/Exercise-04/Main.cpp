/*
	[ description of the fourth learning exercise ] :
		- Build a function to display a vector of integers of any size. Pass
		'matrix[0]' form the previous question to this function. If our theory
		that a matrix is a array of arrays is correct, the function should make
		no difference between 'matrix[0]' and a normal array.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			] array - '00000211FD8A52D0':
			{
					 '1',
					 '2',
					 '3',
			}

			] array - '00000211FD8A52DC':
			{
					 '4',
					 '5',
					 '6',
			}

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int const rows = 2;
int const columns = 3;

void function(int*, int);

int main()
{
	int matrix[rows][columns]
		=
		{
			{ 1, 2, 3 },
			{ 4, 5, 6 }
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	function(*(matrix + 0), columns);

	cout << endl;

	function(*(matrix + 1), columns);
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.get();
}

void function(int* ptr_array, int size)
{
	cout << "] array - \'" << ptr_array << "\':" << endl;

	cout << "{" << endl;

	for (auto i = 0; i < size; ++i)
	{
		cout << "\t \'" << *(ptr_array + i) << "\'," << endl;
	}

	cout << "}" << endl;
}