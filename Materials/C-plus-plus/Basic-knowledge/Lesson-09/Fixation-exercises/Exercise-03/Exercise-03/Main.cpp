/*
	[ description of the third fixation exercise ]:
		- Write a program that asks the user to enter a certain amount
		  of seconds as an integer value. The program should show the equivalent
		  in days, hours, minutes, and seconds. Use constants to represent the number
		  of hours in a day, the number of minutes in an hour, and the number of seconds in a minute.
		  

	[ output ]:
		```
			<-> - - - - -- --- - --- -- - - - - <->

			Enter the number of seconds
			> 31600000

			<-> - - - - - - - - - - - - - - -- --- - --- -- - - - - - - - - - - - - - - <->

			-] '31600000' seconds = '365' days, '17' hours, '46' minutes and '40' seconds.

			<-> - - - - - - - - - - - - - - -- --- - --- -- - - - - - - - - - - - - - - <->
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

	auto const number_of_seconds_in_a_day
		= 86400;

	auto const number_of_seconds_in_a_hour
		= 3600;

	auto const number_of_seconds_in_a_minute
		= 60;

	cout << "<-> - - - - -- --- - --- -- - - - - <->" << nextline;

	cout << nextline;

	cout << "Enter the number of seconds" << nextline;
	cout << "> ";
	cin >> user_input;

	cout << nextline;

	cout << "<-> - - - - - - - - - - - - - - -- --- - --- -- - - - - - - - - - - - - - - <->" << nextline;
	
	cout << nextline;
	
	auto days
		= user_input / number_of_seconds_in_a_day;

	auto hours
		= user_input % number_of_seconds_in_a_day / number_of_seconds_in_a_hour;

	auto minutes
		= user_input % number_of_seconds_in_a_hour / number_of_seconds_in_a_minute;
	
	auto seconds
		= user_input % number_of_seconds_in_a_minute;

	cout << "-] \'" << user_input << "\' seconds = \'" << days << "\' days, \'" << hours << "\' hours, \'" << minutes << "\' minutes and \'" << seconds << "\' seconds." << nextline;

	cout << nextline;

	cout << "<-> - - - - - - - - - - - - - - -- --- - --- -- - - - - - - - - - - - - - - <->" << nextline;
	
	cout << nextline;

	system("pause");
}