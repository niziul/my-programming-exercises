/*
	[ output ] :
		```
			Enter an amount of time in hours
			: 80


			[ This is equivalent to 288000 seconds. ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define SECONDS_PER_HOUR 3600;

int main()
{
	int hours;
	int seconds;

	cout << "Enter an amount of time in hours" << endl;
	cout << ": ";
	cin >> hours;

	cout << endl;
	cout << endl;

	seconds = hours * SECONDS_PER_HOUR;

	cout << "[ This is equivalent to " << seconds << " seconds. ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}