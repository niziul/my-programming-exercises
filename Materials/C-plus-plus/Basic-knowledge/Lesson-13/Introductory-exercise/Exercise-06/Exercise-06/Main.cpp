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
using std::istream;
using std::ostream;

enum months
{
	NONE,
	JAN,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC
};

istream& operator >> (istream&, months&);

int main()
{
	auto start_of_the_school_year
		= FEB;

	auto end_of_the_school_year
		= NOV;

	auto current_month
		= (months)0;

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

istream& operator >> (istream& istream, months& month)
{
	auto num
		= 0;

	istream >> num;

	month
		= (months)num;

	return istream;
}