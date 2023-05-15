/*
	[ description of the third learning exercise ] :
		- Write a program that asks the user to enter the number of meters
		  traveled on his/her last trip. Show the equivalent distance in kilometers
		  and meters. Use a constant to represent the number of meters in a kilometer.

	[ output ] :
		```
			<~) -------------------------------- ---------------- -------- ---- -- -

			Enter the distance in meters ( ex: 22800 )
			> 22800

			<~) -------------------------------- ---------------- -------- ---- -- -

			-] '22800' meters equals '22' kilometers and '800' meters

			<~) -------------------------------- ---------------- -------- ---- -- -
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto nextline
		= '\n';
	
	auto user_input
		= 0;

	auto number_of_meters_in_a_kilometer
		= 1000;

	cout << "<~) -------------------------------- ---------------- -------- ---- -- -" << nextline;
	
	cout << nextline;
	
	cout << "Enter the distance in meters ( ex: 22800 )" << nextline;
	cout << "> ";
	cin >> user_input;

	cout << nextline;

	cout << "<~) -------------------------------- ---------------- -------- ---- -- -" << nextline;

	cout << nextline;

	auto equivalent_distance_in_kilometers
		= user_input / number_of_meters_in_a_kilometer;

	auto equivalent_distance_in_meters
		= user_input % number_of_meters_in_a_kilometer;

	cout << "-] \'" << user_input << "\' meters equals \'" << equivalent_distance_in_kilometers << "\' kilometers and \'" << equivalent_distance_in_meters << "\' meters" << nextline;

	cout << nextline;

	cout << "<~) -------------------------------- ---------------- -------- ---- -- -" << nextline;

	cout << nextline;

	system("pause");
}