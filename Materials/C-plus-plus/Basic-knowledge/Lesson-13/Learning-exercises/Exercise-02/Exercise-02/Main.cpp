/*
	[ description of the second learning exercise ] :
		- The Mossoró City Hall produces a monthly booklet with the city's cultural
		program. It wants to have a program that allows it to build a list of events.

		The program must struct the following information of an event:

			a. date (a struct that has three integer values - day, month and year);
			b. time (a struct that has two integer values - hour and minute);
			c. description (a maximum of 18 characters);

		The events must be structs inserted in a vector with a maximum of 10 elements.
		Ask the user to enter the information of 2 events. Then display a summary showing
		all registered events.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter with two events below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - ] #1 :
			[ date        ] : 10 26 2010
			[ time        ] : 16 00
			[ description ] : live music

			- - - - ] #2 :
			[ date        ] : 10 26 2010
			[ time        ] : 18 00
			[ description ] : dance show

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			all registered events
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] 10/26/2010 16:00 - live music
			--] 10/26/2010 18:00 - dance show

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::istream;
using std::ostream;

struct event
{
	struct
	{
		int day;
		int month;
		int year;
	}
	date;

	struct
	{
		int hour;
		int minute;
	}
	time;

	char description[19];
};

istream& operator>>(istream&, event&);
ostream& operator<<(ostream&, event&);

int main()
{
	auto events
		= array<event, 10>{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "Enter with two events below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "- - - - ] #1 : " << endl;
	cin >> events[0];

	cout << endl;

	cout << "- - - - ] #2 : " << endl;
	cin >> events[1];

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "all registered events" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << events[0];
	cout << events[1];

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

istream& operator>>(istream& istream, event& event)
{
	cout << "[ date        ] : ";
	istream >> event.date.month;
	istream
		.ignore();
	istream >> event.date.day;
	istream
		.ignore();
	istream >> event.date.year;

	istream
		.ignore();

	cout << "[ time        ] : ";
	istream >> event.time.hour;
	istream
		.ignore();
	istream >> event.time.minute;

	istream
		.ignore();

	cout << "[ description ] : ";
	istream
		.getline(event.description, 19);

	return istream;
}

ostream& operator<<(ostream& ostream, event& event)
{
	ostream << "--] ";

	ostream << event.date.month;
	ostream << "/";
	ostream << event.date.day;
	ostream << "/";
	ostream << event.date.year;
	
	ostream << " ";

	ostream << event.time.hour;
	ostream << ":";
	if (event.time.minute == 0)
	{
		ostream << "00";
	}
	else
	{
		ostream << event.time.minute;
	}

	ostream << " - ";

	ostream << event.description;

	ostream << endl;

	return ostream;
}
