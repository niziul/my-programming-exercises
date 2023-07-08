/*
	[ description of the third fixation exercise ] :
		- Create a struct to describe a date. The struct must be able to store the
		day, month (in numeric format), and year (in the numeric format: YYYY). Then
		make a program that takes a person's date of birth and the current date. Calculate
		and show how many days this person has lived.

		Use the newly created type to store the dates and a function to calculate the amount
		days that someone has since birth. The function should take two struct of type 'date' and
		return an integer for the number of days.

		+ Considerer that all months have 31 days;
		+ Disregard leap years;
		+ Do not use decision statements (if/else);

		]
			Date of birth: 01/01/1990
			Today's date: 26/10/2010

			You have 7604 days live.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter your birth date below ( ex: 01 01 1990 )
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 01 01 1990

			Enter today's date below ( ex: 26 10 2010)
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 26 10 2010

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] You have '7604' days live.

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

struct date
{
	int day;
	int month;
	int year;
};

istream& operator>>(istream&, date&);

unsigned int amount_days_that_someone_has_since_birth(date&, date&);

int main()
{
	auto birth_date
		= date{};
	
	auto current_date
		= date{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;

	cout << "Enter your birth date below ( ex: 01 01 1990 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> birth_date;

	cout << endl;

	cout << "Enter today's date below ( ex: 26 10 2010)" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> current_date;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto amount_days_live
		= amount_days_that_someone_has_since_birth(birth_date, current_date);

	cout << "--] You have \'" << amount_days_live << "\' days live." << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
};

istream& operator>>(istream& t_istream, date& t_date)
{
	cin >> t_date.day;

	cin
		.ignore();

	cin >> t_date.month;

	cin
		.ignore();

	cin >> t_date.year;

	cin
		.ignore();

	return t_istream;
}

unsigned int amount_days_that_someone_has_since_birth(date& birth_date, date& current_date)
{
	auto days
		= (birth_date.day - current_date.day);

	auto months
		= (31 * (birth_date.month - current_date.month));

	auto years
		= (365 * (birth_date.year - current_date.year));

	auto t_amount_days_live
		= -(days + months + years);
	
	return t_amount_days_live;
}
