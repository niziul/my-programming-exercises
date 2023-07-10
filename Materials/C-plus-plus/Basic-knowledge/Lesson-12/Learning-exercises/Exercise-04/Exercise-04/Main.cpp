/*
	[ description of the fourth learning exercise ] :
		- Create a struct to define a date (with day, month and year) and another to define
		a time (hour, minutes and seconds). Then create a struct to define an event, consisting
		of a date, a time and a location. Ask the user to enter the data of an event and store it
		in a variable of type event.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter below the information of the event you want to schedule.
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ date     ] : 12 25 2024
			[ time     ] : 15 30 00
			[ location ] : your mother's house

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			--] You have an event scheduled at 25/12/2024 as 15:30:0 in your mother's house
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

struct i_date
{
	int day;
	int month;
	int year;
};

struct i_time
{
	int hour;
	int minutes;
	int seconds;
};

struct i_event
{
	i_date date;
	i_time time;
	char location[120];
};

istream& operator>>(istream&, i_date&);

ostream& operator<<(ostream&, i_date&);

istream& operator>>(istream&, i_time&);

ostream& operator<<(ostream&, i_time&);

istream& operator>>(istream&, i_event&);

ostream& operator<<(ostream&, i_event&);

int main()
{
	auto user_event
		= i_event{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter below the information of the event you want to schedule." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cin >> user_event;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << user_event;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

istream& operator>>(istream& t_istream, i_date& t_i_date)
{
	cin >> t_i_date.month;

	cin
		.ignore();

	cin >> t_i_date.day;

	cin
		.ignore();

	cin >> t_i_date.year;

	cin
		.ignore();

	return t_istream;
}

ostream& operator<<(ostream& t_ostream, i_date& t_i_date)
{
	t_ostream << t_i_date.day;

	t_ostream << "/";

	t_ostream << t_i_date.month;

	t_ostream << "/";

	t_ostream << t_i_date.year;

	return t_ostream;
}

istream& operator>>(istream& t_istream, i_time& t_i_time)
{
	cin >> t_i_time.hour;

	cin
		.ignore();

	cin >> t_i_time.minutes;

	cin
		.ignore();

	cin >> t_i_time.seconds;

	cin
		.ignore();

	return t_istream;
}

ostream& operator<<(ostream& t_ostream, i_time& t_i_time)
{
	t_ostream << t_i_time.hour;

	t_ostream << ":";

	t_ostream << t_i_time.minutes;

	t_ostream << ":";

	t_ostream << t_i_time.seconds;

	return t_ostream;
}

istream& operator>>(istream& t_istream, i_event& t_i_event)
{
	cout << "[ date     ] : ";

	cin >> t_i_event.date;

	cout << "[ time     ] : ";

	cin >> t_i_event.time;

	cout << "[ location ] : ";

	cin
		.getline(t_i_event.location, 120);

	return t_istream;
}

ostream& operator<<(ostream& t_ostream, i_event& t_i_event)
{
	t_ostream << "--] You have an event scheduled at ";

	t_ostream << t_i_event.date;

	t_ostream << " as ";

	t_ostream << t_i_event.time;

	t_ostream << " in ";

	t_ostream << t_i_event.location;

	t_ostream << ".";

	t_ostream << endl;

	return t_ostream;
}
