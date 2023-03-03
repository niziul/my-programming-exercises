/*
	[ description of the fourth learning exercise ] :
		- Polar coordinates represent a vector by its angle with the horizontal axis of the
		  horizontal axis of the Cartesian plane and by its length, also called
		  norm or modulus. The angle that the vector forms with the horizontal can be
		  found by the arc tangent:

		  The function "atan2" from the library "<cmath>" returns the angle in radians. To get the
		  to get the angle in degrees you have to convert it by multiplying the result by 180 and
		  dividing by PI.

		  Write a function that takes the coordinates ( x , y ) of a vector and returns its
		  angle in degrees.

	[ output ] :
		```
			-------------------------------------
			[ Calculating the Polar Coordinates ]
			-------------------------------------


			Enter the value of x ( ex: 10 )
			: 10


			Enter the value of y ( ex: 5 )
			: 5


			[ The angle of the vector is 26.5651 ]
		```
*/

#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

float return_the_polar_coordinates(float, float);

int main()
{
	float x;
	float y;
	float polar_coordinates;

	cout << "-------------------------------------" << endl;
	cout << "[ Calculating the Polar Coordinates ]" << endl;
	cout << "-------------------------------------" << endl;

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

	polar_coordinates = return_the_polar_coordinates( y , x );

	cout << "[ The angle of the vector is " << polar_coordinates << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float return_the_polar_coordinates(float y, float x)
{
	return ( atan2f( y , x ) * 180.0F ) / 3.14159265359F;
}
