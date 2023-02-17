/*
	[ description of the third learning exercise ] :
		- Write a function called average() that takes two integer values and returns the
		  arithmetic average of these values.

	[ output ] :
		```
			What is the first value ( x: 10 )?
			: 10


			What is the second value ( ex: 11 )?
			: 11


			[ The average between 10 and 11 is 10.5 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float average_function(int first_value, int second_value);

int main()
{
	int first_value;
	int second_value;
	
	float average_value;

	cout << "What is the first value ( x: 10 )?" << endl;
	cout << ": ";
	cin >> first_value;

	cout << endl;
	cout << endl;

	cout << "What is the second value ( ex: 11 )?" << endl;
	cout << ": ";
	cin >> second_value;

	cout << endl;
	cout << endl;

	average_value = average_function(first_value, second_value);

	cout << "[ The average between " << first_value << " and " << second_value << " is " << average_value << " ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}

float average_function(int first_value, int second_value)
{
	return (first_value + second_value) / 2.0;
}
