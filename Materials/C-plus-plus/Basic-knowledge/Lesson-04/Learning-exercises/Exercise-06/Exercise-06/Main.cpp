/*
	[ description of the sixth learning exercise ] :
		- Write an initialize() function that uses four other functions to accomplish its task.
		  the function must write "Initializing system: ",
		  call the power(), check() and activate() functions, and then write "Initialization
		  completed". To simulate the result of the initialization, the function initialize() should
		  return a random integer value, obtained by calling the rand() function.

		  The rand() function belongs to the <cstdlib> library and returns a random number
		  between 0 and 32767 each time it is called. The functions call, check() and activate()
		  functions should be created to display messages, as in the example below.

		  If the result returned by initialize() is greater than 16384, the program
		  should display "System is running", otherwise it should display: "Initialization failed".

	[ output ] :
		```
			Initializing system:

			- Turning on devices

			- Verifying Integrity

			- Activating Processes

			Initialization completed.


			[ System is running ]
		```
*/

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int initialize_function();

void power_function();
void cheack_function();
void activate_function();

int main()
{
	int success_check_number = initialize_function();

	cout << endl;
	cout << endl;

	if (success_check_number > 16384)
	{
		cout << "[ System is running ]" << endl;
	}
	else
	{
		cout << "[ Initialization failed ]" << endl;
	}

	cout << endl;
	cout << endl;

	system("pause");
}

int initialize_function()
{
	srand(time(NULL));

	cout << "Initializing system:" << endl;

	cout << endl;

	power_function();

	cout << endl;
	
	cheack_function();

	cout << endl;
	
	activate_function();

	cout << endl;
	
	cout << "Initialization completed." << endl;

	return rand();
}

void power_function()
{
	cout << "- Turning on devices" << endl;
}

void cheack_function()
{
	cout << "- Verifying Integrity" << endl;
}

void activate_function()
{
	cout << "- Activating Processes" << endl;
}
