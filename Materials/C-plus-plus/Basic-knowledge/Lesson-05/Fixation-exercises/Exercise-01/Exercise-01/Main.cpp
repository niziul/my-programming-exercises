/*
	[ description of the first fixation exercise ] :
		- Write a program that asks the user to enter a value for hour and
		  another value for minute. The main() function should then pass these two values
		  to a function that displays the values on the screen in the "hh:mm" format.

	[ output ] :
		```
			Enter the number of hours ( ex: 9 )
			: 9
			Enter the number of minutes ( ex: 45 )
			: 45


			it's now [ 9:45 ]
		```
		
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int hours;
int minutes;

void shows_time_in_the_correct_format();

int main()
{
	cout << "Enter the number of hours ( ex: 9 )" << endl;
	cout << ": ";
	cin >> hours;

	cout << "Enter the number of minutes ( ex: 45 )" << endl;
	cout << ": ";
	cin >> minutes;

	cout << endl;
	cout << endl;

	shows_time_in_the_correct_format();

	cout << endl;
	cout << endl;

	system("pause");
}

void shows_time_in_the_correct_format()
{
	cout << "it's now [ " << hours << ":" << minutes << " ]" << endl;
}
