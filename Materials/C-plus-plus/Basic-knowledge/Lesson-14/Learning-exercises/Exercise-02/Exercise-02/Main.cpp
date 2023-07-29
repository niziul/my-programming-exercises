/*
	[ description of the second learning exercise ] :
		- Declare a 'time' struct with the fields 'hours' and 'minutes'. Create a 'display_time'
		function that should receive a pointer to a 'time' and show it in 'hh:mm' format. Ask the
		user to enter the current time and store it in the variable. Using the pointer, increment the
		received 'time' by one hour and then display the corrected time with 'display_time'.

		]
			What time is it? 9:50

			Your watch is late, the correct time is 10:50.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the time of your watch below ( ex: 9:50 )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 9:50

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] Your watch is late, the correct time is 10:50.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct st_time
{
	int hour;
	int minute;
};

void display_time(st_time*);

int main()
{
	auto temp
		= '\0';

	auto time
		= st_time{};

	auto time_ptr
		= &time;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the time of your watch below ( ex: 9:50 )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> time_ptr->hour;
	cin >> temp;
	cin >> time_ptr->minute;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	time_ptr->hour += 1;

	display_time(time_ptr);

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void display_time(st_time* time_ptr)
{
	cout << "- - ] Your watch is late, the correct time is " << time_ptr->hour << ":" << time_ptr->minute << "." << endl;
}