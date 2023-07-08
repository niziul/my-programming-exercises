/*
	[ description of the fourth fixation exercise ] :
		- Change the previous program so that 'cin' and 'cout' can be used to read and
		display dates. In addition, the subtraction of date type variable should result in
		the number of days between two dates. Rewrite the man program to use 'cin', 'cout' and
		subtraction with dates.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the first date below ( ex: 01 01 1990 )
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 01 01 1990

			Enter the second date below ( ex: 26 10 2010)
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 26 10 2010

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] '1/1/1990' - '26/10/2010' = 7604'.

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

ostream& operator<<(ostream&, date&);

unsigned int operator-(date&, date&);

int main()
{
	auto first_date
		= date{};

	auto second_date
		= date{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the first date below ( ex: 01 01 1990 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> first_date;

	cout << endl;

	cout << "Enter the second date below ( ex: 26 10 2010)" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> second_date;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto amount_days_between_dates
		= first_date - second_date;

	cout << "--] \'";

	cout << first_date;

	cout << "\'";

	cout << " - ";

	cout << "\'";

	cout << second_date;

	cout << "\' = " << amount_days_between_dates << "\'." << endl;

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

ostream& operator<<(ostream& t_ostream, date& t_date)
{
	t_ostream << t_date.day;

	t_ostream << "/";

	t_ostream << t_date.month;

	t_ostream << "/";

	t_ostream << t_date.year;

	return t_ostream;
}

unsigned int operator-(date& birth_date, date& current_date)
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