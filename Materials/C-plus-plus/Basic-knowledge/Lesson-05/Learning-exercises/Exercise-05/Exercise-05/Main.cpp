/*
	[ description of the fifth learning exercise ] :
		- Now build a program that uses the functions from questions 3 and 4 to read the coordinates of 
		  a vector and display its polar coordinates, that is, its length and angle.

		  Separate it into 3 files: a file containing just the main() function, an inclusion file 
		  containing the function prototypes, and a source file containing the function definitions.

	[ output ] :
		```
			-------------------------------------
			[ Calculating the Polar Coordinates ]
			-------------------------------------


			What's the coordinates of the vector?


			- x ( ex: 10 ) : 10


			- y ( ex: 5 )  : 5


			[ Polar coordinates of the vector - ( 11.1803, 26.5651 ) ]
		```
*/

#include <iostream>
#include "FunctionsForVector.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float x;
	float y;
	float vetor_angle;
	float vetor_length;

	cout << "-------------------------------------" << endl;
	cout << "[ Calculating the Polar Coordinates ]" << endl;
	cout << "-------------------------------------" << endl;

	cout << endl;
	cout << endl;

	cout << "What's the coordinates of the vector?" << endl;

	cout << endl;
	cout << endl;

	cout << "- x ( ex: 10 ) : ";
	cin >> x;

	cout << endl;
	cout << endl;

	cout << "- y ( ex: 5 )  : ";
	cin >> y;

	cout << endl;
	cout << endl;

	vetor_angle = return_the_angle_of_a_vector(x, y);

	vetor_length = return_the_length_of_a_vector(x, y);

	cout << "[ Polar coordinates of the vector - ( " << vetor_length << ", " << vetor_angle << " ) ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}