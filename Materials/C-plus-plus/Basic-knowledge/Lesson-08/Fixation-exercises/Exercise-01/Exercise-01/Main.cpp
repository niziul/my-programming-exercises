/*
	[ description of the first fixation exercise ] :
		- In a previous exercise we wrote a function to calculate a person's BMI.
		  The function takes the person's height in meters, their body mass in kilograms and returns their
		  their Body Mass Index. The bmi is the mass divided by the square of the height.

		  Now, create two versions of the BMI function: one that works only with values of type
		  "float and another that works only with values of the type "double". The functions can have
		  the same name if the parameter types are different, as in the prototypes shown below.

		  ]
				```
					float bmi(float, float);
					double bmi(double, double);
				```
		  ]

	[ output ] :
		```
			------------------------ ------------ ------ --- -- -
			Body Mass Index
			------------------------ ------------ ------ --- -- -


			Enter your height in meters ( ex: 1.75 )
			------------------------ ------------ ------ --- -- -
			: 1.75


			Enter your mass in kilograms ( ex: 80.0 )
			------------------------ ------------ ------ --- -- -
			: 80.0


			Your body mass index
			------------------------ ------------ ------ --- -- -
			value in type float : 26.122450
			value in type double: 26.122449
			------------------------ ------------ ------ --- -- -
		```
*/

#define next_line '\n'

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

float bmi(float, float);
double bmi(double, double);

int main()
{
	cout
		.setf(std::ios_base::fixed,
		      std::ios_base::floatfield);

	cout
		.precision(6);

	auto user_height = 0.0f;
	auto user_bodymass = 0.0f;

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "Body Mass Index" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	
	cout << next_line;
	cout << next_line;

	cout << "Enter your height in meters ( ex: 1.75 )" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << ": ";
	cin >> user_height;

	cout << next_line;
	cout << next_line;

	cout << "Enter your mass in kilograms ( ex: 80.0 )" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << ": ";
	cin >> user_bodymass;

	cout << next_line;
	cout << next_line;

	cout << "Your body mass index" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << "value in type float : " << bmi((float)user_height, (float)user_bodymass) << next_line;

	cout << "value in type double: " << bmi((double)user_height, (double)user_bodymass) << next_line;
	
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	system("pause");
}

float bmi(float height_value, float bodymass_value)
{
	return bodymass_value / powf( height_value, 2.0 );
}

double bmi(double height_value, double bodymass_value)
{
	return bodymass_value / pow( height_value, 2.0 );
}
