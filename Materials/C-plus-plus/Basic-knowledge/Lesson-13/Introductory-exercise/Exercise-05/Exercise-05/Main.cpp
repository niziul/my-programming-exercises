/*
	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the current month number below
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] You are in term time.

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
		
		```v2
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the current month number below
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 12

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] You're on vacation!

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum months
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

int main()
{
	auto start_of_the_school_year
		= FEBRUARY;

	auto end_of_the_school_year
		= NOVEMBER;

	auto current_month
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the current month number below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> current_month;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	if (current_month >= start_of_the_school_year
		&&
		current_month <= end_of_the_school_year)
	{
		cout << "--] You are in term time." << endl;
	}
	else
	{
		cout << "--] You're on vacation!" << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}
