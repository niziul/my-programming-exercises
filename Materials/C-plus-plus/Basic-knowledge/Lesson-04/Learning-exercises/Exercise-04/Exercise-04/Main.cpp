/*
	[ description of the fourth learning exercise ] -
		- The volume of a cylinder is given by the formula V = πr²h, where r is the radius of the base, h is the
		  height of the cylinder and π is 3.14159. Write a function called volume_cylinder()
		  that takes the height and radius of the base and returns the volume of the cylinder. Write a main
		  main program that reads the height and radius of a cylinder, and use the function
		  volume_cylinder() function to find its volume and then show the result on the screen.

	[ output ] :
		```
			-----------------------------------
			Calculates the Volume of a Cylinder
			-----------------------------------


			What is the radius ( ex: 10 ) of the base of the cylinder?
			: 10


			What is the height ( ex: 5 ) of the cylinder?
			: 5


			[ The volume of the cylinder is 1570.8 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float volume_cylinder_function(float base_value, float height_value);

int main()
{
	float height_value;
	float base_radius_value;
	float cylinder_volume_value;

	cout << "-----------------------------------" << endl;
	cout << "Calculates the Volume of a Cylinder" << endl;
	cout << "-----------------------------------" << endl;

	cout << endl;
	cout << endl;

	cout << "What is the radius ( ex: 10 ) of the base of the cylinder?" << endl;
	cout << ": ";
	cin >> base_radius_value;

	cout << endl;
	cout << endl;

	cout << "What is the height ( ex: 5 ) of the cylinder?" << endl;
	cout << ": ";
	cin >> height_value;

	cout << endl;
	cout << endl;

	cylinder_volume_value = volume_cylinder_function(base_radius_value, height_value);

	cout << "[ The volume of the cylinder is " << cylinder_volume_value << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float volume_cylinder_function(float base_radius_value, float height_value)
{
	return 3.14159 * powf(base_radius_value, 2.0) * height_value;
}
