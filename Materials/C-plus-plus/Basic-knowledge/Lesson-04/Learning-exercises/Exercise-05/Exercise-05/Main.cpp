/*
	[ description of the fifth learning exercise ] :
		- Write a program that asks the user to enter an integer ( positive or negative ).
		  Create and use a function called absolute() to find the absolute value of a number.
		  The absolute() function should take an integer value as parameter and return its absolute
		  value.

	[ output ] :
		```
			What is the number ( ex: -10 ) of which you want to know the absolute value?
			: -10


			[ The absolute value of -10 is 10 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int absolute_function(int integer_number);

int main()
{
	int integer_number_value;
	int absolute_number_value;

	cout << "What is the number ( ex: -10 ) of which you want to know the absolute value?" << endl;
	cout << ": ";
	cin >> integer_number_value;

	cout << endl;
	cout << endl;

	absolute_number_value = absolute_function(integer_number_value);

	cout << "[ The absolute value of " << integer_number_value << " is " << absolute_number_value << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

int absolute_function(int integer_number)
{
	return sqrt(pow(integer_number, 2.0));
}
