/*
	[ description of the second review exercise ] :
		- Use 'cin' instructions to read the value of hours and minutes for different
		variables.

	[ output ] :
		```
			What hours is it?
			15:50

			hour: 15
			minutes: 50
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int hour;
	int minutes;
	char unknown;

	cout << "What hours is it?" << endl;

	cin >> hour;
	cin >> unknown;
	cin >> minutes;
	
	cout << endl;

	cout << "hour: " << hour;

	cout << endl;

	cout << "minutes: " << minutes;

	cout << endl;

	return 0;
}