/*
	[ description of the second learning exercise ] :
		- Build a function that calculates the body mass index (BMI) of an individual.
		  individual. The function will take the height (m) and the mass (kg) of the individual and return his BMI to the
		  his BMI to the main function. The main function should display the result.
		  [
				BMI = mass / ( height )²
		  ]

	[ output ] :
		```
			------------------------------
			[ Body Mass Index Calculator ]
			------------------------------


			Enter your height ( ex: 1.78 )
			: 1.78


			Enter your mass   ( ex: 75kg )
			: 75


			[ BMI = 23.6713 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float calculate_body_mass_index(float, float);

int main()
{
	float mass;
	float height;
	float body_mass_index;

	cout << "------------------------------" << endl;
	cout << "[ Body Mass Index Calculator ]" << endl;
	cout << "------------------------------" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter your height ( ex: 1.78 )" << endl;
	cout << ": ";
	cin >> height;

	cout << endl;
	cout << endl;

	cout << "Enter your mass   ( ex: 75kg )" << endl;
	cout << ": ";
	cin >> mass;

	cout << endl;
	cout << endl;

	body_mass_index = calculate_body_mass_index(mass, height);

	cout << "[ BMI = " << body_mass_index << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float calculate_body_mass_index(float mass_value, float height_value)
{
	return mass_value / powf(height_value, 2.0);
}
