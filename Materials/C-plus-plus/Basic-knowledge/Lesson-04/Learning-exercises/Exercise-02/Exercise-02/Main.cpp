/*
	[ description of the second learning exercise ] :
		- Build a program that determines the sine of an angle given by the user.
		  To find the sine use the function sin(), defined in the cmath library.

	[ output ] :
		```
			What is the value of the angle ( ex: 90 ) you want to know the sine of?
			: 90


			[ The sine of angle 90 is 1 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float sine_value;
	float angle_value;

	cout << "What is the value of the angle ( ex: 90 ) you want to know the sine of?" << endl;
	cout << ": ";
	cin >> angle_value;

	cout << endl;
	cout << endl;

	sine_value = sin(angle_value * 3.14 / 180);

	cout << "[ The sine of angle " << angle_value << " is " << sine_value << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}