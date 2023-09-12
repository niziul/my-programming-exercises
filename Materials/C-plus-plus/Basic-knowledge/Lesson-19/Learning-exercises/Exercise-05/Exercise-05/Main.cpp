/*
	[ description of the fifth learning exercise ] :
		- Build a '16x16' static matrix to store the characters form the ASCII table.
		Build nested loops to fill the matrix with characters from code '0' to '255'.
		Characters from code '0' to '15' should be in the first column of the matrix,
		from code '16' to '31' in the second column and so on.

		Next, ask the user which region of the table they are interested in, create a
		dynamic array to store only the specified (rectangular) region and copy the corresponding
		characters from the static array to the dynamic array. Finally, display the dynamic matrix.

		]
			Enter the coordinates of the region of interest
			
			from : (1,4)
			to   : (8,7)

			A	Q	a	q
			B	R	b	r
			C	S	c	s
			D	T	d	t
			E	U	e	u
			F	V	f	v
			G	W	g	w
			H	X	h	x
		]

	[ output ] :
		```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            Enter the coordinates of the region of interest
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            [ from ]: 1 4
            [ to   ]: 8 7

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            A     Q       a       q
            B     R       b       r
            C     S       c       s
            D     T       d       t
            E     U       e       u
            F     V       f       v
            G     W       g       w
            H     X       h       x

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int rows
    = 16;

const int columns
    = 16;

int main()
{
    char staticMatrix[rows][columns];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    auto currentChar
        = 0;

    for (auto col = 0; col < rows; ++col)
    {
        for (auto row = 0; row < columns; ++row)
        {
            *(*(staticMatrix + row) + col)
                = currentChar++;
        }
    }

    auto from_row
        = 0;
    
    auto from_column
        = 0;

    auto to_row
        = 0;

    auto to_column
        = 0;

    cout << "Enter the coordinates of the region of interest" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "[ from ]: ";
    cin >> from_row >> from_column;
    cout << "[ to   ]: ";
    cin >> to_row >> to_column;

    cout << endl;

    cout << "-" << endl;
    
    cout << endl;

    auto number_of_rows
        = to_row - from_row + 1;
    
    auto number_of_columns
        = to_column - from_column + 1;

    auto dynamicMatrix
        = new char*[number_of_rows];

    for (auto i = 0; i < number_of_rows; ++i)
    {
        *(dynamicMatrix + i)
            = new char[number_of_columns];
    }

    for (auto i = from_row; i <= to_row; ++i)
    {
        for (auto j = from_column; j <= to_column; ++j)
        {
            *(*(dynamicMatrix + (i - from_row)) + (j - from_column))
                = *(*(staticMatrix + i) + j);
        }
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (auto i = 0; i < number_of_rows; ++i)
    {
        for (auto j = 0; j < number_of_columns; ++j)
        {
            cout << *(*(dynamicMatrix + i) + j) << "\t";
        }

        cout << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    for (auto i = 0; i < number_of_rows; ++i)
    {
        delete[] *(dynamicMatrix + i);
    }

    delete[] dynamicMatrix;

    cin
        .get();
}