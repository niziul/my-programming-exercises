/*
	[ description of the second introductory exercise ] :
		- Write a program that asks how many kilometers you drove and how many liters
		  of fuel were spent and then show the consumption of your car in km/liter.

	[ output ] :
		```
			How many kilometers have you traveled? ( ex: 300 )
			: 300


			How many liters were consumed during the travel? ( ex: 30 )
			: 30


			[ Your car's consumption was 10 km/liter. ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float distance_traveled_with_the_car;
	float number_of_liters_per_kilometer_consumed;
	float amount_of_liter_used_during_the_distance_covered;

	cout << "How many kilometers have you traveled? ( ex: 300 )" << endl;
	cout << ": ";
	cin >> distance_traveled_with_the_car;

	cout << endl;
	cout << endl;

	cout << "How many liters were consumed during the travel? ( ex: 30 )" << endl;
	cout << ": ";
	cin >> amount_of_liter_used_during_the_distance_covered;

	cout << endl;
	cout << endl;

	number_of_liters_per_kilometer_consumed = distance_traveled_with_the_car / amount_of_liter_used_during_the_distance_covered;
	
	cout << "[ Your car's consumption was " << number_of_liters_per_kilometer_consumed << " km/liter. ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}