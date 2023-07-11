/*
	[ description of the fifth learning exercise ] :
		- Create a function to read, display and subtract elements of type time, defined as
		in the previous exercise. Ask the user to enter the start and end time o their programming
		lesson. Display how many minutes of class there are between the two times, as in the example below:

		]
			[ Start Time ]: 13:55
			[ End Time   ]: 15:45

			Between 13:55 and 15:45 there are 110 minutes, or 1 hour and 53 minutes.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the start time below ( ex: 13 55 )
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 13 55

			Enter the end time below ( ex: 15 45 )
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 15 45

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] Between '13:55' and '15:45' there are '110' minutes, or '1' hour and '53' minutes.

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

struct i_time
{
	int hours;
	int minutes;
};

istream& operator>>(istream&, i_time&);

ostream& operator<<(ostream&, i_time&);

unsigned int operator-(i_time&, i_time&);

unsigned int get_start_time_minutes(i_time&);

unsigned int get_end_time_minutes(i_time&);

int main()
{
	auto start_time
		= i_time{};

	auto end_time
		= i_time{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the start time below ( ex: 13 55 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> start_time;

	cout << endl;

	cout << "Enter the end time below ( ex: 15 45 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> end_time;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto minute_difference
		= start_time - end_time;

	auto hour
		= minute_difference / 60;
	
	auto minute
		= minute_difference % 60;

	cout << "--] Between \'";

	cout << start_time;

	cout << "\'";

	cout << " and ";

	cout << "\'";

	cout << end_time;

	cout << "\' there are \'" << minute_difference << "\' minutes, or \'" << hour << "h and \'" << minute << "\' minutes." << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
};

istream& operator>>(istream& t_istream, i_time& t_i_time)
{
	cin >> t_i_time.hours;

	cin
		.ignore();

	cin >> t_i_time.minutes;

	return t_istream;
}

ostream& operator<<(ostream& t_ostream, i_time& t_i_time)
{
	t_ostream << t_i_time.hours;

	t_ostream << ":";

	t_ostream << t_i_time.minutes;

	return t_ostream;
}

unsigned int operator-(i_time& start_time, i_time& end_time)
{
	return get_start_time_minutes(start_time) - get_end_time_minutes(end_time);
}

unsigned int get_start_time_minutes(i_time& start_time)
{
	return -(start_time.hours * 60) - start_time.minutes;
}

unsigned int get_end_time_minutes(i_time& end_time)
{
	return -(end_time.hours * 60) - end_time.minutes;
}