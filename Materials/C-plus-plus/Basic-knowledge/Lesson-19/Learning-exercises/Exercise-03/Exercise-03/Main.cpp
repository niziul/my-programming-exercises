/*
	[ description of the third learning exercise ] :
		- A matrix is a vector of vectors. So if we use vector notation with matrices,
		the result should be a vector, right? For example, consider the matrix below.

		]
			int matrix[2][3] =
			{
				{ 1, 2, 3 },
				{ 4, 5, 6 }
			};
		]

		We can display the element at position ( 0, 0 ) of the matrix via matrix[0][0],
		but what happens if we tell it to display only matrix[0]. To find out, create a
		program that displays it on the screen:

		+ matrix[0][0]
		+ matrix[0]
		+ &matrix[0][0]

	[ output ] :
		```
		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

		]  *(*(matrix + 0) + 0)          :'1';

		]  *(matrix + 0)                 :'00000234CBF45790';

		] &*(*(matrix + 0) + 0)          :'00000234CBF45790';

		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int const rows = 2;
int const columns = 3;

int main()
{
	auto matrix
		= new int[rows][3]
		{
			{ 1, 2, 3 },
			{ 4, 5, 6 }
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "]  *(*(matrix + 0) + 0) \t :\'" << *(*(matrix + 0) + 0) << "\';" << endl;
	
	cout << endl;

	cout << "]  *(matrix + 0)        \t :\'" << *(matrix + 0) << "\';" << endl;

	cout << endl;
	
	cout << "] &*(*(matrix + 0) + 0) \t :\'" << (matrix + 0) << "\';" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] matrix;

	cin
		.get();
}