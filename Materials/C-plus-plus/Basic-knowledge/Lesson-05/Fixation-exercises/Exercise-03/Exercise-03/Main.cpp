/*
	[ description of the third fixation exercise ] :
		- Write a program that asks the user to enter two numbers. O
		  program should use a function to calculate the harmonic average of the numbers and
		  return this result to the main function, which should then display the result on the
		  result on the screen.
		  [
				The harmonic average  of two numbers x and y is equal to 2.0 * x * y / (x + y).
		  ]

	[ output ] :
		```
			Enter the first value ( ex: 4.4 )
			: 4.4


			Enter the second value ( ex: 6.2 )
			: 6.2


			[ The harmonic average of 4.4 and 6.2 is 5.14717 ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float harmonic_average_of_the_numbers(float, float);

int main()
{
	float first_value;
	float second_value;
	float harmonic_average_of_two_numbers;
	
	cout << "Enter the first value ( ex: 4.4 )" << endl;
	cout << ": ";
	cin >> first_value;
	
	cout << endl;
	cout << endl;

	cout << "Enter the second value ( ex: 6.2 )" << endl;
	cout << ": ";
	cin >> second_value;

	cout << endl;
	cout << endl;

	harmonic_average_of_two_numbers = harmonic_average_of_the_numbers(first_value, second_value);
	
	cout << "[ The harmonic average of " << first_value << " and " << second_value << " is " << harmonic_average_of_two_numbers << " ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}

float harmonic_average_of_the_numbers(float first_value, float second_value)
{
	return 2.0 * first_value * second_value / (first_value + second_value);
}
