/*
	[ description of the fifth learning exercise ] :
		- Build a program that asks the user for the current time. Declare variables to receive the
		hour and minutes separately. After receiving the current time, tell the user that his clock is
		is one hour behind, and display the correct time, with the time advanced by one hour.

	[ output ] :
		```
			What time ( ex: 10 : 54 ) is it?
			- 10:54

			[ Your clock is running late! ] - it's now 11h:54m
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char unknown;

	int hours_that_the_user_has_entered_h;
	int hours_that_the_user_has_entered_m;

	cout << "What time ( ex: 10 : 54 ) is it?";
	
	cout << endl;

	cout << "- ";
	
	cin >> hours_that_the_user_has_entered_h >> unknown >> hours_that_the_user_has_entered_m;

	cout << endl;

	cout << "[ Your clock is running late! ]";

	cout << " - it's now " << hours_that_the_user_has_entered_h + 1 << "h" << unknown << hours_that_the_user_has_entered_m << "m";

	cout << endl;
	
	return 0;
}