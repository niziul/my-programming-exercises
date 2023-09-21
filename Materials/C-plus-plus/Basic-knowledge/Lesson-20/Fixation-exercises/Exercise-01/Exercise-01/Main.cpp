/*
	[ description of the first fixation exercise ] :
		- Write a program that picks a random number between '0' and '10'.
		Ask the user to guess the number pick. The program should write "too
		low" or "too high" for each wrong guess. It should only terminate when
		the user guesses the number correctly.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			-] Picking a random number from '0' to '10'...
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Try to guess the number picked below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			:3
			] too low!

			:5

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			] Congratulations!
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <limits>

#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto random_number
		= new int;

	auto guess_number
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	srand(time(NULL));
	
	*random_number
		= rand() % 10;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "-] picking a random number from \'0\' to \'10\'..." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "try to guess the number picked below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	do
	{
		cout << ":",
		cin >> *guess_number;

		if (*guess_number < *random_number)
		{
			cout << "] too low!" << endl;
		}
		if (*guess_number > *random_number)
		{
			cout << "] too higher!" << endl;
		}

		cout << endl;

	} while (*guess_number != *random_number);

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << "] Congratulations!" << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete random_number;
	delete guess_number;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cin
		.get();
}