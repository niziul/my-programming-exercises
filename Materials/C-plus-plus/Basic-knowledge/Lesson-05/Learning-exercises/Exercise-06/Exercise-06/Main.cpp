/*
	[ description of the sixth learning exercise ] :
		- Create 2 functions, one that squares a number, the other cubes it. In the main
		  function, take a value from the user and square the number receive return the value
		  cube, and finally, show the cube of the square of this number, i.e., pass the result from
		  the square function to the cube function. This can be done by passing the call of the square
		  function as an argument to the cube function.

	[ output ] :
		```
			]----- ----- ----- -----
				 Cube and Square
			]----- ----- ----- -----


			Enter a number ( ex: 2.1 )
			: 2.1


			[ Cube           - 9.261   ]


			[ Square         - 4.41    ]


			[ Cube of square - 85.7661 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float return_the_cube_number(float);
float return_the_square_number(float);

int main()
{
	float number;
	float cube_number;
	float square_number;
	float cube_of_square_number;

	cout << "]----- ----- ----- -----" << endl;
	cout << "     Cube and Square    " << endl;
	cout << "]----- ----- ----- -----" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a number ( ex: 2.1 )" << endl;
	cout << ": ";
	cin >> number;

	cout << endl;
	cout << endl;
	
	cube_number
		= return_the_cube_number(number);
	
	square_number
		= return_the_square_number(number);

	cube_of_square_number
		= return_the_cube_number(square_number);

	cout << "[ Cube           - " << cube_number << "   ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ Square         - " << square_number << "    ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ Cube of square - " << cube_of_square_number << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float return_the_cube_number(float number)
{
	return powf( number , 3.0 );
}

float return_the_square_number(float number)
{
	return powf( number , 2.0 );
}
