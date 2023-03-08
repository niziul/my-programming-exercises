/*
	[ description of the first learning exercise ] :
		- The company Travel&Tourism has a bus line that runs the route
		  Mossoró-Natal. Considering that the trips are always made in the same day
		  same day, develop a program that allows the user to inform the time of departure and arrival
		  departure and arrival (hour and minute) of the bus. The program must calculate the total time
		  total time of the trip (in hours and minutes).

	[ output ] :
		```
			------------ ------ --- -
			Travel & Tourism
			------------ ------ --- -


			Enter the departure time ( ex: 10:50 )
			[ hours   ] : 10
			[ minutes ] : 50


			Enter the arrival time   ( ex: 14:20 )
			[ hours   ] : 14
			[ minutes ] : 20


			[ The total travel time was 3 hours and 30 minutes. ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float arrival_time_h;
	float arrival_time_m;

	float departure_time_h;
	float departure_time_m;

	float total_travel_time_h;
	float total_travel_time_m;

	cout << "------------ ------ --- -" << endl;
	cout << "Travel & Tourism" << endl;
	cout << "------------ ------ --- -" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter the departure time ( ex: 10:50 )" << endl;
	cout << "[ hours   ] : ";
	cin >> departure_time_h;
	cout << "[ minutes ] : ";
	cin >> departure_time_m;

	cout << endl;
	cout << endl;

	cout << "Enter the arrival time   ( ex: 14:20 )" << endl;
	cout << "[ hours   ] : ";
	cin >> arrival_time_h;
	cout << "[ minutes ] : ";
	cin >> arrival_time_m;

	cout << endl;
	cout << endl;

	total_travel_time_h = arrival_time_h - departure_time_h;

	if (total_travel_time_h < 0)
	{
		total_travel_time_h += 24;
	}

	total_travel_time_m = arrival_time_m - departure_time_m;

	if (total_travel_time_m < 0)
	{
		total_travel_time_m += 60;
		total_travel_time_h -= 1;
	}

	cout << "[ The total travel time was " << total_travel_time_h << " hours and " << total_travel_time_m << " minutes. ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}