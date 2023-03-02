/*
	[ description of the second fixation exercise ] :
		- Write a program to convert temperatures from Celsius to Fahrenheit.
		  You must create a function that takes a value in Celsius and returns the equivalent
		  equivalent in Fahrenheit and display a message with the result. The output of the program
		  should follow the model below:
		  |
				Fahrenheit = 1.8 x Celsius + 32.0
		  |

	[ output ] :
		```
			Enter a temperature in degrees Celsius ( ex: 20.5 )
			: 20.5


			[ 20.5 degrees Celsius equals 68.9 degrees Fahrenheit. ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float celsius_to_fahrenheit(float);

int main()
{
	float celsius_value;
	float fahrenheit_value;

	cout << "Enter a temperature in degrees Celsius ( ex: 20.5 )" << endl;
	cout << ": ";
	cin >> celsius_value;

	cout << endl;
	cout << endl;

	fahrenheit_value = celsius_to_fahrenheit(celsius_value);

	cout << "[ " << celsius_value << " degrees Celsius equals " << fahrenheit_value << " degrees Fahrenheit. ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

float celsius_to_fahrenheit(float celsius_value)
{
	return 1.8 * celsius_value + 32.0;
}
