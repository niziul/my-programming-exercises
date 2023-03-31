/*
	[ description of the third fixation exercise ] :
		- There are approximately 3,156 x 10⁷ seconds in a year. Write a program
		  that asks your age in years and passes this information to a function that must
		  return the equivalent in seconds. Use a symbolic constant to represent the number
		  of seconds in a year.

	[] :
		```
			I----------------------------------------------------I
					Enter your age years ( ex: 25 )
			I----------------------------------------------------I
			: 25


			I----------------------------------------------------I
					Standard Notation
			I----------------------------------------------------I
			--] '25' years correspond to '7.89e+08' seconds.


			I----------------------------------------------------I
					Decimal (fixed) Notation
			I----------------------------------------------------I
			--] '25.0' years correspond to '789000000.0' seconds.
		```
*/

#define seconds_in_a_year 3.156E+7

#define nextline '\n'

#include <iostream>

using std::cin;
using std::cout;

double equivalent_in_seconds(double);

int main()
{
	auto user_age_in_years = 0.0;

	cout << "I----------------------------------------------------I" << nextline;
	cout << "	Enter your age years ( ex: 25 )" << nextline;
	cout << "I----------------------------------------------------I" << nextline;
	cout << ": ";
	cin >> user_age_in_years;

	cout << nextline;
	cout << nextline;

	cout << "I----------------------------------------------------I" << nextline;
	cout << "	Standard Notation" << nextline;
	cout << "I----------------------------------------------------I" << nextline;
	cout << "--] \'" << user_age_in_years << "\' years correspond to \'" << equivalent_in_seconds(user_age_in_years) << "\' seconds." << nextline;

	cout << nextline;
	cout << nextline;

	cout
		.setf(std::ios_base::fixed);

	cout
		.precision(1);

	cout << "I----------------------------------------------------I" << nextline;
	cout << "	Decimal (fixed) Notation" << nextline;
	cout << "I----------------------------------------------------I" << nextline;
	cout << "--] \'" << user_age_in_years << "\' years correspond to \'" << equivalent_in_seconds(user_age_in_years) << "\' seconds." << nextline;

	cout
		.unsetf(std::ios_base::fixed);

	cout << nextline;
	cout << nextline;

	system("pause");
}

double equivalent_in_seconds(double age_in_years)
{
	return age_in_years * seconds_in_a_year;
}
