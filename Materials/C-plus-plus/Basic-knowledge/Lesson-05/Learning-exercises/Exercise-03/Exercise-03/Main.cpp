/*
	[ description of the third learning exercise ] :
		- The normal or modulus of a vector is a real number that represents the length
		  of the vector. So, calculating the norm of a vector is like calculating the
		  distance between a point ( x,y ) and the origin ( 0,0 ). Using |v| as notation for
		  the modulus of a vector v = ( x,y ) belonging to the plane, we have
		  
		  |
				|v| = √x² + y²
		  |

		  Create a function that takes the coordinates ( x,y ) of a vector and returns its
		  modulus. Include the library "cmath" and use the functions "sqrt" and "pow" to calculate square root
		  square root and potentiation.

	[ output ] :
		```
			------------------------------------
			[ Calculating the Norm of a Vector ]
			------------------------------------


			Enter the value of x ( ex: 10 )
			: 10


			Enter the value of y ( ex: 5 )
			: 5


			[ The length of the vector is 11.1803 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float calculating_the_norm_of_a_vector(float, float);

int main()
{
	float x;
	float y;
	float norm_of_a_vector;

	cout << "------------------------------------" << endl;
	cout << "[ Calculating the Norm of a Vector ]" << endl;
	cout << "------------------------------------" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter the value of x ( ex: 10 )" << endl;
	cout << ": ";
	cin >> x;

	cout << endl;
	cout << endl;

	cout << "Enter the value of y ( ex: 5 )" << endl;
	cout << ": ";
	cin >> y;

	cout << endl;
	cout << endl;

	norm_of_a_vector = calculating_the_norm_of_a_vector( x, y );

	cout << "[ The length of the vector is " << norm_of_a_vector << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float calculating_the_norm_of_a_vector(float x, float y)
{
	return sqrtf( powf( x, 2.0 ) + powf( y, 2.0 ) );
}
