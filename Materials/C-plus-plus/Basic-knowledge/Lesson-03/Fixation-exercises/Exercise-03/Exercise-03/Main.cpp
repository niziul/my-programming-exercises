/*
	[ description of the third fixation exercise ] :
		- Write a program that reads your age in years and converts it to days. The program
		should display both values on the screen, as in the example below:

		]
			Enter your age in years: 20

			20 year are equivalent to 7300 days.
		]

	[ output ] :
		```
			Enter your age in years: 20

			20 year are equivalent to 7300 days.
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int age_in_years;

	cout << "Enter your age in years: ";

	cin >> age_in_years;

	cout << endl;

	cout << age_in_years << " year are equivalent to " << age_in_years * 365 << " days.";

	cout << endl;
	
	return 0;
}